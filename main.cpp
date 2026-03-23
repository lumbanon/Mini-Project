#include <string>
#include "Player.h"
#include "Priest.h"
#include "Warrior.h"
#include "Mage.h"
#include <iostream>
#include <array>
#include <cmath>
#include <vector>

using namespace std;
void runGame();
void menu();
void input(vector<Player*>& players);
void output(vector<Player*>& players);
Race getRace(int raceNum);
Player* createPlayer(string name, int professionNum, Race userRace);
int main() {
	runGame();
	return 0;
}
void runGame() {

	menu();
}
void menu() {

	cout << "||Welcome to Zero RPG Game||" << endl;
	
	vector<Player*> players;
	//race
	input(players);
	output(players);

}
void input(vector<Player*>& players) {
	
	string name;
	int profession, race;
	Race userRace;
	do {
		
		cout << "Name your character: ";
		getline(cin, name);
	
		cout << "\nPick your race: 1 for human, 2 for elf, 3 for dwarf, 4 for orc, 5 for troll: ";
		while (true) {
			if (cin >> race && race >= 1 && race <= 5) {
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				break;
			}

			cin.clear(); // reset fail state
			cin.ignore(numeric_limits<streamsize>::max(), '\n'); // discard bad input
			cout << "Invalid input. Try again: ";
		
		}
		userRace = getRace(race);
		cout << "\nPick your profession: 1 for mage, 2 for warrior, 3 for priest, 0 to exit: ";


		while (true) {
			if (cin >> profession && (profession == 0 || (profession >= 1 && profession <= 3))) {
				cin.ignore(numeric_limits<streamsize>::max(), '\n');
				break;
			}

			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
			cout << "Invalid input. Try again: ";
		}
		
	
		if (profession != 0) {
			players.push_back(createPlayer(name, profession, userRace));
		}
	

		
	} while (profession != 0);
	
	
}
void output(vector<Player*>& players) {
	for (int i = 0; i < players.size(); ++i) {
		cout << "Your name is " << players[i]->getName() << endl;
		cout << "You are a " << players[i]->whatRace() << " and your attack is" << players[i]->attack() << endl;
	}
	for (int i = 0; i < players.size(); ++i) {
		delete players[i];
		players[i] = nullptr;
	}
}
Race getRace(int raceNum) {
	switch (raceNum) {
	case 1:
		return Race::HUMAN;

	case 2:
		return  Race::ELF;

	case 3:
		return Race::DWARF;

	case 4:
		return Race::ORC;

	case 5:
		return Race::TROLL;
	default: 
		return Race::HUMAN;
	}
}
Player* createPlayer(string name, int professionNum, Race userRace) {
	switch (professionNum) {
	case 1:
	{
		return new Mage(name, userRace);
		
	}
	case 2:
	{
		return new Warrior(name, userRace);
	
	}
	case 3:
	{
		return new Priest(name, userRace);
		
	}
	default:
		return nullptr;
	}

}