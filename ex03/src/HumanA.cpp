#include <iostream>
#include "../includes/HumanA.h"

// passing a reference to an existing Weapon object

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {}

void HumanA::attack() {std::cout << name << " attacks with their " << weapon.getType() << std::endl; }
