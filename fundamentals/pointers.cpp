#include <string>
#include <iostream>
#include "headers/person.h"

using namespace std;

int DoubleIt(const int& x) {
  return x*2;
}

int main(int argc, char const *argv[]) {

  int a = 3;
  std::cout << "a is " << a << '\n';

  int* pA = &a;
  *pA = 4;
  std::cout << "a is " << a << '\n';

  int b = 100;
  pA = &b;
  (*pA)++;
  std::cout << "a " << a << ", *pA " << *pA << '\n';

  Person Will("Will", "K", 920);
  Person* pWill = &Will;
  (*pWill).SetNumber(900);
  std::cout << "Will: " << Will.GetName() << " " << Will.GetNumber() << '\n';
  std::cout << "pWill: " << pWill->GetName() << " " << pWill->GetNumber() << '\n';

  int& rA = a;
  rA = 5;
  std::cout << "a is " << a << '\n';

  const Person& rWill = Will;
  std::cout << "rWill: " << rWill.GetName() << " " << rWill.GetNumber() << '\n';
  int willNum = rWill.GetNumber();
  std::cout << willNum << '\n';
  
  return 0;
}
