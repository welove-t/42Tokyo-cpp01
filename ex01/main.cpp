#include "Zombie.hpp"

int main(void)
{
	std::cout	<< BLUE
				<< "--------------------------------------"	<< std::endl;
	std::cout 	<< "                test 1                " << std::endl;
	std::cout 	<< "--------------------------------------"	<< RESET << std::endl;
	return 0;
}

// __attribute((destructor))
// static void destructor() {
//     system("leaks -q main");
// }
