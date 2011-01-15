#include <cstdio>
#include <map>
#include <string>
#include <utility>

#include "hook.h"

int multiply(int x, int y)
{
  int r = x*y;
  return r;
}

int add(int x, int y)
{
  int r = x+y;
  return r;
}

struct Plugin
{
public:
  static Plugin* instance()
  {
    static Plugin m_plugin;
    return &m_plugin;
  }

  bool hasHook(const std::string name)
  {
    return (m_hooks.count(name) > 0) ? true : false;
  }

  Hook* getHook(const std::string name)
  {
    if (hasHook(name))
    {
      return m_hooks[name];
    }

    return NULL;
  }

  void setHook(const std::string name, Hook* hook)
  {
    if (hasHook(name))
    {
      remHook(name);
    }

    m_hooks[name] = hook;
  }

  void remHook(const std::string name)
  {
    if (hasHook(name))
    {
      m_hooks.erase(name);
    }
  }

private:
  Plugin();
  std::map<std::string, Hook*> m_hooks;
};

Plugin::Plugin()
{
  setHook("test", new Hook2<int,int,int>);
}

int main()
{
  Hook2<int,int,int>* hookTest = static_cast<Hook2<int,int,int>*>(Plugin::instance()->getHook("test"));

  hookTest->addCallback(&multiply);
  hookTest->addCallback(&add);

  printf("We have %d callback(s)\n\n", hookTest->numCallbacks());

  printf("Calling all callbacks\n");
  hookTest->doAll(4, 5);
  printf("Done!\n\n");

  if (hookTest->doUntilTrue(4, 5))
  {
    printf("Yay, one of our callbacks returned true or a value that was successfully cast to boolean and evaluated thusly!\n\n");
  }
  else
  {
    printf("Apparently none of our callbacks was up to the task :(\n\n");
  }

  printf("First callback returns: %d\n", hookTest->doThis(0, 4, 5));

  return 0;
}
