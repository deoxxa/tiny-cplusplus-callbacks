#!/usr/bin/perl

defined($ARGV[0]) || die "Usage: $0 <num>\n";

for ($i=0;$i<=$ARGV[0];$i++)
{
  print 'template <class R';
  for ($j=0;$j<$i;$j++) { print ', class A'.$j; }
  print '> struct functor'.$i.' { typedef R (*type)(';
  for ($j=0;$j<$i;$j++) { print 'A'.$j.' a'.$j; if ($j+1 < $i) { print ', '; } }
  print '); };'."\n";
}
