#pragma once
#include <string>
#include "Adventurers.h"

class Paladin : public Adventurers
{

public:
	Paladin(std::string name);
	~Paladin();

	std::string Attack() { return GetName() + " swings a giant maul at his foes!"; }
};

