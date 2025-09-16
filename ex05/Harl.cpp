#include "Harl.h"

void Harl::debug() { std::cout << "DEBUG" << std::endl; }

void Harl::info() { std::cout << "INFO" << std::endl; }

void Harl::warning() { std::cout << "WARNING" << std::endl; }

void Harl::error() {std::cout << "ERROR" << std::endl; }



// https://www.learncpp.com/cpp-tutorial/function-pointers

void Harl::complain(std::string level)
{
    int i = 0;

    t_action func[] = 
    {
        {&Harl::debug,   "DEBUG"},
        {&Harl::info,    "INFO"},
        {&Harl::warning, "WARNING"},
        {&Harl::error,   "ERROR"},
        {NULL, ""},
    };

    while (!func[i].name.empty())
    {
        if (func[i].name == level)
		{
			//Harl h;
            (this->*func[i].fn)();
			return ;
		}
        i++;
    }

	std::cerr << "Unknown level: " << level << std::endl;
}
