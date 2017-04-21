#include "Warrior.h"
#include "Adventurers.h"


Warrior::Warrior(std::string name) : Adventurers(name)
{
    setArchetype("Warrior");
}


Warrior::~Warrior()
{
}
