#include "Zombie.h"
#include <iostream>



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
