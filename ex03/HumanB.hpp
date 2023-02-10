#pragma once

#include <iostream>
#include "./Weapon.hpp"

class HumanB
{
	public:
		void	setWeapon(Weapon& _weapon);
		void	attack() const;
	
	public:
		HumanB(const std::string &_name);
		~HumanB();
	
	private:
		std::string	name;
		Weapon		*weapon;

};
