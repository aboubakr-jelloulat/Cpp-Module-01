#pragma once

#include <iostream>

class Weapon
{
	std::string type;

public :
	Weapon(std::string type);

	const std::string	&getType();
	void				setType(std::string type);
};


/*

Include Guards vs #pragma once


	Problem:

		When a header file is included multiple times, the compiler may see the same declarations more than once, causing "redefinition" errors.

	Using #ifndef / #define / #endif (Include Guards)
	----------------------

	Mechanism:
		- Preprocessor checks if a macro (MYHEADER_H) is defined.
		- If not defined: defines it and includes the header content.
		- If defined: skips the header content.
		- Every time the header is included, the macro is checked.
		- Works everywhere, standard C++.


	Analogy: "Every time you enter the room, check your list if you already brought this toy. If yes, leave it outside."

	 Using #pragma once
	----------------------
	Mechanism:
		- Compiler marks the file internally as "already included".
		- If the file is included again, the compiler skips it entirely.
		- No macros, cleaner syntax, faster compilation in some cases.
		- Non-standard but supported by most modern compilers.


	Key Differences:
	----------------
	- #ifndef: macro check each time, portable, can have macro name collisions
	- #pragma once: file tracking by compiler, no macro needed, slightly faster, non-standard
	
	*/
