#include "../inc/FragTrap.hpp"

FragTrap::FragTrap(){}

FragTrap::FragTrap(std::string name)
{
	_name = name;
	_hp = 100;
	_ep = 100;
	_ad = 30;
	std::cout << "FragTrap " << _name << " has been created and is ready to fight too!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& ref)
{
	*this = ref;
	std::cout << "FragTrap " << _name << " has been created and is ready to fight too!" << std::endl;
}

FragTrap	&FragTrap::operator=(const FragTrap &ref)
{
	if (this != &ref)
	{
		this->_name = ref._name;
		this->_hp = 100;
		this->_ep = 50;
		this->_ad = 20;
		std::cout << "FragTrap " << this->_name << " has been created and is ready to fight too!" << std::endl;
	}
	return *this;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap's done fighting, gg" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (_ep <= 0)
	{
		std::cout << getName() << " can't attack, it's out of energy, " << getName() << " needs a rest!" << std::endl;
		return ;
	}
	else if (_hp <= 0)
	{
		std::cout << getName() << "'s finished. Better luck next time" << std::endl;
		return ;
	}
	else
	{
		_ep--;
		std::cout << getName() << " attacks " << target << ", causing " << getDmg() << " of damage! That's a lot of damage!" << std::endl;
	}
}

void	FragTrap::highFivesGuys()
{
	if (_hp <= 0)
	{
		std::cout << getName() << "'s finished. Better luck next time" << std::endl;
		return ;
	}
	std::cout << getName() << " wants a high five." << std::endl;
}