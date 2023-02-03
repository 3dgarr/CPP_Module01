#include "./Zombie.hpp"


void	randomChump(const std::string &Zname)
{
	Zombie	zombie(Zname);
	
	zombie.announce();
}