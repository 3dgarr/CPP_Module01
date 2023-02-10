#include "./Zombie.hpp"

Zombie::Zombie(const std::string &z_name) : name(z_name){}

Zombie::~Zombie()
{
	std::cout << name << " is dyiiing, buahahahaha" << std::endl;
}

void	Zombie::announce () const
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}