#!/usr/bin/perl

defined($ARGV[0]) || die "Usage: $0 <num>\n";

print "#include <queue>\n\n";

for ($i=0;$i<=$ARGV[0];$i++)
{
  print 'template <class R';
  for ($j=0;$j<$i;$j++)
  {
    print ", class A$j";
  }
  print ">\n";
  print "struct functor$i\n";
  print "{\n";
  print "  typedef R rtype;\n";
  print "  typedef R (*type)(";
  for ($j=0;$j<$i;$j++)
  {
    print "A$j a$j";
    if ($j+1 < $i)
    {
      print ", ";
    }
  }
  print ");\n";
  print "\n";
  print "  static R call(functor${i}::type function, std::queue<void*> args)\n";
  print "  {\n";
  for ($j=0;$j<$i;$j++)
  {
    print "    A$j a$j = (A$j)(args.front()); args.pop();\n";
  }
  print "    return function(";
  for ($j=0;$j<$i;$j++)
  {
    print "a$j";
    if ($j+1 < $i)
    {
      print ", ";
    }
  }
  print ");\n";
  print "  }\n";
  print "};\n";
  print "\n";
}
