#include <iostream>
#include <string>

int main(int argc, char const *argv[]) {
  std::cout << "Type your name" << std::endl;
  std::string name;
  std::cin >> name;
  std::cout << "Hello, " << name << '\n';
  return 0;
}
