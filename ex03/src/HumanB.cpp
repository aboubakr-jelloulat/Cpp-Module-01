#include <iostream>
#include "../includes/HumanB.h"

HumanB::HumanB(std::string name) {this->name = name;}
 

void	HumanB::setWeapon(Weapon &weapon) {this->weapon = &weapon;}


void	HumanB::attack()
{
	if (weapon)
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	else
		std::cout << name << " has no weapon!" << std::endl;
}
