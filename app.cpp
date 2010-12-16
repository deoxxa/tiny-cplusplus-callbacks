#include <cstdio>

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
  static Plugin* get()
  {
    static Plugin m_self;
    return &m_self;
  }

  Hook2<int,int,int> hookTest;

private:
  Plugin() {}
};

int main()
{
  Plugin::get()->hookTest.addCallback(&multiply);
  Plugin::get()->hookTest.addCallback(&add);

  printf("We have %d callback(s)\n\n", Plugin::get()->hookTest.numCallbacks());

  printf("Calling all callbacks\n");
  Plugin::get()->hookTest.doAll(4, 5);
  printf("Done!\n\n");

  if (Plugin::get()->hookTest.doOne(4, 5))
  {
    printf("Yay, one of our callbacks returned true or a value that was successfully cast to boolean and evaluated thusly!\n\n");
  }
  else
  {
    printf("Apparently none of our callbacks was up to the task :(\n\n");
  }

  printf("First callback returns: %d\n", Plugin::get()->hookTest.doThis(0, 4, 5));
}
