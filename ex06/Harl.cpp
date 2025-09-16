#include "Harl.h"

void Harl::debug() { std::cout << "DEBUG" << std::endl; }

void Harl::info() { std::cout << "INFO" << std::endl; }

void Harl::warning() { std::cout << "WARNING" << std::endl; }

void Harl::error() {std::cout << "ERROR" << std::endl; }

int Harl::get_index(std::string level)
{
	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (size_t i = 0; i < levels->length(); i++)
		if (levels[i] == level)
			return i;

	return -1;
}


void Harl::complain(std::string level)
{

	switch (get_index(level))
	{
	case 0:
		debug();
	
	case 1:
		info();

	case 2:
		warning();
	
	case 3:
		error();
		break;
	
	default:
		std::cerr << "Unknown level: " << level <<  std::endl;
	}

}
