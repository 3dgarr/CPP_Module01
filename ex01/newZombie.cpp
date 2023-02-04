#include "./Zombie.hpp"

Zombie	*newZombie(const std::string &Zname)
{
	Zombie	*zombie = new Zombie(Zname);
	
	return (zombie);
}
