#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

#define RED		"\e[0;31m" // Red
#define GREEN	"\e[0;32m" // Green
#define YELLOW	"\e[0;33m" // Yellow
#define BLUE	"\e[0;34m" // Blue
#define RESET 	"\e[0m"    // Reset

class Harl
{
	private:
		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		typedef void (Harl::*FuncPointer)();
		struct funcMap
		{
			std::string level;
			FuncPointer func;
		};
	public:
		void	complain(std::string level);
};

#endif
