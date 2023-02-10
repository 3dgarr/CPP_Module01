#pragma once

#include <iostream>
#include "./Weapon.hpp"

class HumanA
{
	public:
		void	attack() const;
	
	public:
		HumanA(const std::string &_name, Weapon& _weapon);
		~HumanA();

	private:
		std::string	name;
		Weapon&		weapon;
};
