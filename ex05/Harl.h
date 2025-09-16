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

// HarlMethod is now a type name for a pointer to any member function of class Harl

typedef void (Harl::*HarlMethod)(); 



typedef struct s_action
{
    HarlMethod   fn;      // pointer to the method
    std::string  name;
} t_action;


/*
	(Harl::*) — pointer-to-member-of-class Harl : This means the pointer refers to a method that belongs to class Harl, not to a free function.
	HarlMethod — the alias (type name) we create for this kind of pointer.


*/

