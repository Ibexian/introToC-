#include "person.h"
#include <string>

class Developer :
    public Person
{
private:
  std::string language;
public:
  Developer(std::string first,
    std::string last,
    int agenum,
    std::string lang);
  ~Developer();
  std::string report() const;
};
