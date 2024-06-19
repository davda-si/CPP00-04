#include "../inc/ScavTrap.hpp"

ScavTrap::ScavTrap(){}

ScavTrap::ScavTrap(std::string name)
{
	_name = name;
	_hp = 100;
	_ep = 50;
	_ad = 20;
	std::cout << "ScavTrap " << _name << " has been created and is ready to fight as well!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& ref)
{
	*this = ref;
	std::cout << "ScavTrap " << _name << " has been created and is ready to fight as well!" << std::endl;
}

ScavTrap	&ScavTrap::operator=(const ScavTrap &ref)
{
	if (this != &ref)
	{
		this->_name = ref._name;
		this->_hp = 100;
		this->_ep = 50;
		this->_ad = 20;
		std::cout << "ScavTrap " << this->_name << " has been created and is ready to fight as well!" << std::endl;
	}
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "batlle's over for ScavTrap, gg" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_ep <= 0)
	{
		std::cout << getName() << " can't attack, it's out of energy, rest a little!" << std::endl;
		return ;
	}
	else if (_hp <= 0)
	{
		std::cout << getName() << "'s dead. RIP ScavTrap" << std::endl;
		return ;
	}
	else
	{
		_ep--;
		std::cout << getName() << " attacks " << target << ", causing " << getDmg() << " of damage! What a hit!" << std::endl;
	}
}

void	ScavTrap::guardGate()
{
	if (_hp <= 0)
	{
		std::cout << getName() << "'s dead. RIP ScavTrap" << std::endl;
		return ;
	}
	std::cout << getName() << " is now in Gate Keeper Mode." << std::endl;
}