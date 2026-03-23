#ifndef MAGE_H
#define MAGE_H
#include <string>
#include "Player.h"
using namespace std;
const int Mage_HP = 150;
const int Mage_MP = 150;
class Mage:public Player {
	public:
		Mage(string name, Race race) :Player(name, race, Mage_HP, Mage_MP) {

	}
		string attack() const override {
			return " I will crush you with the power of my arcane missiles! ";
		}
	


};
#endif // !MAGE_H
