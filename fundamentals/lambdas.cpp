#include <vector>
#include <iostream>
#include <algorithm>

int main(int argc, char const *argv[]) {
  std::vector<int> v;
  for(int i = 0; i < 10; i++) {
    v.push_back(i);
  }

  for_each(v.begin(), v.end(), [](int n){ std::cout << n << " ";});
  std::cout << '\n';
  std::cout << '\n' << "-----------------" << '\n';
  for_each(v.begin(),
          v.end(),
          [](int n) {
            std::cout << n << " ";
          }
        );
  std::cout << '\n';
  std::cout << '\n' << "-----------------" << '\n';

  //multiple statements in a lambda
  for_each(v.begin(), v.end(), [](int n){
    std::cout << n;
    if (n % 2 == 0) {
      std::cout << " even " << '\n';
    } else {
      std::cout << " odd " << '\n';
    }
  });
  std::cout << '\n' << "-----------------" << '\n';

  std::vector<int> v2;
  transform(v.begin(), v.end(), back_inserter(v2), [](int n) { return n * n * n; });
  for_each(v2.begin(), v2.end(), [](int n){ std::cout << n << " ";});
  std::cout << '\n';

  //explicitly specifying the return type
  std::vector<double> dv;
  transform(v.begin(), v.end(), back_inserter(dv), [](int n) -> double {
    if (n % 2 == 0 ) {
      return n * n * n;
    } else {
      return n / 2.0;
    }
  });
  for_each(dv.begin(), dv.end(), [](int n){ std::cout << n << " ";});
  std::cout << '\n' << "-----------------" << '\n';

  //Capturing
  int x = 3;
  int y = 7;
  std::cout << "printing elements between " << x << " and " << y << " inclusive" << '\n';
  for_each(v.begin(), v.end(), [x,y](int n){
    if (n >= x && n <= y) {
      std::cout << n << " ";
    }
  });
  std::cout << '\n';
  for_each(v.begin(), v.end(), [](int n) {std::cout << n << " ";});
  std::cout << '\n' << "-----------------" << '\n';

  //capturing everything implicitly [=]
  x = 2;
  y = 9;
  std::cout << "printing elements between " << x << " and " << y << " inclusive" << '\n';
  for_each(v.begin(), v.end(), [=](int n) {
    if ( n >= x && n <= y) {
      std::cout << n << " ";
    }
  });
  std::cout << '\n';
  for_each(v.begin(), v.end(), [](int n) { std::cout << n << " ";});
  std::cout << '\n' << "-----------------" << '\n';

  //capturing by value and changing locally
  x = 1;
  y = 1;
  for_each(v.begin(), v.end(), [=](int& r) mutable {
    const int old = r;
    r *= 2;
    x = y;
    y = old;
  });

  std::cout << "Doubling " << '\n';
  for_each(v.begin(), v.end(), [](int n) { std::cout << n << " ";});
  std::cout << '\n';
  std::cout << "x,y: " << x << ", " << y << '\n';
  std::cout << '\n' << "-----------------" << '\n';

  //capturing by reference
  v.clear();
  for (int i = 0; i < 10; i++) { v.push_back(i);}
  for_each(v.begin(), v.end(), [&x, &y](int& r) {
    const int old = r;
    r *= 2;
    x = y;
    y = old;
  });
  for_each(v.begin(), v.end(), [](int n) { std::cout << n << " ";});
  std::cout << '\n';
  std::cout << "x,y: " << x << ", " << y << '\n';
  std::cout << '\n' << "-----------------" << '\n';

  //Capturing the whole stack by reference
  v.clear();
  int i = 0;
  generate_n(back_inserter(v), 10, [&] { return i++; });
  std::cout << "Initializing" << '\n';
  for_each(v.begin(), v.end(), [](int n) { std::cout << n << " ";});
  std::cout << '\n';
  std::cout << "i: " << i << '\n';
  std::cout << '\n' << "-----------------" << '\n';


  return 0;
}
