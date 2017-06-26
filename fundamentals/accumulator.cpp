#include <iostream>
#include <string>
#include "headers/person.h"
#include "headers/accum.h"

using namespace std;

int main(int argc, char const *argv[]) {
  Accum<int> integers(0);
  integers += 3;
  integers += 7;
  std::cout << integers.GetTotal() << '\n';

  Accum<string> strings("");
  strings += "hello";
  strings += " world";
  std::cout << strings.GetTotal() << '\n';

  Accum<Person> people(0);
  Person p1("Will", "K", 822);
  Person p2("Anony", "Mouse", 23);
  people += p1;
  people += p2;
  std::cout << people.GetTotal() << '\n';

  return 0;
}
