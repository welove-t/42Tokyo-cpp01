#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	if (N <= 0)
	{
		std::cout << RED << "Zombies will not be created !" << RESET << std::endl;
		return NULL;
	}

	Zombie* zombies = new Zombie[N];

	for (int i = 0; i < N; i++)
		zombies[i].setName(i, name);
	return zombies;
}
