#include "Harl.h"
#include <stdio.h>


int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Usage : ./harlFilter  [level]" << std::endl;
		return 1;
	}

	Harl h;

	h.complain(av[1]);

	return 0;
}
