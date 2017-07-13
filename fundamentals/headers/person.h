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
  virtual ~Person();
  virtual std::string GetName() const;
  int GetNumber() const {return age;}
  void SetNumber(int number) {age = number;}
  void SetFirstName(std::string first) {firstname = first;}
  bool operator<(const Person& p) const;
  bool operator<(int i) const;
};

bool operator<(int i, const Person& p);
#endif
