#pragma once
#include <string>
#include "Adventurers.h"
class Mage : public Adventurers
{
public:
	Mage(std::string name);
	~Mage();

	std::string Attack() { return GetName() + " casts magic missle at the darkness!"; }
};

