#include <iostream>
#include <cstdlib>
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
    ptr = NULL;

    std::cout << std::endl;

    // Stack allocation 
    randomChump("StackZombie");

	return (0);
}




/*

	Q: Why do we have newZombie and randomChump?
	A: newZombie allocates on the heap and returns a pointer so you can use the zombie after the function returns. randomChump creates the zombie on the stack and the destructor runs automatically at function exit — it’s for short lived objects.

	Q: When should I use heap allocation instead of stack?
	A: Use heap if the object must outlive the function that created it (longer lifetime, dynamic control). Use stack for short-lived, temporary objects (cheaper and automatic cleanup).

	Q: What happens if I forget delete?
	A: Memory leak: the OS might reclaim memory on program exit but during runtime you leak memory

	Why use : name(name) instead of this->name = name;
		This works too, but the member initializer list:

		Is faster (initializes the variable directly instead of default-construct + assign).

		Is required for const members or reference members (const std::string &refName;).

*/