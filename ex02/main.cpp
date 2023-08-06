#include <iostream>

#define BLUE	"\e[0;34m" // Blue
#define RED		"\e[0;31m" // Red
#define RESET 	"\e[0m"    // Reset

int main(void)
{
	std::string str = "HI THIS IS BRAIN";

	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout	<< BLUE
				<< "--------------------------------------"	<< std::endl;
	std::cout 	<< "            memory address"				<< std::endl;
	std::cout 	<< "--------------------------------------"	<< RESET << std::endl;
	std::cout << "default  : " << &str << std::endl;
	std::cout << "stringPTR: " << stringPTR << std::endl;
	std::cout << "stringREF: " << &stringREF << std::endl;

	std::cout	<< BLUE
				<< "--------------------------------------"	<< std::endl;
	std::cout 	<< "                value"				<< std::endl;
	std::cout 	<< "--------------------------------------"	<< RESET << std::endl;
	std::cout << "default  : " << str << std::endl;
	std::cout << "stringPTR: " << *stringPTR << std::endl;
	std::cout << "stringREF: " << stringREF << std::endl;

	return 0;
}
