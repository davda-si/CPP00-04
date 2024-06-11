#include "../inc/Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	zomb(name);
	zomb.announce();
}