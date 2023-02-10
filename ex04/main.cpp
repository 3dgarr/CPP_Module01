#include "Replace.hpp"

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "--> ./exec <filename> <replacement> <replacer>" << std::endl;
		return (1);
	}

	Replace	replace(argv[1], argv[2], argv[3]);

	replace.startTask();
	
	return (0);
}