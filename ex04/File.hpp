#ifndef FILE_H
#define FILE_H

#include <iostream>
#include <fstream>
#include <sstream>
#include "Param.hpp"

class File
{
	private:
		Param& param;
		std::ifstream input;
		std::string content;

	public:
		File(Param& param);
		bool	checkOpenFile(std::ifstream& input);
		bool	Replace(void);
		void	setContent(std::ifstream& input);
		void	setParam(std::string fileName, std::string s1, std::string s2);

};

#endif
