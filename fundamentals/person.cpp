
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

bool Person::operator<(Person& p) {
  return age < p.age;
}

bool Person::operator<(int i) {
  return age < i;
}

bool operator<(int i, Person& p) {
  return i < p.GetNumber();
}
