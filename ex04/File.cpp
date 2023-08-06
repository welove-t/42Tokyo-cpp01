#include "File.hpp"

File::File(Param& param) : param(param)
{
}

bool	File::checkOpenFile(std::ifstream& input)
{
    if (!input.is_open()) {
        std::cerr << "Failed to open " << this->param.getFileName() << std::endl;
        return false;
    }
	return true;
}

bool	File::Replace(void)
{
	std::ifstream input(this->param.getFileName().c_str());

    if (!checkOpenFile(input))
		return false;
	setContent(input);

    std::string::size_type pos = 0;
    while ((pos = content.find(this->param.getS1(), pos)) != std::string::npos) {
        content.erase(pos, this->param.getS1().length());
        content.insert(pos, this->param.getS2());
        pos += this->param.getS2().length();
    }

    input.close();

    std::ofstream output((this->param.getFileName() + "_modified").c_str());
    if (!output.is_open()) {
        std::cerr << "Failed to open output file." << std::endl;
        return false;
    }

    output << content;
    output.close();

    std::cout << "File processed successfully. Modified file: " << this->param.getFileName() + "_modified" << std::endl;
	return true;
}

void	File::setContent(std::ifstream& input)
{
    std::ostringstream buffer;
    buffer << input.rdbuf();
    this->content = buffer.str();
}
