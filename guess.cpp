#include <iostream>
#include "functions.h"

using namespace std;

int main()
{
  int answer = 1 + (rand() % (10));
  int currentGuess;
  cout << "I'm thinking of a number, can you guess it? " << endl;
  
  while (currentGuess != answer){
    currentGuess = guessAndRespond(answer);
  }
  return 0;
}
