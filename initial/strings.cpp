#include <iostream>
#include <string>

using namespace std;

int main() {
  string first;
  string second;

  cout << "Please Enter a Word or Phrase: " << endl;
  getline(cin, first);
  cout << "Great! Ok, one more: " << endl;
  getline(cin, second);

  if (first.length() == second.length()) {
    cout << "They're the same length!" << endl;
  } else if (first.length() > second.length()){
    cout << "The first, \"" + first + "\" is the longest" << endl;
  } else {
    cout << "The second, \"" + second + "\" is the longest" << endl;
  }
  return 0;
}
