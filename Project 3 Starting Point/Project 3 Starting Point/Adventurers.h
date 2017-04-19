#pragma once
#include<string>

class Adventurers
{
private:
	std::string _name;
	std::string _archetype;
public:
	Adventurers(std::string name);
	~Adventurers();

	void setArchetype(std::string type);
	std::string getArchetype() { return _archetype; }
	std::string GetName() const { return _name; }
	std::string virtual Attack() { return _name + "attacked with iron fist!"; }
};

