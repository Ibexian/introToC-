#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int guessAndRespond(int answer) {
  int guess;
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
  return guess;
}

string hello() {
  return "Hello, world!\n";
}
