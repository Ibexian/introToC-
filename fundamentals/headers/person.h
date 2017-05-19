#include <string>
#ifndef _person_h
#define _person_h
class Person {
private:
  std::string firstname;
  std::string lastname;
  int age;

public:
  Person(std::string first,
    std::string last,
    int agenum);
  ~Person();
};
#endif
