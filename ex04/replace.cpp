#include "./Replace.hpp"

Replace::Replace(char *in, char *rplcmnt, char *rplcr) 
	:	inFile(in),
		replacement(rplcmnt),
		replacer(rplcr),
		outFile(inFile + ".replace")
{}

Replace::~Replace(){}

void Replace::replace(std::string& str, const std::string& oldStr, const std::string& newStr) const
{
	size_t position = 0;
	while ((position = str.find(oldStr, position)) != std::string::npos)
	{
    	str.erase(position, oldStr.length());
    	str.insert(position, newStr);
    	position += newStr.length();
	}
}

int	Replace::startTask() const
{
	std::ifstream	input(inFile);
	std::string		line;

	if (!input)
	{
		std::cerr << "Error when opening input file" << std::endl;
		return (1);
	}
	std::ofstream	output(outFile);
	if (!output)
	{
		std::cerr << "Error when opening output file" << std::endl;
		return (1);
	}
	while (std::getline(input, line)) 
	{
    	replace(line, replacement, replacer);
    	output << line;
		output << "\n";
  	}
	input.close();
	output.close();

	return (0);
}
