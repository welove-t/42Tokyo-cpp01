#include "Param.hpp"

void	Param::setParam(std::string fileName, std::string s1, std::string s2)
{
	this->fileName = fileName;
	this->s1 = s1;
	this->s2 = s2;
}

bool	Param::checkArgc(int argc, char *argv[]) const
{
	if (argc != 4)
	{
        std::cerr << "Usage: " << argv[0] << " <filename> <s1> <s2>" << std::endl;
        return false;
    }
	return true;
}
