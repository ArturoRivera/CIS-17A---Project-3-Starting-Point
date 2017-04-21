#include "Ranger.h"
#include "Adventurers.h"



Ranger::Ranger(std::string name) : Adventurers(name)
{
    setArchetype("Ranger");
}


Ranger::~Ranger()
{
}
