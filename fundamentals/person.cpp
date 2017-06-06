
#include "headers/person.h"
#include <iostream>

Person::Person (std::string first, std::string last, int agenum) : firstname(first), lastname(last), age(agenum)
{
  std::cout << "Constructing " << GetName() << '\n';
}

Person::~Person ()
{
    std::cout << "Destructing " << GetName() << '\n';
}

std::string Person::GetName() {
  return firstname + " " + lastname;
}
