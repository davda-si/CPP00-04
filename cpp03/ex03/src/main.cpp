#include "../inc/ClapTrap.hpp"
#include "../inc/ScavTrap.hpp"
#include "../inc/FragTrap.hpp"
#include "../inc/DiamondTrap.hpp"

int	main()
{
	ClapTrap	a("zorg");
	ClapTrap	b("bolt");
	ScavTrap	c("serena");
	FragTrap	d("bob");
	DiamondTrap e("blitz");
	
	std::cout << std::endl;
	e.whoAmI();
	e.guardGate();
	e.highFivesGuys();
	std::cout << std::endl;
	e.attack(a.getName());
	a.takeDamage(e.getDmg());
	std::cout << std::endl;
	d.highFivesGuys();
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
	c.attack(b.getName());
	c.attack(a.getName());
	a.takeDamage(c.getDmg());
	b.takeDamage(c.getDmg());
	std::cout << std::endl;
	a.beRepaired(1);
	std::cout << std::endl;
	b.beRepaired(1);
	std::cout << std::endl;
	d.attack(c.getName());
	c.takeDamage(d.getDmg());
	std::cout << std::endl;
	d.attack(c.getName());
	c.takeDamage(d.getDmg());
	std::cout << std::endl;
	c.guardGate();
	std::cout << std::endl;
	c.beRepaired(10);
	std::cout << std::endl;
	d.attack(c.getName());
	c.takeDamage(d.getDmg());
	std::cout << std::endl;
	d.attack(c.getName());
	c.takeDamage(d.getDmg());
	std::cout << std::endl;
	c.attack(d.getName());
	std::cout << std::endl;
}