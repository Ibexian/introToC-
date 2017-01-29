#include <string>

class transaction {
private:
  int amount;
  std::string type;

public:
  transaction(int amt, std::string kind);
  std::string report();

};
