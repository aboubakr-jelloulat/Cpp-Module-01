#pragma once

#include <iostream>

class Zombie
{
	std::string name;

public :

	Zombie(std::string name);

	void	announce( void );
	
	~Zombie();

};

