
#include "headers/person.h"
#include <iostream>

Person::Person (std::string first, std::string last, int agenum) : firstname(first), lastname(last), age(agenum)
{
  std::cout << "Constructing " << firstname << " " << lastname << '\n';
}

Person::~Person ()
{
    std::cout << "Destructing " << firstname << " " << lastname << '\n';
}
