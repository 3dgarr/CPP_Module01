#pragma once
#include <iostream>

class Zombie
{
	public:
		void	set_name(const std::string &z_name);
		void	announce() const;
	
	public:
		Zombie();
		Zombie(const std::string &z_name);
		~Zombie();

	private:
		std::string	name;
};
