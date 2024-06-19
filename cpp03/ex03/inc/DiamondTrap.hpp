#ifndef	DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP
# include <iomanip>
# include <iostream>
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap: public ScavTrap , public FragTrap
{
	private:
	std::string _name;
	using FragTrap::_hp;
	using ScavTrap::_ep;
	using FragTrap::_ad;

	public:
	DiamondTrap();
	DiamondTrap(std::string name); 
	DiamondTrap(const DiamondTrap& ref);
	DiamondTrap& operator=(const DiamondTrap& ref);
	~DiamondTrap();
	void getStats(void) {
		std::cout << "Stats: hp = " << _hp << " ad = " << _ad << " ep = " << _ep << std::endl;
	}

	void	whoAmI();
};

#endif