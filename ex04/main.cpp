#include "File.hpp"
#include "Param.hpp"

void printDiff(const std::string& line1, const std::string& line2) {
    if (line1 != line2)
    {
        std::cout << "--------------------------------------" << std::endl;
        std::cout << RED << "Before: " <<  line1 << RESET << std::endl;
        std::cout << GREEN << "After:  " << line2 << RESET << std::endl;
        std::cout << "--------------------------------------" << std::endl;
    }
    else
        std::cout << line1 << RESET << std::endl;
}

int main(int argc, char* argv[]) {

	Param param;

	if (!param.checkArgc(argc, argv))
		return 1;
	param.setParam(argv[1], argv[2],argv[3]);
	File file(param);
    if (!file.Replace())
        return 1;

    // test
	std::cout	<< BLUE
				<< "--------------------------------------"	<< std::endl;
	std::cout 	<< "    Replace Test ! " << param.getS1() << " -> " << param.getS2() << std::endl;
	std::cout 	<< "--------------------------------------"	<< RESET << std::endl;
    std::ifstream file1(param.getFileName());
    std::ifstream file2(param.getFileName() + ".replace");

    if (!file1.is_open() || !file2.is_open()) {
        std::cerr << RED << "Error opening files." << RESET <<  std::endl;
        return 1;
    }

    std::string line1, line2;
    // while (std::getline(file1, line1) || std::getline(file2, line2)) {
    //     printDiff(line1, line2);
    // }
    while (true)
    {
        bool read1 = static_cast<bool>(std::getline(file1, line1));
        bool read2 = static_cast<bool>(std::getline(file2, line2));

        // どちらのファイルも読み終わったらループを抜ける
        if (!read1 && !read2) break;

        // 一方のファイルのみ読み終わった場合のための処理
        if (!read1) line1 = "";
        if (!read2) line2 = "";

        printDiff(line1, line2);
    }

    file1.close();
    file2.close();
    return 0;
}

