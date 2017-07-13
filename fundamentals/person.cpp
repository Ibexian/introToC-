
#include "headers/person.h"
#include <iostream>

Person::Person (std::string first, std::string last, int agenum) : firstname(first), lastname(last), age(agenum)
{
}

Person::~Person(){};

std::string Person::GetName() const {
  return firstname + " " + lastname;
}

bool Person::operator<(const Person& p) const{
  return age < p.age;
}

bool Person::operator<(int i) const {
  return age < i;
}

bool operator<(int i, const Person& p) {
  return i < p.GetNumber();
}
