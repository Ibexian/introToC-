#include <iostream>
#include <math.h>
#include <emscripten/bind.h>
#include "headers/utility.h"

using namespace emscripten;

bool isPrime(int x) {
  bool prime = true;

  int maxCount = sqrt(x);

  if (x % 2 == 0) {
    prime = x == 2;
    maxCount = 0;
  }
  if (x % 3 == 0) {
    prime = x == 3;
    maxCount = 0;
  }

  for (int i = 5; i <= maxCount; i++) {
    if (x % i == 0){
      std::cout << "factor found: " << i << '\n';
      prime = false;
      break;
    }
    i++;
  }

  return prime;
}

EMSCRIPTEN_BINDINGS(my_module) {
    function("isPrime", &isPrime);
}
