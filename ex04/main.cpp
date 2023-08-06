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
    file.Replace();



    return 0;
}

