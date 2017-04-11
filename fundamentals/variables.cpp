#include <iostream>

int main() {
  int i1 = 1;
  std::cout << "i1= " << i1 << std::endl;
  int i2;
  i2 = 2;
  std::cout << "i2= " << i2 << '\n';
  int i3(3);
  std::cout << "i3= " << i3 << '\n';

  double d1 = 2.2;
  double d2 = i1;
  int i4 = (int) d1;
  std::cout << "d1= " << d1 << '\n';
  std::cout << "d2= " << d2 << '\n';
  std::cout << "i4= " << i4 << '\n';

  char c1 = 'a';
  std::cout << "c1 = " << c1 << '\n';

  bool flag = false;
  std::cout << "flag = " << flag << '\n';
  flag = (bool) i1;
  std::cout << "flag = " << flag << '\n';
  flag = (bool) d1;
  std::cout << "flag = " << flag << '\n';

  return 0;
}
