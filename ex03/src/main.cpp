#include "../includes/HumanA.h"
#include "../includes/HumanB.h"
#include "../includes/Weapon.h"


static void	foo() { system("leaks -q violence");}

int main()
{
	atexit(foo);

	/*
		This explicit block creates a local scope. 
		Variables declared here are destroyed when the block ends. This is used to show lifetimes.
	*/

	{
		Weapon club = Weapon("crude spiked club");
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}

	std::cout << std::endl;

	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}

	return 0;
}

