#include "Zombie.h"
#include <iostream>

/*
	A constructor is a special function in C++ that runs when an object is created, used to initialize the object’s attributes.
*/

/*
	Why use : name(name) instead of this->name = name;
		This works too, but the member initializer list:

		Is faster (initializes the variable directly instead of default-construct + assign).

		Is required for const members or reference members (const std::string &refName;).
*/

Zombie::Zombie(std::string Name)
{
	this->name = Name;
}

void Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Zombie [ " << name << " ] has been destroyed." << std::endl;
}
