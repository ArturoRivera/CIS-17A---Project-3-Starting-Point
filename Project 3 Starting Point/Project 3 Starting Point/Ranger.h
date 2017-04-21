#pragma once
#include <string>
#include "Adventurers.h"
class Ranger : public Adventurers
{

public:
	Ranger(std::string name);
	~Ranger();

	std::string Attack() { return GetName() + " shoots arrows at his enemies!  PEW PEW PEW"; }
};

