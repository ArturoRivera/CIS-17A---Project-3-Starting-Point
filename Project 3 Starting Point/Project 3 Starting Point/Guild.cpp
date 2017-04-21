#include "Guild.h"
#include "Adventurers.h"

Guild::Guild(std::string name) : _name(name)
{
}

Guild::~Guild()
{
}


void Guild::AddAdventurer(std::shared_ptr<Adventurers> newAdventurer)
{
    _adventurers.push_back(newAdventurer);
    
}


std::string Guild::GetInfo()
{
    int mages = 0,
    rangers = 0,
    warriors = 0,
    paladins = 0;
    
    std::string output = "Your guild has: \n";
    output += _adventurers.size() > 0 ? std::to_string(_adventurers.size()) + " adventurers\n\n" : "No adventurers!\n\n";
    
    
    for (int i = 0; i < _adventurers.size(); i++)
    {
        if(_adventurers[i]->getArchetype() == "Mage")
            mages++;
        else if (_adventurers[i]->getArchetype() == "Ranger")
            rangers++;
        else if (_adventurers[i]->getArchetype() == "Warrior")
            warriors++;
        else if (_adventurers[i]->getArchetype() == "Paladin")
            paladins++;
    }
    
    output += mages	    > 0 ? std::to_string(mages)		+ " of those are mages\n"       : "You have no mages!\n";
    output += rangers	> 0 ? std::to_string(rangers)	+ " of those are rangers\n"		: "You have no rangers!\n";
    output += warriors	> 0 ? std::to_string(warriors)	+ " of those are warriors\n"	: "You have no warriors!\n";
    output += paladins	> 0 ? std::to_string(paladins)	+ " of those are paladins\n"	: "You have no paladins!\n";
    
    return output;
}


std::string Guild::AttackWithAllAdventurers()
{
    std::string output = "You command everyone to attack! \n\n";
    for (auto adventurer : _adventurers)
    {
        output += adventurer->Attack() + "\n";
    }
    return output;
}

std::string Guild::AttackWithChoice(std::string type)
{
    std::string output = "You command your " + type + "s to attack! \n\n";
    for (auto adventurer : _adventurers)
    {
        if (adventurer->getArchetype() == type)
        {
            output += adventurer->Attack() + "\n";
        }
    }
    return output;
}
