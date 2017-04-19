#pragma once
#include <string>
#include <vector>
#include <memory>
#include "Mage.h"
#include "Paladin.h"
#include "Ranger.h"
#include "Warrior.h"
#include "Adventurers.h"

class Guild
{
private:
	std::vector<std::shared_ptr<Adventurers>> _adventurers;
	
	std::string _name;
	int _gold = 0;
public:
	Guild(std::string name);
	~Guild();

	std::string GetName() const { return _name; }
	void AddMage(std::string name);
	void AddPaladin(std::string name);
	void AddRanger(std::string name);
	void AddWarrior(std::string name);

	std::string GetInfo();

	std::string AttackWithMages();
	std::string AttackWithPaladins();
	std::string AttackWithRangers();
	std::string AttackWithWarriors();
	std::string AttackWithAllAdventurers();
};

