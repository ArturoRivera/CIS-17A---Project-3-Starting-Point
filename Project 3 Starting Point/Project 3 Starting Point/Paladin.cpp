#include "Paladin.h"
#include "Adventurers.h"



Paladin::Paladin(std::string name) : Adventurers(name)
{
    setArchetype("Paladin");
}


Paladin::~Paladin()
{
}
