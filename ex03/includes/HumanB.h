#pragma once

#include "Weapon.h"

/*

	HumanB is a class where the human might not have a weapon at first.

	That’s why we use a pointer (Weapon*) instead of a reference:

	A pointer can be nullptr (no weapon yet).

*/

class HumanB 
{
	std::string	name;
	Weapon		*weapon;

public:
	HumanB(std::string name);

	void	attack();
	void	setWeapon(Weapon &weapon);


};


  /*
                                                                            
   HumanA vs HumanB                                        
                                                                            
   HumanA:                                                                  
     - Has a Weapon& (reference).                                           
     - Must always be armed (weapon required in constructor).               
     - Reference cannot be null                
                                                                            
   HumanB:                                                                  
     - Has a Weapon* (pointer).                                             
     - May start unarmed (weapon is nullptr by default).                    
     - Needs setWeapon() to assign a weapon later.                          
     - Must check `if (weapon)` before using it → avoid segmentation fault.  */

