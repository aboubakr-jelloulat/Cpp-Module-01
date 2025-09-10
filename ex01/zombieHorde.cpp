#include "Zombie.h"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie    *zombies = new Zombie[N];

    for (int c = 0; c < N; c++)
        zombies[c].SetName(name);
    
    return (zombies);
}
