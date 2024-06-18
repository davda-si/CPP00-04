#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name)
{
	_name = name;
	_hp = 10;
	_ep = 10;
	_ad = 0;
	std::cout << "ClapTrap " << _name << " has been created and is ready to fight!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& ref)
{
	*this = ref;
	std::cout << "ClapTrap " << this->_name << " has been created and is ready to fight!" << std::endl;
}

ClapTrap	&ClapTrap::operator=(const ClapTrap &ref)
{
	this->_name = ref._name;
	this->_hp = 10;
	this->_ep = 10;
	this->_ad = 0;
	std::cout << "ClapTrap " << this->_name << " has been created and is ready to fight!" << std::endl;
	return *this;
}

