#include <vector>

#include "hook_typedefs.h"

template <class T>
class Hook
{
public:
  typename T::type getCallback(int n)
  {
    return functions[n];
  }

  std::vector<typename T::type>* getCallbacks()
  {
    return &functions;
  }

  int numCallbacks()
  {
    return functions.size();
  }

  void addCallback(typename T::type function)
  {
    functions.push_back(function);
  }

  void remCallback(typename T::type function)
  {
    int i = 0;
    int s = functions.size();
    for (;i<s;i++)
    {
      if (functions[i] == function)
      {
        functions.erase(i);
        break;
      }
    }
  }

  void doAll(void** args)
  {
    int i = 0;
    int s = functions.size();
    for (;i<s;i++)
    {
      T::call(functions[i], args);
    }
  }

  bool doOne(void** args)
  {
    int i = 0;
    int s = functions.size();
    for (;i<s;i++)
    {
      if (T::call(functions[i], args))
      {
        return true;
      }
    }
    return false;
  }

  typename T::rtype doThis(int n, void** args)
  {
    return T::call(functions[n], args);
  }
private:
  std::vector<typename T::type> functions;
};
