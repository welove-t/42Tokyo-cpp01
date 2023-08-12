#include "File.hpp"
#include "Param.hpp"

int main(int argc, char* argv[]) {

	Param param;

	if (!param.checkArgc(argc, argv))
		return 1;
	param.setParam(argv[1], argv[2],argv[3]);
	File file(param);
    if (!file.Replace())
        return 1;
    return 0;
}

