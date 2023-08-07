#include "Harl.hpp"

int main()
{
	std::string input = "";
	Harl harl;

	std::cout << "Please Enter A Level ( DEBUG | INFO | WARNING | ERROR)" << std::endl;
	do
	{
		std::cout << " > " << std::flush;
		std::getline(std::cin, input);
		if (std::cin.eof() || !input.compare("EXIT"))
			break;
		if (input.empty())
			continue;
		harl.complain(input);

	} while (true);
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "Thank You !" << std::endl;
	return 0;
}

__attribute((destructor))
static void destructor() {
	system("leaks -q main");
}
