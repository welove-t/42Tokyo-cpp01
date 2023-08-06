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
		bool	checkOpenFile(std::ifstream& input);
		void	setContent(std::ifstream& input);

	public:
		File(Param& param);
		bool	Replace(void);

};

#endif
