#include <iostream>
#include <string>
#include <fstream>
#include "game_of_life.h"
#include <ctime>
using namespace std;

int main() {
    srand(time(nullptr));
	game_of_life the_game;

the_game.stvaranje();
	bool dalje;
	do {
		the_game.iteracija();
		the_game.iscrtaj();

		cout << "Dalje (1/0): ";
		cin >> dalje;
	} while (dalje);

	return 0;
}
