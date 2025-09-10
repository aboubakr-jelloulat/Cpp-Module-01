#pragma once

#include <iostream>

class Zombie
{
    std::string name;

public :
    Zombie();
    ~Zombie();

    void	announce();
    void	SetName(std::string Name);

};

Zombie *zombieHorde(int N, std::string name);
