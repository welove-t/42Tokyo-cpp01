#include "Zombie.hpp"
#include <sstream>

void	Zombie::announce(void)
{
	std::cout << this->name <<  ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(int i, std::string name)
{
	std::ostringstream	oss;

	oss << i;
	this->name = name + oss.str();
}
