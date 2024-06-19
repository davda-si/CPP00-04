#ifndef	FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include <iomanip>
# include <iostream>
#include "ClapTrap.hpp"

class FragTrap: virtual public ClapTrap
{
	public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(const FragTrap& ref);
	FragTrap& operator=(const FragTrap& ref);
	~FragTrap();

	void	attack(const std::string& target);
	void	highFivesGuys();
};

#endif