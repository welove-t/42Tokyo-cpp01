#ifndef PARAM_H
#define PARAM_H

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

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
		// bool	checkParam(std::string fileName, std::string s1, std::string s2);

};

#endif
