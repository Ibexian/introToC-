#ifndef _accum_h
#define _accum_h

template <class T>
class Accum {
private:
  T total;
public:
  Accum(T start): total(start) {};
  T operator+=(const T& t){return total = total + t;};
  T GetTotal() {return total;}
};

template <>
class Accum<Person> {
private:
  int total;
public:
  Accum(int start): total(start) {};
  int operator+=(Person& t){return total = total + t.GetNumber();};
  int GetTotal() {return total;}
};

#endif /* end of include guard: _accum_h */
