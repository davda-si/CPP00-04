#include "../inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_clap_name"), FragTrap(), ScavTrap()
{
	_name = name;
	_ep = 50;
	std::cout << "DiamondTrap " << this->_name << " has been summoned upon us and it's ready to fight!" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& ref)
{
	*this = ref;
	std::cout << "DiamondTrap " << this->_name << " has been summoned upon us and it's ready to fight!" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &ref)
{
	if (this != &ref)
	{
		this->_name = ref._name;
		this->_hp = 100;
		this->_ep = 50;
		this->_ad = 30;
		std::cout << "DiamondTrap " << this->_name << " has been summoned upon us and it's ready to fight!" << std::endl;
	}
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << _name << "'s going offline, gg" << std::endl;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap's name is: " << _name << "; \nAnd ClapTrap's is: " << ClapTrap::_name << std::endl;
}