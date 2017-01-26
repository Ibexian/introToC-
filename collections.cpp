#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
  vector<int> vi;
  for (int i = 0; i < 10; i++) {
    vi.push_back(i);
  }
  for (auto item:vi) {
    cout << item << " ";
  }
  cout << endl;

  vector<string> vs;

  cout << "enter three words ";
  for (int i = 0; i < 3; i++) {
    string s;
    cin  >> s;
    vs.push_back(s);
  }

  for (auto item:vs) {
    cout << item << " ";
  }
  cout << endl;

  sort(begin(vs), end(vs));

  for (auto i = begin(vs); i != end(vs); i++) {
    cout << *i << " ";
  }
  cout << endl;

  int threes = count(begin(vi), end(vi), 3);
  cout << "threes: " << threes << endl;

  int tees = count(begin(vs[0]), end(vs[0]), 't');
  cout << "tees: " << tees << endl;

  return 0;
}
