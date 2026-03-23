#ifndef PRIEST_H
#define PRIEST_H
#include <string>
#include "Player.h"
using namespace std;
const int Priest_HP = 100;
const int Priest_MP = 200;
class Priest :public Player {
public:
	Priest(string name, Race race) :Player(name, race, Priest_HP, Priest_MP) {
	}
	string attack() const override {
		return " I will assault you with Holy Wrath! ";
	}


};
#endif // !PRIEST_H
