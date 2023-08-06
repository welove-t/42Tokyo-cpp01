#ifndef FILE_H
#define FILE_H

#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include "Param.hpp"

class File
{
	private:
		Param& param;

	public:
		File(Param& param);
		void	setParam(std::string fileName, std::string s1, std::string s2);

};

#endif
