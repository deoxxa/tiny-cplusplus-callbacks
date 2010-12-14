struct arglist {};
struct functor {};

struct arglist0 : arglist
{
  arglist0()
  {
  }
};
template <class R>
struct functor0 : functor
{
  typedef R rtype;
  typedef arglist0 atype;
  typedef R (*ftype)();

  static R call(ftype function, arglist0* args)
  {
    return function();
  }
};

template <class A0>
struct arglist1 : arglist
{
  A0 a0;
  arglist1(A0 _a0)
  {
    a0 = _a0;
  }
};
template <class R, class A0>
struct functor1 : functor
{
  typedef R rtype;
  typedef arglist1<A0> atype;
  typedef R (*ftype)(A0 a0);

  static R call(ftype function, arglist1<A0>* args)
  {
    return function(args->a0);
  }
};

template <class A0, class A1>
struct arglist2 : arglist
{
  A0 a0;
  A1 a1;
  arglist2(A0 _a0, A1 _a1)
  {
    a0 = _a0;
    a1 = _a1;
  }
};
template <class R, class A0, class A1>
struct functor2 : functor
{
  typedef R rtype;
  typedef arglist2<A0, A1> atype;
  typedef R (*ftype)(A0 a0, A1 a1);

  static R call(ftype function, arglist2<A0, A1>* args)
  {
    return function(args->a0, args->a1);
  }
};

template <class A0, class A1, class A2>
struct arglist3 : arglist
{
  A0 a0;
  A1 a1;
  A2 a2;
  arglist3(A0 _a0, A1 _a1, A2 _a2)
  {
    a0 = _a0;
    a1 = _a1;
    a2 = _a2;
  }
};
template <class R, class A0, class A1, class A2>
struct functor3 : functor
{
  typedef R rtype;
  typedef arglist3<A0, A1, A2> atype;
  typedef R (*ftype)(A0 a0, A1 a1, A2 a2);

  static R call(ftype function, arglist3<A0, A1, A2>* args)
  {
    return function(args->a0, args->a1, args->a2);
  }
};

template <class A0, class A1, class A2, class A3>
struct arglist4 : arglist
{
  A0 a0;
  A1 a1;
  A2 a2;
  A3 a3;
  arglist4(A0 _a0, A1 _a1, A2 _a2, A3 _a3)
  {
    a0 = _a0;
    a1 = _a1;
    a2 = _a2;
    a3 = _a3;
  }
};
template <class R, class A0, class A1, class A2, class A3>
struct functor4 : functor
{
  typedef R rtype;
  typedef arglist4<A0, A1, A2, A3> atype;
  typedef R (*ftype)(A0 a0, A1 a1, A2 a2, A3 a3);

  static R call(ftype function, arglist4<A0, A1, A2, A3>* args)
  {
    return function(args->a0, args->a1, args->a2, args->a3);
  }
};

template <class A0, class A1, class A2, class A3, class A4>
struct arglist5 : arglist
{
  A0 a0;
  A1 a1;
  A2 a2;
  A3 a3;
  A4 a4;
  arglist5(A0 _a0, A1 _a1, A2 _a2, A3 _a3, A4 _a4)
  {
    a0 = _a0;
    a1 = _a1;
    a2 = _a2;
    a3 = _a3;
    a4 = _a4;
  }
};
template <class R, class A0, class A1, class A2, class A3, class A4>
struct functor5 : functor
{
  typedef R rtype;
  typedef arglist5<A0, A1, A2, A3, A4> atype;
  typedef R (*ftype)(A0 a0, A1 a1, A2 a2, A3 a3, A4 a4);

  static R call(ftype function, arglist5<A0, A1, A2, A3, A4>* args)
  {
    return function(args->a0, args->a1, args->a2, args->a3, args->a4);
  }
};

