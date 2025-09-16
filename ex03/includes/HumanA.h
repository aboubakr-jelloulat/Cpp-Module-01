#pragma once

#include "Weapon.h"


/*
	When you create a HumanA object, you must give it a weapon right away.

	Because the weapon can’t be missing, we use a reference instead of a pointer.
	
	*. Why use a reference?

		References in C++:

		Must be initialized when declared.

		Can’t be nullptr (unlike pointers).

		They always refer to a valid object.

		That matches the rule: HumanA always has a weapon.

*/

class HumanA
{
	std::string name;
	Weapon &weapon;

public:
	HumanA(std::string name, Weapon &weapon);

	void	attack();

};
