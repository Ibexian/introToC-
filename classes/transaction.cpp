#include "headers/transaction.h"

using namespace std;

transaction::transaction(int amt, std::string kind):amount(amt),type(kind)
{

}
string transaction::report() {
  string report;
  report += "   " + type + " " + to_string(amount);
  return report;
}
