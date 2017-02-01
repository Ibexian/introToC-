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
  std::vector<std::string> report() const;
  bool deposit(int amt);
  bool withdraw(int amt);
  int getBalance() const {return balance;};
};
