#include <iostream>
#include "headers/account.h"

using namespace std;

int main() {
  account a1;
  a1.deposit(90);
  cout << "After deposting $90, balance is $" << a1.getBalance() << endl;
  for(auto s:a1.report()) {
    cout << s << endl;
  }
  a1.withdraw(50);
  if(a1.withdraw(100)){
    cout << "Second withdrawl succeeds" << endl;
  }
  cout << "After withdrawing $50 and $100" << endl;
  for (auto s:a1.report()){
    cout << s << endl;
  }
  return 0;
}
