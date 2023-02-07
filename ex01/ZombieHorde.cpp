#include "./Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
	Zombie	*zombieHorde = new Zombie[N];

	for (int i = 0; i < N; i++)
	{
		zombieHorde[i].set_name(name);
		std::cout << "["<< i + 1 <<"] " << std::flush;
		zombieHorde[i].announce(); 
	}
	return (zombieHorde);
}