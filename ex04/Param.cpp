#include "Param.hpp"

void	Param::setParam(std::string fileName, std::string s1, std::string s2)
{
	this->fileName = fileName;
	this->s1 = s1;
	this->s2 = s2;
}

std::string Param::getFileName(void)const
{
	return this->fileName;
}

std::string Param::getS1(void) const
{
	return this->s1;
}

std::string Param::getS2(void) const
{
	return this->s2;
}

bool	Param::checkArgc(int argc, char *argv[]) const
{
	if (argc != 4)
	{
        std::cerr << RED << "Usage: " << argv[0] << " <filename> <s1> <s2>" << RESET << std::endl;
        return false;
    }

	if (std::strlen(argv[2]) == 0)
	{
        std::cerr << RED << "<s1> cannot be blank " << RESET << std::endl;
		return false;
	}
	return true;
}
