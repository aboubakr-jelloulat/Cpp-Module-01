#include "Zombie.h"

void leaks(void) {system("leaks -q zombie_horde");}

int main(void)
{
    atexit(leaks);


	// *** Test 1 ***

    //Zombie *horde;

    // horde = zombieHorde(5, "Baker");
    
    // for (int i = 0; i < 5; i++)
    //     horde[i].announce();

    // delete[] horde;


	// *** Test 2 *** 

	Zombie *horde1 = zombieHorde(1, "A");
	horde1[0].announce();

	delete[] horde1;

	Zombie *horde2 = zombieHorde(2, "B");
	horde2[0].announce();
	horde2[1].announce();

	delete[] horde2;
    
    return (0);
}
