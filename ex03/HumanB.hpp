#pragma once

#include <iostream>
#include "./Weapon.hpp"

class HumanB
{
	private:
		std::string	name;
		Weapon		*weapon;

	public:
		HumanB(const std::string &_name);
		~HumanB();
	public:
		void	setWeapon(Weapon& _weapon);
		void	attack() const;
};
