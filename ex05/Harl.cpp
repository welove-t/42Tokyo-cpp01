#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << GREEN
			<< "I love having extra bacon for "
			<< "my 7XL-double-cheese-triple-pickle-special- ketchup burger. "
			<< "I really do!"
			<< RESET << std::endl;
}

void	Harl::info(void)
{
	std::cout << BLUE
				<< "I cannot believe adding extra bacon costs more money. "
				<< "You didn’t put enough bacon in my burger! If you did, "
				<< "I wouldn’t be asking for more!"
				<< RESET << std::endl;
}

void	Harl::warning(void)
{
	std::cout << YELLOW
			<< "I think I deserve to have some extra bacon for free."
			<< "I’ve been coming for years whereas you started working here"
			<< "since last month."
			<< RESET << std::endl;
}

void	Harl::error(void)
{
	std::cout << RED
			<< "This is unacceptable! I want to speak to the manager now."
			<< RESET << std::endl;
}

void	Harl::complain(std::string level)
{
	funcMap funcArray [] = {
		{"DEBUG", &Harl::debug},
		{"INFO", &Harl::info},
		{"WARNING", &Harl::warning},
		{"ERROR", &Harl::error},
	};

	for (int i = 0; i < 4; i++)
	{
		if (level == funcArray[i].level)
		{
			(this->*funcArray[i].func)();
			return ;
		}
	}
	std::cerr << RED << "Invalid level." << RESET << std::endl;
}
