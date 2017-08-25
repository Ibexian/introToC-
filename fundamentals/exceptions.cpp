#include <vector>
#include <iostream>
#include "headers/person.h"

using namespace std;

int main(int argc, char const *argv[]) {
  //garbage code to play with exceptions
  try {
    vector<int> v;
    v.push_back(1);
    Person Will("Will", "K", 0);
    int j = v.at(99);
  } catch (out_of_range& e) {
    cout << e.what() << '\n';
  } catch (exception& e) {
    std::cout << e.what() << '\n';
  }

  return 0;
}
