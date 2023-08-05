#include "Zombie.hpp"

int main(void)
{
	// test announce
	Zombie foo("foo");
	foo.announce();

	// test newZombie (heap)
	Zombie *bar = newZombie("heap zombie");
	bar->announce();

	// Zombie foo("stack zombie");

	return 0;
}

