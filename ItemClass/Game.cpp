#include "Game.h"

#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

using namespace std;

Game::Game() {

}

Game::Game(string id, string title, string rentalType, string loanType, int noOfCopy, double fee, string genre) :
	Item(id, title, rentalType, loanType, noOfCopy, fee) {

}
