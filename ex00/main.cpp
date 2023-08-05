#include "Zombie.hpp"

int main(void)
{
	// test announce
	Zombie foo("foo");
	foo.announce();

	// test newZombie (heap)
	Zombie *bar = newZombie("heap zombie");
	bar->announce();
	delete bar;

	// test randomChump (stack)
	randomChump("stack zombie");
	return 0;
}

// __attribute((destructor))
// static void destructor() {
//     system("leaks -q main");
// }
