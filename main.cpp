#include <iostream>
#include <vector>
#include "include/Game.h"
using namespace std;

int main() {
  cout << "Welcome to Blackjack" << endl;

  // Number of players
  int numPlayers = 0;
  while (numPlayers < 1 || numPlayers > 7) {
    cout << "How many players? (1-7) ";
    cin >> numPlayers;
  }

  // Player names
  vector<string> names;
  string name;
  for (int i = 0; i < numPlayers; i++) {
    cout << "Enter player name: ";
    cin >> name;
    names.push_back(name);
  }
  cout << endl;

  // Play the game
  //Game game(names);

  return 0;
}