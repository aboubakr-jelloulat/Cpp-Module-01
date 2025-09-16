#include "Zombie.h"

void leaks(void) {system("leaks -q zombie_horde");}

int main(void)
{
    atexit(leaks);



	std::cout << "Test 1 \n" << std::endl;

	{
		Zombie *horde;

		horde = zombieHorde(5, "Baker");
		
		for (int i = 0; i < 5; i++)
			horde[i].announce();

		delete[] horde;

	}
    
	std::cout << "\n\nTest 2 \n" << std::endl;

	{

		Zombie *horde = zombieHorde(1, "A");
		horde[0].announce();

		delete[] horde;

		std::cout << std::endl;

		Zombie *horde2 = zombieHorde(2, "B");
		horde2[0].announce();
		horde2[1].announce();

		delete[] horde2;


	}



    
    return (0);
}
