#ifndef ZONBIE_HPP
#define ZONBIE_HPP

#include <iostream>

#define BLUE	"\e[0;34m" // Blue
#define RED		"\e[0;31m" // Red
#define RESET 	"\e[0m"    // Reset

class Zombie
{
	private:
		std::string	name;

	public:
		void	setName(int i, std::string name);
		void	announce(void);
};

Zombie*	zombieHorde(int N, std::string name);

#endif
