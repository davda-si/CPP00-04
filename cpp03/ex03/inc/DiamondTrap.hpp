#ifndef	DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include <iomanip>
# include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public FragTrap, public ScavTrap
{
	private:
	std::string _name;

	public:
	DiamondTrap();
	DiamondTrap(std::string name); 
	DiamondTrap(const DiamondTrap& ref);
	DiamondTrap& operator=(const DiamondTrap& ref);
	~DiamondTrap();

	void	whoAmI();
};

#endif