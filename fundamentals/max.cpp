#include <iostream>
#include "headers/person.h"

using namespace std;

template <class T>
T max(T& t1, T& t2) {
  return t1 < t2? t2: t1;
}

int main(int argc, char const *argv[]) {
  std::cout << "max of 33 and 44 is " << max(33, 44) << '\n';

  std::string s1 = "hello";
  std::string s2 = "world";
  std::cout << "max of " << s1 << " and " << s2 << " is " << max(s1, s2) << '\n';

  Person p1("Will", "K", 822);
  Person p2("Anony", "mouse", 23);
  std::cout << "max of " << p1.GetName() << " and " << p2.GetName() << " is " << max(p1, p2).GetName() << '\n';


  return 0;
}
