#include "File.hpp"
#include "Param.hpp"

int main(int argc, char* argv[]) {

	Param param;

	if (!param.checkArgc(argc, argv))
		return 1;
	param.setParam(argv[1], argv[2],argv[3]);
    // std::string fileName = argv[1];
    // std::string s1 = argv[2];
    // std::string s2 = argv[3];
	File file(param);

    std::ifstream input(.c_str());
    if (!input.is_open()) {
        std::cerr << "Failed to open " << fileName << std::endl;
        return 1;
    }

    std::ostringstream buffer;
    buffer << input.rdbuf();
    std::string content = buffer.str();

    // 置換の実行
    std::string::size_type pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos) {
        content.erase(pos, s1.length());
        content.insert(pos, s2);
        pos += s2.length();
    }

    input.close();

    std::ofstream output((fileName + "_modified").c_str());
    if (!output.is_open()) {
        std::cerr << "Failed to open output file." << std::endl;
        return 1;
    }

    output << content;
    output.close();

    std::cout << "File processed successfully. Modified file: " << fileName + "_modified" << std::endl;

    return 0;
}

