#include "./Zombie.hpp"

Zombie	*newZombie(const std::string &Zname);
void	randomChump(const std::string &Zname);

int main()
{
	Zombie *myZombie = newZombie("Ferdinand");

	myZombie->announce();
	randomChump("Arsenchik");

	delete myZombie;
	myZombie = nullptr;
	return (0);
}