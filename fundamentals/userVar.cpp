#include "headers/developer.h"
#include "headers/person.h"
#include "headers/level.h"
#include <iostream>

int main(int argc, char const *argv[]) {

  Developer d1("Will", "Kam", 200, "C++");
  Person p1("Other", "Person", 9);
  Level l = Beginner;

  std::cout << d1.report() << " : "<< l << '\n';
  return 0;
}
