#include "Zombie.h"

Zombie::Zombie() {}


Zombie::~Zombie() 
{
    std::cout << "Zombie [ " << name << " ] has been destroyed." << std::endl;
}

void	Zombie::announce() 
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::SetName(std::string Name) {this->name = Name;}
