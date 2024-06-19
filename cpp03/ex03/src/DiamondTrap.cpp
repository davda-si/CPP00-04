#include "../inc/DiamondTrap.hpp"

DiamondTrap::DiamondTrap(){}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name), ScavTrap(name), FragTrap(name)
{	
	this->_hp = ScavTrap::_hp;

}

DiamondTrap::DiamondTrap(const DiamondTrap& ref)
{
	*this = ref;
	std::cout << "DiamondTrap " << this->_name << " has been created and is ready to fight!" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(const DiamondTrap &ref)
{
	if (this != &ref)
	{
		this->_name = ref._name;
		this->_hp = 10;
		this->_ep = 10;
		this->_ad = 0;
		std::cout << "DiamondTrap " << this->_name << " has been created and is ready to fight!" << std::endl;
	}
	return *this;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "batlle's over, gg" << std::endl;
}