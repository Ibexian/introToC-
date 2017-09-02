#include <vector>
#include <iostream>
#include <algorithm>
#include <functional>

template<typename X>
auto square(X x) -> decltype(x * x) {
  return x * x;
}

int main(int argc, char const *argv[]) {

  std::vector<int> v {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  auto logger = [](const int num){std::cout << num << '\n';};
  for_each(v.begin(), v.end(), logger);

  //total up the vector (in a terrible way)
  int total = 0;
  for_each(v.begin(), v.end(), [&total](const int &num) -> int {total = total + num; return total;});
  std::cout << "total is: " << total << '\n';

  //use a mutable lambda to add one to all in a vector
  for_each(v.begin(), v.end(),
    [](int& x) mutable
      {x++;}
  );

  //reuse saved lambda
  for_each(v.begin(), v.end(), logger);

  int number = 1;
  double dbl = 2.2;
  float flt = 3.2340;

  std::cout << square(number) << '\n';
  std::cout << square(dbl) << '\n';
  std::cout << square(flt) << '\n';

  std::function<int(int)> fibonacci = [&](int n) -> int {
    if (n < 1) {
      return -1;
    } else if (n == 1 || n == 2) {
      return 1;
    } else {
      return fibonacci(n - 1) + fibonacci(n - 2);
    }
  };

  for_each(v.begin(), v.end(), [&](int& x) mutable {
    x = fibonacci(x);
  });

  //logging with range based for loops
  for (auto elem : v) {
    std::cout << elem << '\n';
  }

  //unicode support and literals
  std::string emoji(u8"\u262D");
  std::cout << emoji << " is now available" << '\n';
  std::cout << emoji << R"( and then \n)" << '\n';
  std::cout << R"###( "(raw strings with custom delimeters)" )###" << '\n';

  return 0;
}
