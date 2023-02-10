#pragma once
#include <iostream>
#include <fstream>


class Replace
{
	public:
		int		startTask() const;
	
	public:
		Replace(char *in, char *replacement, char *replacer);
		~Replace();
		
	private:
		void replace(std::string& str, const std::string& oldStr, const std::string& newStr) const;

	private:
		std::string		inFile;		
		std::string		replacement;
		std::string		replacer;
		std::string		outFile;
};
