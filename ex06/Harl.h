#pragma once
#include <iostream>

class Harl
{
	void	debug();
	void	info();
	void	warning();
	void	error();

	int	get_index(std::string level);

public :

	void	complain(std::string level);

};