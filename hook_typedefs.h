#include <queue>

template <class R>
struct functor0
{
  typedef R rtype;
  typedef R (*type)();

  static R call(functor0::type function, std::queue<void*> args)
  {
    return function();
  }
};

template <class R, class A0>
struct functor1
{
  typedef R rtype;
  typedef R (*type)(A0 a0);

  static R call(functor1::type function, std::queue<void*> args)
  {
    A0 a0 = (A0)(args.front()); args.pop();
    return function(a0);
  }
};

template <class R, class A0, class A1>
struct functor2
{
  typedef R rtype;
  typedef R (*type)(A0 a0, A1 a1);

  static R call(functor2::type function, std::queue<void*> args)
  {
    A0 a0 = (A0)(args.front()); args.pop();
    A1 a1 = (A1)(args.front()); args.pop();
    return function(a0, a1);
  }
};

template <class R, class A0, class A1, class A2>
struct functor3
{
  typedef R rtype;
  typedef R (*type)(A0 a0, A1 a1, A2 a2);

  static R call(functor3::type function, std::queue<void*> args)
  {
    A0 a0 = (A0)(args.front()); args.pop();
    A1 a1 = (A1)(args.front()); args.pop();
    A2 a2 = (A2)(args.front()); args.pop();
    return function(a0, a1, a2);
  }
};

template <class R, class A0, class A1, class A2, class A3>
struct functor4
{
  typedef R rtype;
  typedef R (*type)(A0 a0, A1 a1, A2 a2, A3 a3);

  static R call(functor4::type function, std::queue<void*> args)
  {
    A0 a0 = (A0)(args.front()); args.pop();
    A1 a1 = (A1)(args.front()); args.pop();
    A2 a2 = (A2)(args.front()); args.pop();
    A3 a3 = (A3)(args.front()); args.pop();
    return function(a0, a1, a2, a3);
  }
};

template <class R, class A0, class A1, class A2, class A3, class A4>
struct functor5
{
  typedef R rtype;
  typedef R (*type)(A0 a0, A1 a1, A2 a2, A3 a3, A4 a4);

  static R call(functor5::type function, std::queue<void*> args)
  {
    A0 a0 = (A0)(args.front()); args.pop();
    A1 a1 = (A1)(args.front()); args.pop();
    A2 a2 = (A2)(args.front()); args.pop();
    A3 a3 = (A3)(args.front()); args.pop();
    A4 a4 = (A4)(args.front()); args.pop();
    return function(a0, a1, a2, a3, a4);
  }
};

template <class R, class A0, class A1, class A2, class A3, class A4, class A5>
struct functor6
{
  typedef R rtype;
  typedef R (*type)(A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5);

  static R call(functor6::type function, std::queue<void*> args)
  {
    A0 a0 = (A0)(args.front()); args.pop();
    A1 a1 = (A1)(args.front()); args.pop();
    A2 a2 = (A2)(args.front()); args.pop();
    A3 a3 = (A3)(args.front()); args.pop();
    A4 a4 = (A4)(args.front()); args.pop();
    A5 a5 = (A5)(args.front()); args.pop();
    return function(a0, a1, a2, a3, a4, a5);
  }
};

template <class R, class A0, class A1, class A2, class A3, class A4, class A5, class A6>
struct functor7
{
  typedef R rtype;
  typedef R (*type)(A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6);

  static R call(functor7::type function, std::queue<void*> args)
  {
    A0 a0 = (A0)(args.front()); args.pop();
    A1 a1 = (A1)(args.front()); args.pop();
    A2 a2 = (A2)(args.front()); args.pop();
    A3 a3 = (A3)(args.front()); args.pop();
    A4 a4 = (A4)(args.front()); args.pop();
    A5 a5 = (A5)(args.front()); args.pop();
    A6 a6 = (A6)(args.front()); args.pop();
    return function(a0, a1, a2, a3, a4, a5, a6);
  }
};

template <class R, class A0, class A1, class A2, class A3, class A4, class A5, class A6, class A7>
struct functor8
{
  typedef R rtype;
  typedef R (*type)(A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7);

  static R call(functor8::type function, std::queue<void*> args)
  {
    A0 a0 = (A0)(args.front()); args.pop();
    A1 a1 = (A1)(args.front()); args.pop();
    A2 a2 = (A2)(args.front()); args.pop();
    A3 a3 = (A3)(args.front()); args.pop();
    A4 a4 = (A4)(args.front()); args.pop();
    A5 a5 = (A5)(args.front()); args.pop();
    A6 a6 = (A6)(args.front()); args.pop();
    A7 a7 = (A7)(args.front()); args.pop();
    return function(a0, a1, a2, a3, a4, a5, a6, a7);
  }
};

template <class R, class A0, class A1, class A2, class A3, class A4, class A5, class A6, class A7, class A8>
struct functor9
{
  typedef R rtype;
  typedef R (*type)(A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8);

  static R call(functor9::type function, std::queue<void*> args)
  {
    A0 a0 = (A0)(args.front()); args.pop();
    A1 a1 = (A1)(args.front()); args.pop();
    A2 a2 = (A2)(args.front()); args.pop();
    A3 a3 = (A3)(args.front()); args.pop();
    A4 a4 = (A4)(args.front()); args.pop();
    A5 a5 = (A5)(args.front()); args.pop();
    A6 a6 = (A6)(args.front()); args.pop();
    A7 a7 = (A7)(args.front()); args.pop();
    A8 a8 = (A8)(args.front()); args.pop();
    return function(a0, a1, a2, a3, a4, a5, a6, a7, a8);
  }
};

template <class R, class A0, class A1, class A2, class A3, class A4, class A5, class A6, class A7, class A8, class A9>
struct functor10
{
  typedef R rtype;
  typedef R (*type)(A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9);

  static R call(functor10::type function, std::queue<void*> args)
  {
    A0 a0 = (A0)(args.front()); args.pop();
    A1 a1 = (A1)(args.front()); args.pop();
    A2 a2 = (A2)(args.front()); args.pop();
    A3 a3 = (A3)(args.front()); args.pop();
    A4 a4 = (A4)(args.front()); args.pop();
    A5 a5 = (A5)(args.front()); args.pop();
    A6 a6 = (A6)(args.front()); args.pop();
    A7 a7 = (A7)(args.front()); args.pop();
    A8 a8 = (A8)(args.front()); args.pop();
    A9 a9 = (A9)(args.front()); args.pop();
    return function(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9);
  }
};

template <class R, class A0, class A1, class A2, class A3, class A4, class A5, class A6, class A7, class A8, class A9, class A10>
struct functor11
{
  typedef R rtype;
  typedef R (*type)(A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10);

  static R call(functor11::type function, std::queue<void*> args)
  {
    A0 a0 = (A0)(args.front()); args.pop();
    A1 a1 = (A1)(args.front()); args.pop();
    A2 a2 = (A2)(args.front()); args.pop();
    A3 a3 = (A3)(args.front()); args.pop();
    A4 a4 = (A4)(args.front()); args.pop();
    A5 a5 = (A5)(args.front()); args.pop();
    A6 a6 = (A6)(args.front()); args.pop();
    A7 a7 = (A7)(args.front()); args.pop();
    A8 a8 = (A8)(args.front()); args.pop();
    A9 a9 = (A9)(args.front()); args.pop();
    A10 a10 = (A10)(args.front()); args.pop();
    return function(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  }
};

template <class R, class A0, class A1, class A2, class A3, class A4, class A5, class A6, class A7, class A8, class A9, class A10, class A11>
struct functor12
{
  typedef R rtype;
  typedef R (*type)(A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10, A11 a11);

  static R call(functor12::type function, std::queue<void*> args)
  {
    A0 a0 = (A0)(args.front()); args.pop();
    A1 a1 = (A1)(args.front()); args.pop();
    A2 a2 = (A2)(args.front()); args.pop();
    A3 a3 = (A3)(args.front()); args.pop();
    A4 a4 = (A4)(args.front()); args.pop();
    A5 a5 = (A5)(args.front()); args.pop();
    A6 a6 = (A6)(args.front()); args.pop();
    A7 a7 = (A7)(args.front()); args.pop();
    A8 a8 = (A8)(args.front()); args.pop();
    A9 a9 = (A9)(args.front()); args.pop();
    A10 a10 = (A10)(args.front()); args.pop();
    A11 a11 = (A11)(args.front()); args.pop();
    return function(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11);
  }
};

template <class R, class A0, class A1, class A2, class A3, class A4, class A5, class A6, class A7, class A8, class A9, class A10, class A11, class A12>
struct functor13
{
  typedef R rtype;
  typedef R (*type)(A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10, A11 a11, A12 a12);

  static R call(functor13::type function, std::queue<void*> args)
  {
    A0 a0 = (A0)(args.front()); args.pop();
    A1 a1 = (A1)(args.front()); args.pop();
    A2 a2 = (A2)(args.front()); args.pop();
    A3 a3 = (A3)(args.front()); args.pop();
    A4 a4 = (A4)(args.front()); args.pop();
    A5 a5 = (A5)(args.front()); args.pop();
    A6 a6 = (A6)(args.front()); args.pop();
    A7 a7 = (A7)(args.front()); args.pop();
    A8 a8 = (A8)(args.front()); args.pop();
    A9 a9 = (A9)(args.front()); args.pop();
    A10 a10 = (A10)(args.front()); args.pop();
    A11 a11 = (A11)(args.front()); args.pop();
    A12 a12 = (A12)(args.front()); args.pop();
    return function(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12);
  }
};

template <class R, class A0, class A1, class A2, class A3, class A4, class A5, class A6, class A7, class A8, class A9, class A10, class A11, class A12, class A13>
struct functor14
{
  typedef R rtype;
  typedef R (*type)(A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10, A11 a11, A12 a12, A13 a13);

  static R call(functor14::type function, std::queue<void*> args)
  {
    A0 a0 = (A0)(args.front()); args.pop();
    A1 a1 = (A1)(args.front()); args.pop();
    A2 a2 = (A2)(args.front()); args.pop();
    A3 a3 = (A3)(args.front()); args.pop();
    A4 a4 = (A4)(args.front()); args.pop();
    A5 a5 = (A5)(args.front()); args.pop();
    A6 a6 = (A6)(args.front()); args.pop();
    A7 a7 = (A7)(args.front()); args.pop();
    A8 a8 = (A8)(args.front()); args.pop();
    A9 a9 = (A9)(args.front()); args.pop();
    A10 a10 = (A10)(args.front()); args.pop();
    A11 a11 = (A11)(args.front()); args.pop();
    A12 a12 = (A12)(args.front()); args.pop();
    A13 a13 = (A13)(args.front()); args.pop();
    return function(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13);
  }
};

template <class R, class A0, class A1, class A2, class A3, class A4, class A5, class A6, class A7, class A8, class A9, class A10, class A11, class A12, class A13, class A14>
struct functor15
{
  typedef R rtype;
  typedef R (*type)(A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10, A11 a11, A12 a12, A13 a13, A14 a14);

  static R call(functor15::type function, std::queue<void*> args)
  {
    A0 a0 = (A0)(args.front()); args.pop();
    A1 a1 = (A1)(args.front()); args.pop();
    A2 a2 = (A2)(args.front()); args.pop();
    A3 a3 = (A3)(args.front()); args.pop();
    A4 a4 = (A4)(args.front()); args.pop();
    A5 a5 = (A5)(args.front()); args.pop();
    A6 a6 = (A6)(args.front()); args.pop();
    A7 a7 = (A7)(args.front()); args.pop();
    A8 a8 = (A8)(args.front()); args.pop();
    A9 a9 = (A9)(args.front()); args.pop();
    A10 a10 = (A10)(args.front()); args.pop();
    A11 a11 = (A11)(args.front()); args.pop();
    A12 a12 = (A12)(args.front()); args.pop();
    A13 a13 = (A13)(args.front()); args.pop();
    A14 a14 = (A14)(args.front()); args.pop();
    return function(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14);
  }
};

template <class R, class A0, class A1, class A2, class A3, class A4, class A5, class A6, class A7, class A8, class A9, class A10, class A11, class A12, class A13, class A14, class A15>
struct functor16
{
  typedef R rtype;
  typedef R (*type)(A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10, A11 a11, A12 a12, A13 a13, A14 a14, A15 a15);

  static R call(functor16::type function, std::queue<void*> args)
  {
    A0 a0 = (A0)(args.front()); args.pop();
    A1 a1 = (A1)(args.front()); args.pop();
    A2 a2 = (A2)(args.front()); args.pop();
    A3 a3 = (A3)(args.front()); args.pop();
    A4 a4 = (A4)(args.front()); args.pop();
    A5 a5 = (A5)(args.front()); args.pop();
    A6 a6 = (A6)(args.front()); args.pop();
    A7 a7 = (A7)(args.front()); args.pop();
    A8 a8 = (A8)(args.front()); args.pop();
    A9 a9 = (A9)(args.front()); args.pop();
    A10 a10 = (A10)(args.front()); args.pop();
    A11 a11 = (A11)(args.front()); args.pop();
    A12 a12 = (A12)(args.front()); args.pop();
    A13 a13 = (A13)(args.front()); args.pop();
    A14 a14 = (A14)(args.front()); args.pop();
    A15 a15 = (A15)(args.front()); args.pop();
    return function(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15);
  }
};

template <class R, class A0, class A1, class A2, class A3, class A4, class A5, class A6, class A7, class A8, class A9, class A10, class A11, class A12, class A13, class A14, class A15, class A16>
struct functor17
{
  typedef R rtype;
  typedef R (*type)(A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10, A11 a11, A12 a12, A13 a13, A14 a14, A15 a15, A16 a16);

  static R call(functor17::type function, std::queue<void*> args)
  {
    A0 a0 = (A0)(args.front()); args.pop();
    A1 a1 = (A1)(args.front()); args.pop();
    A2 a2 = (A2)(args.front()); args.pop();
    A3 a3 = (A3)(args.front()); args.pop();
    A4 a4 = (A4)(args.front()); args.pop();
    A5 a5 = (A5)(args.front()); args.pop();
    A6 a6 = (A6)(args.front()); args.pop();
    A7 a7 = (A7)(args.front()); args.pop();
    A8 a8 = (A8)(args.front()); args.pop();
    A9 a9 = (A9)(args.front()); args.pop();
    A10 a10 = (A10)(args.front()); args.pop();
    A11 a11 = (A11)(args.front()); args.pop();
    A12 a12 = (A12)(args.front()); args.pop();
    A13 a13 = (A13)(args.front()); args.pop();
    A14 a14 = (A14)(args.front()); args.pop();
    A15 a15 = (A15)(args.front()); args.pop();
    A16 a16 = (A16)(args.front()); args.pop();
    return function(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16);
  }
};

template <class R, class A0, class A1, class A2, class A3, class A4, class A5, class A6, class A7, class A8, class A9, class A10, class A11, class A12, class A13, class A14, class A15, class A16, class A17>
struct functor18
{
  typedef R rtype;
  typedef R (*type)(A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10, A11 a11, A12 a12, A13 a13, A14 a14, A15 a15, A16 a16, A17 a17);

  static R call(functor18::type function, std::queue<void*> args)
  {
    A0 a0 = (A0)(args.front()); args.pop();
    A1 a1 = (A1)(args.front()); args.pop();
    A2 a2 = (A2)(args.front()); args.pop();
    A3 a3 = (A3)(args.front()); args.pop();
    A4 a4 = (A4)(args.front()); args.pop();
    A5 a5 = (A5)(args.front()); args.pop();
    A6 a6 = (A6)(args.front()); args.pop();
    A7 a7 = (A7)(args.front()); args.pop();
    A8 a8 = (A8)(args.front()); args.pop();
    A9 a9 = (A9)(args.front()); args.pop();
    A10 a10 = (A10)(args.front()); args.pop();
    A11 a11 = (A11)(args.front()); args.pop();
    A12 a12 = (A12)(args.front()); args.pop();
    A13 a13 = (A13)(args.front()); args.pop();
    A14 a14 = (A14)(args.front()); args.pop();
    A15 a15 = (A15)(args.front()); args.pop();
    A16 a16 = (A16)(args.front()); args.pop();
    A17 a17 = (A17)(args.front()); args.pop();
    return function(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17);
  }
};

template <class R, class A0, class A1, class A2, class A3, class A4, class A5, class A6, class A7, class A8, class A9, class A10, class A11, class A12, class A13, class A14, class A15, class A16, class A17, class A18>
struct functor19
{
  typedef R rtype;
  typedef R (*type)(A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10, A11 a11, A12 a12, A13 a13, A14 a14, A15 a15, A16 a16, A17 a17, A18 a18);

  static R call(functor19::type function, std::queue<void*> args)
  {
    A0 a0 = (A0)(args.front()); args.pop();
    A1 a1 = (A1)(args.front()); args.pop();
    A2 a2 = (A2)(args.front()); args.pop();
    A3 a3 = (A3)(args.front()); args.pop();
    A4 a4 = (A4)(args.front()); args.pop();
    A5 a5 = (A5)(args.front()); args.pop();
    A6 a6 = (A6)(args.front()); args.pop();
    A7 a7 = (A7)(args.front()); args.pop();
    A8 a8 = (A8)(args.front()); args.pop();
    A9 a9 = (A9)(args.front()); args.pop();
    A10 a10 = (A10)(args.front()); args.pop();
    A11 a11 = (A11)(args.front()); args.pop();
    A12 a12 = (A12)(args.front()); args.pop();
    A13 a13 = (A13)(args.front()); args.pop();
    A14 a14 = (A14)(args.front()); args.pop();
    A15 a15 = (A15)(args.front()); args.pop();
    A16 a16 = (A16)(args.front()); args.pop();
    A17 a17 = (A17)(args.front()); args.pop();
    A18 a18 = (A18)(args.front()); args.pop();
    return function(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18);
  }
};

template <class R, class A0, class A1, class A2, class A3, class A4, class A5, class A6, class A7, class A8, class A9, class A10, class A11, class A12, class A13, class A14, class A15, class A16, class A17, class A18, class A19>
struct functor20
{
  typedef R rtype;
  typedef R (*type)(A0 a0, A1 a1, A2 a2, A3 a3, A4 a4, A5 a5, A6 a6, A7 a7, A8 a8, A9 a9, A10 a10, A11 a11, A12 a12, A13 a13, A14 a14, A15 a15, A16 a16, A17 a17, A18 a18, A19 a19);

  static R call(functor20::type function, std::queue<void*> args)
  {
    A0 a0 = (A0)(args.front()); args.pop();
    A1 a1 = (A1)(args.front()); args.pop();
    A2 a2 = (A2)(args.front()); args.pop();
    A3 a3 = (A3)(args.front()); args.pop();
    A4 a4 = (A4)(args.front()); args.pop();
    A5 a5 = (A5)(args.front()); args.pop();
    A6 a6 = (A6)(args.front()); args.pop();
    A7 a7 = (A7)(args.front()); args.pop();
    A8 a8 = (A8)(args.front()); args.pop();
    A9 a9 = (A9)(args.front()); args.pop();
    A10 a10 = (A10)(args.front()); args.pop();
    A11 a11 = (A11)(args.front()); args.pop();
    A12 a12 = (A12)(args.front()); args.pop();
    A13 a13 = (A13)(args.front()); args.pop();
    A14 a14 = (A14)(args.front()); args.pop();
    A15 a15 = (A15)(args.front()); args.pop();
    A16 a16 = (A16)(args.front()); args.pop();
    A17 a17 = (A17)(args.front()); args.pop();
    A18 a18 = (A18)(args.front()); args.pop();
    A19 a19 = (A19)(args.front()); args.pop();
    return function(a0, a1, a2, a3, a4, a5, a6, a7, a8, a9, a10, a11, a12, a13, a14, a15, a16, a17, a18, a19);
  }
};

