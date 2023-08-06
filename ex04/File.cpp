#include "File.hpp"

File::File(Param& param) : param(param)
{
}

bool	File::checkOpenFile(std::ifstream& input) const
{
    if (!input.is_open()) {
        std::cerr << RED << "Failed to open " << param.getFileName() << RESET << std::endl;
        return false;
    }
	return true;
}

void	File::setContent(std::ifstream& input)
{
    std::ostringstream buffer;
    buffer << input.rdbuf();
    content = buffer.str();
}

bool	File::createNewFile(void) const
{
    std::ofstream output((param.getFileName() + ".replace").c_str());
    if (!output.is_open()) {
        std::cerr << RED << "Failed to open output file." << RESET << std::endl;
        return false;
    }

    output << content;
    output.close();

	return true;
}

bool	File::Replace(void)
{
	std::ifstream input(param.getFileName().c_str());

    if (!checkOpenFile(input))
		return false;
	setContent(input);

    std::string::size_type pos = 0;
    while ((pos = content.find(param.getS1(), pos)) != std::string::npos) {
        content.erase(pos, param.getS1().length());
        content.insert(pos, param.getS2());
        pos += param.getS2().length();
    }

    input.close();
	if (!createNewFile())
		return false;
    std::cout << GREEN << "File processed successfully. Replaced file: " << param.getFileName() + ".replace" << RESET << std::endl;
	return true;
}
