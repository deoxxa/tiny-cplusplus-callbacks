#!/usr/bin/perl

defined($ARGV[0]) || die "Usage: $0 <num>\n";

print "#ifndef _HOOK_TYPEDEFS_H\n";
print "#define _HOOK_TYPEDEFS_H\n";
print "\n";
print "struct arglist {};\n";
print "struct functor {};\n";
print "\n";

for ($i=0;$i<=$ARGV[0];$i++)
{
  if ($i > 0)
  {
    print "template <";
    for ($j=0;$j<$i;$j++)
    {
      print "class A$j";
      if ($j+1 < $i)
      {
        print ", ";
      }
    }
    print ">\n";
  }
  print "struct arglist$i : arglist\n";
  print "{\n";
  for ($j=0;$j<$i;$j++)
  {
    print "  A$j a$j;\n";
  }
  print "  arglist$j(";
  for ($j=0;$j<$i;$j++)
  {
    print "A$j _a$j";
    if ($j+1 < $i)
    {
      print ", ";
    }
  }
  print ")\n";
  print "  {\n";
  for ($j=0;$j<$i;$j++)
  {
    print "    a$j = _a$j;\n";
  }
  print "  }\n";
  print "};\n";
  print 'template <class R';
  for ($j=0;$j<$i;$j++)
  {
    print ", class A$j";
  }
  print ">\n";
  print "struct functor$i : functor\n";
  print "{\n";
  print "  typedef R rtype;\n";
  print "  typedef arglist$i";
  if ($i > 0)
  {
    print "<";
    for ($j=0;$j<$i;$j++)
    {
      print "A$j";
      if ($j+1 < $i)
      {
        print ", ";
      }
    }
    print ">";
  }
  print " atype;\n";
  print "  typedef R (*ftype)(";
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
  print "  static R call(ftype function, arglist$j";
  if ($i > 0)
  {
    print "<";
    for ($j=0;$j<$i;$j++)
    {
      print "A$j";
      if ($j+1 < $i)
      {
        print ", ";
      }
    }
    print ">";
  }
  print "* args)\n";
  print "  {\n";
  print "    return function(";
  for ($j=0;$j<$i;$j++)
  {
    print "args->a$j";
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

print "#endif\n";
