#include "../inc/Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*zomb = new Zombie[N];
	for (int i = 0; i < N; i++)
		zomb[i].nameSetter(name);
	return zomb;
}