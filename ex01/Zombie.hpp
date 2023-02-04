#pragma once
#include <iostream>

class Zombie
{
	public:
		Zombie();
		Zombie(const std::string &z_name);
		~Zombie();

	public:
		void	set_name(std::string z_name);
		void	announce() const;
	private:
		std::string	name;
};
