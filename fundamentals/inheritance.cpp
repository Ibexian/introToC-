#include "headers/person.h"
#include "headers/developer.h"
#include <iostream>
#include <memory>

using namespace std;

int main(int argc, char const *argv[]) {
  Person* Will = new Person("Will", "K", 940);
  Developer* WillDev = new Developer("Will", "K", 900, "Cpp");

  Person* pWillDev = WillDev;

  std::cout << Will->GetName() << '\n';
  std::cout << WillDev->GetName() << '\n';
  std::cout << pWillDev->GetName() << '\n';

  delete WillDev;
  delete Will;

  auto spWill = make_shared<Developer>("sWill", "sK", 902, "JS");
  std::cout << spWill->GetName() << '\n';

  Developer localD2("Local", "Dev", 999, "Rust");
  Person& localP2 = localD2;
  std::cout << localP2.GetName() << '\n';

  Developer d("Will", "K", 888, "cpp");
  Person* p = &d;
  Developer* pd = static_cast<Developer*>(p);
  std::cout << pd->GetName() << '\n';

  return 0;
}
