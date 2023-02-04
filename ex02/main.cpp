#include <iostream>

int main()
{
	std::string	brainz = "HI THIS IS BRAIN";
	std::string	*stringPTR = &brainz;
	std::string	&stringREF = brainz;

	std::cout << "The memory address of the string variable : " << &brainz <<std::endl;
	std::cout << "The memory address held by stringPTR      : " << stringPTR <<std::endl;
	std::cout << "The memory address held by stringREF      : " << &stringREF <<std::endl;


	std::cout << "The value of the string variable          : " << brainz << std::endl;
	std::cout << "The value pointed to by stringPTR         : " << *stringPTR <<std::endl;
	std::cout << "The value pointed to by stringREF         : " << stringREF <<std::endl;
	
}