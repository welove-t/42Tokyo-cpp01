#ifndef ZONBIE_HPP
#define ZONBIE_HPP

#include <iostream>
#include <iomanip>

class Zonbie
{
	private:
		int index;
		std::string firstName;
		std::string lastName;
		std::string nickName;
		std::string phoneNumber;
		std::string darkestSecret;
	public:
		Zonbie();
		void		settingInput(void);
		void		setIndex(int index);
		void		viewList(void) const;
		bool		checkContactIndex(void) const;
		std::string	printFormat(std::string const str) const;
		std::string	getInput(std::string const str);
};

#endif
