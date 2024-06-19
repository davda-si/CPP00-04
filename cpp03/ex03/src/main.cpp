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
	
	e.getStats();
	d.highFivesGuys();
	a.attack(b.getName());
	b.takeDamage(a.getDmg());
	b.beRepaired(1);
	b.attack(a.getName());
	a.takeDamage(b.getDmg());
	a.beRepaired(3);
	c.attack(b.getName());
	c.attack(a.getName());
	a.takeDamage(c.getDmg());
	b.takeDamage(c.getDmg());
	a.beRepaired(1);
	b.beRepaired(1);
	d.attack(c.getName());
	c.takeDamage(d.getDmg());
	d.attack(c.getName());
	c.takeDamage(d.getDmg());
	c.guardGate();
	c.beRepaired(10);
	d.attack(c.getName());
	c.takeDamage(d.getDmg());
	d.attack(c.getName());
	c.takeDamage(d.getDmg());
	c.attack(d.getName());
}