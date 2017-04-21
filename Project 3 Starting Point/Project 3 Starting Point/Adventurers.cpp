#include "Adventurers.h"



Adventurers::Adventurers(std::string name) : _name(name)
{
}


Adventurers::~Adventurers()
{
}

void Adventurers::setArchetype(std::string type)
{
	_archetype = type;
}