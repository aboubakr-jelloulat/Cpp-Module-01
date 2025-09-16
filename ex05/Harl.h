#pragma once
#include <iostream>

class Harl
{
	void	debug();
	void	info();
	void	warning();
	void	error();

public :

	void	complain(std::string level);

};

typedef void (Harl::*HarlMethod)();  // pointer to Harl method

	// (Harl::*) — pointer-to-member-of-class Harl : This means the pointer refers to a method that belongs to class Harl, not to a free function.
	//() — the parameter list: here it means no parameters.
	//HarlMethod — the alias (type name) we create for this kind of pointer.

typedef struct s_action
{
    HarlMethod   fn;      // pointer to the method
    std::string  name;    // name like "DEBUG"
} t_action;

