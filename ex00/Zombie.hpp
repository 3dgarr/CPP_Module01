#pragma once
#include <iostream>

class Zombie
{
	public:
		void	announce() const;
		Zombie(const std::string &z_name);
		~Zombie();
	
	private:
		const std::string	name;
};
