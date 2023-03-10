#include "./HumanA.hpp"

HumanA::HumanA(const std::string &_name, Weapon& _weapon)
	: name(_name), 
	weapon(_weapon)
{}

HumanA::~HumanA(){}

void	HumanA::attack() const
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
