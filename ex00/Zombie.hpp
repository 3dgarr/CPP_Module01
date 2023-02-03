#pragma once
#include <iostream>

class Zombie
{
	private:
		const std::string	name;
	public:
		void	announce();
		Zombie(const std::string &z_name);
		~Zombie();
};
