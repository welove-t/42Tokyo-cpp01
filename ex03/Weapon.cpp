#include "Weapon.hpp"

std::string Weapon::getType(void) const
{
	return type;
}

void	Weapon::setType(std::string type)
{
	this->type = type;
}
