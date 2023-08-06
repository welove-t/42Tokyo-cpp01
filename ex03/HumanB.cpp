#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
}

void	HumanB::attack(void) const
{
	if (this->weapon != NULL)
		std::cout << name << " attacks with their "  << this->weapon->getType() << std::endl;
	else
		std::cout << name << " has no weapons. " << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
}
