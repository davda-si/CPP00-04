#ifndef	SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include <iomanip>
# include <iostream>
#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(const ScavTrap& ref);
	ScavTrap& operator=(const ScavTrap& ref);
	~ScavTrap();

	virtual void	attack(const std::string& target);
	void	guardGate();
};

#endif