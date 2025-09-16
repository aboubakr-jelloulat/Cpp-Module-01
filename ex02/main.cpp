#include <iostream>


	/* Refrences :

			https://codefinity.com/blog/References-vs-Pointers-in-C-plus-plus
			https://www3.ntu.edu.sg/home/ehchua/programming/cpp/cp4_PointerReference.html

        Here’s my blog about Pointers vs References in C++ : https://aboubakr-jelloulat.github.io/posts/Refrences-vs-Pointers-in-C++/

	*/

int main(void)
{

    std::string	string = "HI THIS IS BRAIN";

	std::string	*stringPTR = &string;

	std::string	&stringREF = string;

    
    std::cout << "	MEMORY ADDRESSES \n" << std::endl;

    std::cout << "Address of string	: " << &string << std::endl;
    std::cout << "Address in stringPTR	: " << stringPTR << std::endl;
    std::cout << "Address of stringREF	: " << &stringREF << std::endl;
    
   
    
    std::cout << "\n	VALUES 	\n" << std::endl;
    std::cout << "Value of string			: " << string << std::endl;
    std::cout << "Value pointed by stringPTR	: " << *stringPTR << std::endl;
    std::cout << "Value of stringREF		: " << stringREF << std::endl;
    
    return (0);
}
