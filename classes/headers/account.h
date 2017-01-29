#include <vector>
#include <string>
#include "transaction.h"

class account
{
private:
  int balance;
  std::vector<transaction> log;
public:
  account();
  std::vector<std::string> report();
  bool deposit(int amt);
  bool withdraw(int amt);
  int getBalance(){return balance;};
};
