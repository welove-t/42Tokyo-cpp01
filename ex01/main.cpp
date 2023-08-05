#include "Zombie.hpp"

int main(void)
{
	//test 1
	int N = 5;
	std::cout	<< BLUE
				<< "--------------------------------------"	<< std::endl;
	std::cout 	<< "           test:1   N = " << N 			<< std::endl;
	std::cout 	<< "--------------------------------------"	<< RESET << std::endl;

	Zombie *zombie = zombieHorde(N, "zombie");
	for (int i = 0; i < N; i++)
		zombie[i].announce();
	delete[] zombie;

	//test 2
	N = 10;
	std::cout	<< BLUE
				<< "--------------------------------------"	<< std::endl;
	std::cout 	<< "           test:2   N = " << N 			<< std::endl;
	std::cout 	<< "--------------------------------------"	<< RESET << std::endl;

	zombie = zombieHorde(N, "zombie");
	for (int i = 0; i < N; i++)
		zombie[i].announce();
	delete[] zombie;

	//test 3
	N = 0;
	std::cout	<< BLUE
				<< "--------------------------------------"	<< std::endl;
	std::cout 	<< "           test:3   N = " << N 			<< std::endl;
	std::cout 	<< "--------------------------------------"	<< RESET << std::endl;

	zombie = zombieHorde(N, "zombie");
	for (int i = 0; i < N; i++)
		zombie[i].announce();
	delete[] zombie;

	//test 4
	N = -1;
	std::cout	<< BLUE
				<< "--------------------------------------"	<< std::endl;
	std::cout 	<< "           test:4   N = " << N 			<< std::endl;
	std::cout 	<< "--------------------------------------"	<< RESET << std::endl;

	zombie = zombieHorde(N, "zombie");
	for (int i = 0; i < N; i++)
		zombie[i].announce();

	delete[] zombie;

	// leaks check
	std::cout	<< BLUE
				<< "--------------------------------------"	<< std::endl;
	std::cout 	<< "              leaks check"					<< std::endl;
	std::cout 	<< "--------------------------------------"	<< RESET << std::endl;
	return 0;
}

__attribute((destructor))
static void destructor() {
    system("leaks -q main");
}
