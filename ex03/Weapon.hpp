#pragma once
#include <iostream>

class Weapon
{
	public:
		const std::string&	getType() const;
		void				setType(std::string);
	public:
		Weapon(const	std::string&	_name);
		~Weapon();

	private:
		std::string	type;
};
