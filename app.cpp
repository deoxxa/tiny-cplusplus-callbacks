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

int main()
{
  Hook<functor2<int,int,int> >* hook = new Hook<functor2<int,int,int> >;

  hook->addCallback((functor2<int,int,int>::type)&multiply);
  hook->addCallback((functor2<int,int,int>::type)&add);

  printf("We have %d callback(s)\n\n", hook->numCallbacks());

  void* args[] = { (void*)3, (void*)5 };

  printf("Calling all callbacks\n");
  hook->doAll(args);
  printf("Done!\n\n");

  if (hook->doOne(args))
  {
    printf("Yay, one of our callbacks returned true or a value that was successfully cast to boolean and evaluated thusly!\n\n");
  }
  else
  {
    printf("Apparently none of our callbacks was up to the task :(\n\n");
  }

  printf("First callback returns: %d\n", hook->doThis(0, args));
}
