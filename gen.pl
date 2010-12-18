#!/usr/bin/perl

(defined($ARGV[0]) && defined($ARGV[1]) && ($ARGV[0] =~ /^\d+$/) && ($ARGV[1] =~ /^\d+$/)) || die "Usage: $0 <min> <max>\n";

print "#ifndef _HOOK_H\n";
print "#define _HOOK_H\n";
print "\n";
print "#include <vector>\n";
print "\n";

my $data = do { local $/; <DATA> };

for ($i=$ARGV[0];$i<=$ARGV[1];$i++)
{
  my @nums = (1 .. $i);
  my $c    = $i ? ', ' : '';
  my $ct   = join ', ', map 'class A'.$_, @nums;
  my $t    = join ', ', map 'A'.$_, @nums;
  my $a    = join ', ', map 'a'.$_, @nums;
  my $ta   = join ', ', map 'A'.$_.' a'.$_, @nums;

  my $copy = $data;
  $copy =~ s/_N_/$i/g;
  $copy =~ s/_C_/$c/g;
  $copy =~ s/_CT_/$ct/g;
  $copy =~ s/_T_/$t/g;
  $copy =~ s/_A_/$a/g;
  $copy =~ s/_TA_/$ta/g;

  print "$copy\n";
}

print "#endif";

__DATA__
template <class R_C__CT_>
class Hook_N_
{
public:
  typedef R (*ftype)(_T_);

  ftype getCallback(int n)
  {
    return callbacks[n];
  }

  std::vector<ftype>* getCallbacks()
  {
    return &callbacks;
  }

  int numCallbacks()
  {
    return callbacks.size();
  }

  void addCallback(ftype function)
  {
    callbacks.push_back(function);
  }

  void remCallback(ftype function)
  {
    typename std::vector<ftype>::iterator ia = callbacks.begin();
    typename std::vector<ftype>::iterator ib = callbacks.end();
    for (;ia!=ib;++ia)
    {
      if (*ia == function)
      {
        callbacks.erase(ia);
        break;
      }
    }
  }

  void doAll(_TA_)
  {
    typename std::vector<ftype>::iterator ia = callbacks.begin();
    typename std::vector<ftype>::iterator ib = callbacks.end();
    for (;ia!=ib;++ia)
    {
      ((ftype)*ia)(_A_);
    }
  }

  bool doUntilTrue(_TA_)
  {
    typename std::vector<ftype>::iterator ia = callbacks.begin();
    typename std::vector<ftype>::iterator ib = callbacks.end();
    for (;ia!=ib;++ia)
    {
      if (((ftype)*ia)(_A_) == true)
      {
        return true;
      }
    }

    return false;
  }

  bool doUntilFalse(_TA_)
  {
    typename std::vector<ftype>::iterator ia = callbacks.begin();
    typename std::vector<ftype>::iterator ib = callbacks.end();
    for (;ia!=ib;++ia)
    {
      if (((ftype)*ia)(_A_) == false)
      {
        return true;
      }
    }

    return false;
  }

  R doThis(int n_C__TA_)
  {
    return callbacks[n](_A_);
  }
private:
  std::vector<ftype> callbacks;
};
