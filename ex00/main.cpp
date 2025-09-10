#include <iostream>
#include "Zombie.h"


Zombie*	newZombie(std::string name);
void	randomChump(std::string name);

void leaks(void) {system("leaks -q zombie");}

int main(void)
{
	atexit(leaks);

	// Heap allocation 
    Zombie* ptr = newZombie("HeapZombie");
    ptr->announce();
    delete ptr;
    ptr = nullptr;

    // Stack allocation 
    randomChump("StackZombie");

	return (0);
}
