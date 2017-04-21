#include "Mage.h"
#include "Adventurers.h"

Mage::Mage(std::string name) : Adventurers(name)
{
    setArchetype("Mage");
}


Mage::~Mage()
{
}
