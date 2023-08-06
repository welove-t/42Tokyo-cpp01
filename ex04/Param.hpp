#ifndef PARAM_H
#define PARAM_H

#include <iostream>
#include <fstream>
#include <sstream>

#define BLUE	"\e[0;34m" // Blue
#define RED		"\e[1;31m" // Red
#define GREEN	"\e[1;32m" // Green
#define RESET 	"\e[0m"    // Reset

class Param
{
	private:
		std::string	fileName;
		std::string s1;
		std::string s2;

	public:
		void	setParam(std::string fileName, std::string s1, std::string s2);
		std::string getFileName(void) const;
		std::string getS1(void) const;
		std::string getS2(void) const;
		bool	checkArgc(int argc, char *argv[]) const;

};

#endif
