#include <vector>

#include "hook_typedefs.h"

template <class T>
class Hook
{
public:
  T getCallback(int n)
  {
    return functions[n];
  }

  std::vector<T>* getCallbacks()
  {
    return &functions;
  }

  int numCallbacks()
  {
    return functions.size();
  }

  void addCallback(T function)
  {
    functions.push_back(function);
  }

  void remCallback(T function)
  {
    typename std::vector<T>::iterator iter_a = functions.begin();
    typename std::vector<T>::iterator iter_b = functions.end();
    for (;iter_a!=iter_b;iter_a++)
    {
      if (functions[iter_a] == function)
      {
        functions.erase(iter_a);
        break;
      }
    }
  }
private:
  std::vector<T> functions;
};
