#include <iostream>
using namespace std;

int main()
{
  int answer = 1 + (rand() % (10));
  int guess;
  cout << "I'm thinking of a number, can you guess it? " << endl;

  while (guess != answer){
    cout << "Enter a number: " << endl;
    //This blows up if it's not a number ¯\_(ツ)_/¯
    cin >> guess;
    if (guess == answer) {
      cout << "You got it! The answer was " << answer << "! Nice job.";
    } else if (guess < answer) {
      cout << "Your guess, " << guess << " is too low  - try again." << endl;
    } else {
      cout << "Your guess, " << guess << " is too high - try again" << endl;
    }
    cout << endl;
  }
  return 0;
}
