#ifndef WARRIOR_H
#define WARRIOR_H
#include <string>
#include "Player.h"
using namespace std;
const int Warrior_HP = 200;
const int Warrior_MP = 0;
class Warrior :public Player {
public:
	Warrior(string name, Race race) :Player(name, race, Warrior_HP, Warrior_MP) {
	}
	string attack() const override {
		return " I will destroy you with my sword, foul demon! ";
	}


};
#endif // !WARRIOR_H

