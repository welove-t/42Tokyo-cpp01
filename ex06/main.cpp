#include "Harl.hpp"

int main(int argc, char *argv[])
{
	Harl harl;
	if (argc != 2)
	{
		std::cerr << RED
					<< "Usage: " << argv[0]
					<< " < DEBUG | INFO | WARNING | ERROR >"
					<< RESET << std::endl;
	}
	else
		harl.complain(argv[1]);
	return 0;
}

// __attribute((destructor))
// static void destructor() {
// 	system("leaks -q harlFilter");
// }
