#include "./Zombie.hpp"

Zombie* zombieHorde( int N, std::string name );

int main()
{
	Zombie	*zombies = zombieHorde(10, "artush");

	delete[] zombies;
	zombies = NULL;
	
	zombies = zombieHorde(10, "bagrat");
	delete [] zombies;
	zombies = NULL;
	return (0);
}