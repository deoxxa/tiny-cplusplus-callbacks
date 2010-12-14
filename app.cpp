#include <cstdio>
#include <vector>

#include "hook.h"

int multiply(int x, int y)
{
  return x*y;
}

int add(int x, int y)
{
  return x+y;
}

int main()
{
  Hook<functor2<int,int,int>::type>* hook = new Hook<functor2<int,int,int>::type>;

  hook->addCallback((functor2<int,int,int>::type)&multiply);
  hook->addCallback((functor2<int,int,int>::type)&add);

  printf("We have %d callback(s)\n", hook->numCallbacks());

  int i = 0;
  int j = hook->numCallbacks();
  for (i=0;i<j;i++)
  {
    printf("Result for callback %d is: %d\n", i, hook->getCallback(i)(4,5));
  }
}
