#ifndef ZONBIE_HPP
#define ZONBIE_HPP

#include <iostream>

class Zombie
{
	private:
		std::string	name;

	public:
		Zombie(std::string name);
		void	announce(void);
};

#endif
