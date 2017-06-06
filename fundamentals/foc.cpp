#include <iostream>
using namespace std;

#include "headers/utility.h"

int main(int argc, char const *argv[]) {
  int x;
  cout << "Enter a number" << endl;
  cin >> x;

  std::cout << x << " is ";
  std::string printText = isPrime(x)? "prime" : "not prime";
  std::cout << printText << '\n';

  return 0;
}
