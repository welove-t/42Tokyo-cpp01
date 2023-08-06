#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) : name(name), weapon(weapon)
{
}

void	HumanA::attack(void) const
{
	std::cout << name << " attacks with their "  << this->weapon.getType() << std::endl;
}
