#!/usr/bin/perl

(defined($ARGV[0]) && defined($ARGV[1]) && ($ARGV[0] =~ /^\d+$/) && ($ARGV[1] =~ /^\d+$/) && ($ARGV[0] <= $ARGV[1])) || die "Usage: $0 <min> <max>\n";

print "#ifndef _HOOK_H\n";
print "#define _HOOK_H\n";
print "\n";
print "#include <vector>\n";
print "#include <utility>\n";
print "#include <cstdarg>\n";
print "\n";
print "template <typename T> struct va_widened { typedef T t; };\n";
print "template <> struct va_widened<signed char> { typedef int t; };\n";
print "template <> struct va_widened<signed short> { typedef int t; };\n";
print "template <> struct va_widened<signed int> { typedef int t; };\n";
print "template <> struct va_widened<unsigned char> { typedef int t; };\n";
print "template <> struct va_widened<unsigned short> { typedef int t; };\n";
print "template <> struct va_widened<unsigned int> { typedef int t; };\n";
print "template <> struct va_widened<float> { typedef double t; };\n";
print "template <> struct va_widened<double> { typedef double t; };\n";
print "\n";
print "class Hook\n";
print "{\n";
print "public:\n";
print "  virtual void addCallback(void* function) {}\n";
print "  virtual void addIdentifiedCallback(void* identifier, void* function) {}\n";
print "  virtual bool hasCallback(void* function) { return false; }\n";
print "  virtual void remCallback(void* function) {}\n";
print "  virtual bool doUntilTrueVA(va_list vl) { return false; }\n";
print "  virtual bool doUntilFalseVA(va_list vl) { return false; }\n";
print "  virtual void doAllVA(va_list vl) {}\n";
print "};\n";
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
  my $vta  = join "\n", map '    A'.$_.' a'.$_.' = static_cast<A'.$_.'>(va_arg(vl, typename va_widened<A'.$_.'>::t));', @nums;

  my $copy = $data;
  $copy =~ s/_N_/$i/g;
  $copy =~ s/_C_/$c/g;
  $copy =~ s/_CT_/$ct/g;
  $copy =~ s/_T_/$t/g;
  $copy =~ s/_A_/$a/g;
  $copy =~ s/_TA_/$ta/g;
  $copy =~ s/_VTA_/$vta/g;

  print "$copy\n";
}

print "#endif\n";

__DATA__
template <class R_C__CT_>
class Hook_N_ : public Hook
{
public:
  typedef R (*fatype_t)(_T_);
  typedef R (*fitype_t)(void*_C__T_);

  fatype_t getCallback(int n)
  {
    return m_callbacks[n].second;
  }

  void* getCallbackIdentifier(int n)
  {
    return m_callbacks[n].first;
  }

  std::vector<std::pair<void*,void*> >* getCallbacks()
  {
    return &m_callbacks;
  }

  int numCallbacks()
  {
    return m_callbacks.size();
  }

  bool hasCallback(void* function)
  {
    typename std::vector<std::pair<void*,void*> >::iterator ia = m_callbacks.begin();
    typename std::vector<std::pair<void*,void*> >::iterator ib = m_callbacks.end();
    for (;ia!=ib;++ia)
    {
      if ((ia)->second == function)
      {
        return true;
      }
    }

    return false;
  }

  bool hasCallback(fatype_t function)
  {
    return hasCallback(reinterpret_cast<void*>(function));
  }

  bool hasCallback(fitype_t function)
  {
    return hasCallback(reinterpret_cast<void*>(function));
  }

  void addIdentifiedCallback(void* identifier, void* function)
  {
    m_callbacks.push_back(std::pair<void*,void*>(identifier,function));
  }

  void addIdentifiedCallback(void* identifier, fatype_t function)
  {
    addIdentifiedCallback(identifier, reinterpret_cast<void*>(function));
  }

  void addIdentifiedCallback(void* identifier, fitype_t function)
  {
    addIdentifiedCallback(identifier, reinterpret_cast<void*>(function));
  }

  void addCallback(void* function)
  {
    addIdentifiedCallback(NULL, function);
  }

  void addCallback(fatype_t function)
  {
    addCallback(reinterpret_cast<void*>(function));
  }

  void remCallback(void* function)
  {
    typename std::vector<std::pair<void*,void*> >::iterator ia = m_callbacks.begin();
    typename std::vector<std::pair<void*,void*> >::iterator ib = m_callbacks.end();
    for (;ia!=ib;++ia)
    {
      if (ia->second == function)
      {
        m_callbacks.erase(ia);
        break;
      }
    }
  }

  void remCallback(fatype_t function)
  {
    remCallback(reinterpret_cast<void*>(function));
  }

  void remCallback(fitype_t function)
  {
    remCallback(reinterpret_cast<void*>(function));
  }

  void doAll(_TA_)
  {
    typename std::vector<std::pair<void*,void*> >::iterator ia = m_callbacks.begin();
    typename std::vector<std::pair<void*,void*> >::iterator ib = m_callbacks.end();
    for (;ia!=ib;++ia)
    {
      if (ia->first == NULL)
      {
        (reinterpret_cast<fatype_t>(ia->second))(_A_);
      }
      else
      {
        (reinterpret_cast<fitype_t>(ia->second))(ia->first_C__A_);
      }
    }
  }

  void doAllVA(va_list vl)
  {
_VTA_

    doAll(_A_);
  }

  bool doUntilTrue(_TA_)
  {
    typename std::vector<std::pair<void*,void*> >::iterator ia = m_callbacks.begin();
    typename std::vector<std::pair<void*,void*> >::iterator ib = m_callbacks.end();
    for (;ia!=ib;++ia)
    {
      if (ia->first == NULL)
      {
        if ((reinterpret_cast<fatype_t>(ia->second))(_A_))
        {
          return true;
        }
      }
      else
      {
        if ((reinterpret_cast<fitype_t>(ia->second))(ia->first_C__A_))
        {
          return true;
        }
      }
    }

    return false;
  }

  bool doUntilTrueVA(va_list vl)
  {
_VTA_

    return doUntilTrue(_A_);
  }

  bool doUntilFalse(_TA_)
  {
    typename std::vector<std::pair<void*,void*> >::iterator ia = m_callbacks.begin();
    typename std::vector<std::pair<void*,void*> >::iterator ib = m_callbacks.end();
    for (;ia!=ib;++ia)
    {
      if (ia->first == NULL)
      {
        if (!(reinterpret_cast<fatype_t>(ia->second))(_A_))
        {
          return true;
        }
      }
      else
      {
        if (!(reinterpret_cast<fitype_t>(ia->second))(ia->first_C__A_))
        {
          return true;
        }
      }
    }

    return false;
  }

  bool doUntilFalseVA(va_list vl)
  {
_VTA_

    return doUntilFalse(_A_);
  }

  R doThis(int n_C__TA_)
  {
    std::pair<void*,void*>* cb = &(m_callbacks[n]);

    if (cb->first == NULL)
    {
      return (reinterpret_cast<fatype_t>(cb->second))(_A_);
    }
    else
    {
      return (reinterpret_cast<fitype_t>(cb->second))(cb->first_C__A_);
    }
  }

  R doThisVA(int n, va_list vl)
  {
_VTA_

    return doThis(n_C__A_);
  }

private:
  std::vector<std::pair<void*,void*> > m_callbacks;
};
