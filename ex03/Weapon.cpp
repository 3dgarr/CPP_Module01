#include "./Weapon.hpp"

Weapon::Weapon(const	std::string &_name) : type(_name)
{}

Weapon::~Weapon()
{
}

const std::string&	Weapon::getType() const
{
	return (type);
}

void	Weapon::setType(std::string rhtype)
{
	type = rhtype;
}