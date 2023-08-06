#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

#define BLUE	"\e[0;34m" // Blue
#define RED		"\e[0;31m" // Red
#define RESET 	"\e[0m"    // Reset

class Weapon
{
	private:
		std::string	type;

	public:
		std::string getType(void) const;
		void	setType(std::string type);

};


#endif
