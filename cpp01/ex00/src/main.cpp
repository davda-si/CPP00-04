#include "../inc/Zombie.hpp"

Zombie* newZombie(std::string name);

void	randomChump(std::string name);

int	main()
{
	randomChump("walker");
	Zombie	*p = newZombie("muncher");
	p->announce();
	delete p;
	return 1;
}