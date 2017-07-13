#include "headers/developer.h"
#include <iostream>

Developer::Developer(std::string first,
  std::string last,
  int agenum,
  std::string lang): Person(first, last, agenum), language(lang)
{
  std::cout << "Constructing Dev " << language << '\n';
}

Developer::~Developer(){
  std::cout << "Destructing Dev " << language << '\n';
}

std::string Developer::report() const{
  return language;
}

std::string Developer::GetName() const {
  return Person::GetName() + " " + language;
}
