#include <vector>
#include <iostream>
#include <string>
#include <map>
#include <algorithm>
#include "headers/person.h"

bool odd(int i) {
  return i%2;
}

int main(int argc, char const *argv[]) {
  std::vector<int> v;
  v.push_back(3);
  v.push_back(6);
  v.push_back(9);
  v.push_back(2);

  for (auto i = v.begin(); i != v.end(); i++) {
    std::cout << *i << ' ';
  }

  std::cout << '\n';

  for (auto i = v.rbegin(); i != v.rend(); i++){
    std::cout << *i << ' ';
  }

  std::cout << '\n';

  int j = v[2];
  std::cout << j << '\n';


  std::vector<Person> vp;
  Person Will("Will", "K", 999);
  Person Anon("Anon", "Ymous", 888);

  vp.push_back(Will);
  vp.push_back(Anon);

  for (auto ip = vp.begin(); ip != vp.end(); ip++) {
    std::cout << ip->GetName() << ' ';
  }

  std::cout << '\n' << "------------------" << '\n';

  std::map<int,Person> people;
  people.insert(std::make_pair(Will.GetNumber(), Will));
  people.insert(std::make_pair(Anon.GetNumber(), Anon));

  Person Another("Another", "Person", 666);
  std::pair<int, Person> p(Another.GetNumber(), Another);
  people.insert(p);
  //
  for (auto ip = people.begin(); ip != people.end(); ip++) {
    std::cout << ip->first << " " << ip->second.GetName() << ". ";
  }

  std::cout << '\n';

  auto found = people.find(666);
    std::cout << found->first << " " << found->second.GetName() << '\n';

  // std::string who = people[666].GetName();
  // std::cout << "Person at 666 is " << who << '\n';

  std::cout << "------------------------" << '\n';

  std::cout << "contents of v: ";
  std::for_each(v.begin(), v.end(), [](int i) { std::cout << i << " "; });

  std::cout << "odd elements of v: ";
  auto o = find_if(v.begin(), v.end(), odd);
  while (o != v.end()) {
    std::cout << *o << " ";
    o = find_if(++o, v.end(), odd);
  }

  std::cout << '\n';

  std::cout << "contents of v: ";
  std::sort(v.begin(), v.end());
  std::for_each(v.begin(), v.end(), [](int i) { std::cout << i << " "; });

  std::cout << '\n' << "------------------" << '\n';

  int length = Another.GetName().size();
  std::string firstfour = Another.GetName().substr(0,4);
  std::cout << length << " " << firstfour << '\n';

  return 0;
}
