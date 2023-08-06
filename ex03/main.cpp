#include "Weapon.hpp"
#include "HumanA.hpp"

int main()
{
	{
	Weapon  club = Weapon("crude spiked club");
	HumanA bob("Bob", club);
	bob.attack();
	club.setType("some other type of club");
	bob.attack();
	}
	{

	}

	return 0;
}


__attribute((destructor))
static void destructor() {
	system("leaks -q main");
}
