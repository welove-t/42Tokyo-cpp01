#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << GREEN
			<< "[ DEBUG ]" << std::endl
			<< "I love having extra bacon for "
			<< "my 7XL-double-cheese-triple-pickle-special- ketchup burger. "
			<< "I really do!"
			<< RESET << std::endl;
}

void	Harl::info(void)
{
	std::cout << BLUE
				<< "[ INFO ]" << std::endl
				<< "I cannot believe adding extra bacon costs more money. "
				<< "You didn’t put enough bacon in my burger! If you did, "
				<< "I wouldn’t be asking for more!"
				<< RESET << std::endl;
}

void	Harl::warning(void)
{
	std::cout << YELLOW
			<< "[ WARNING ]" << std::endl
			<< "I think I deserve to have some extra bacon for free."
			<< "I’ve been coming for years whereas you started working here"
			<< "since last month."
			<< RESET << std::endl;
}

void	Harl::error(void)
{
	std::cout << RED
			<< "[ ERROR ]" << std::endl
			<< "This is unacceptable! I want to speak to the manager now."
			<< RESET << std::endl;
}

int Harl::getNumLevel(std::string level)
{
	levelMap levelArray [] = {
		{"DEBUG", Debug},
		{"INFO", Info},
		{"WARNING", Warning},
		{"ERROR", Error},
	};
	for (int i = 0; i < 4; i++)
	{
		if (level == levelArray[i].sLevel)
			return levelArray[i].nlevel;
	}
	return -1 ;

}
void	Harl::complain(std::string level)
{
	int nlevel = getNumLevel(level);

	switch(nlevel)
	{
		case Debug :
			this->debug();
		case Info :
			this->info();
		case Warning :
			this->warning();
		case Error :
			this->error();
			break;
		default :
			std::cerr << "[ Probably complaining about insignificant problems ]" << std::endl;
	};
}
