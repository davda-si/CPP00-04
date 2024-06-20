#include "../inc/ClapTrap.hpp"

int	main()
{
	ClapTrap	a("zorg");
	ClapTrap	b("bolt");

	std::cout << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getDmg());
	std::cout << std::endl;
	b.beRepaired(1);
	std::cout << std::endl;
	b.attack(a.getName());
	a.takeDamage(b.getDmg());
	std::cout << std::endl;
	a.beRepaired(3);
	std::cout << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getDmg());
	std::cout << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getDmg());
	std::cout << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getDmg());
	std::cout << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getDmg());
	std::cout << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getDmg());
	std::cout << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getDmg());
	std::cout << std::endl;
	a.attack(b.getName());
	b.takeDamage(a.getDmg());
	std::cout << std::endl;
}