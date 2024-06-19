#include "../inc/ClapTrap.hpp"

ClapTrap::ClapTrap(){}

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
	if (this != &ref)
	{
		this->_name = ref._name;
		this->_hp = 10;
		this->_ep = 10;
		this->_ad = 0;
		std::cout << "ClapTrap " << this->_name << " has been created and is ready to fight!" << std::endl;
	}
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "batlle's over, gg" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_ep <= 0)
	{
		std::cout << getName() << " can't attack, it's out of energy points!" << std::endl;
		return ;
	}
	else if (_hp <= 0)
	{
		std::cout << getName() << "'s dead. He can't attack right now right?" << std::endl;
		return ;
	}
	else
	{
		_ep--;
		std::cout << getName() << " attacks " << target << ", causing " << getDmg() << " of damage!" << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp <= 0)
	{
		std::cout << getName() << "'s dead already. Enough" << std::endl;
		return ;
	}
	else if (_hp < amount)
	{
		_hp = 0;
		std::cout << getName() << " has " << _hp << " health left." << std::endl;
	}
	else
	{
		_hp -= amount;
		std::cout << getName() << " has " << _hp << " health left." << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_ep <= 0 || _ep < amount)
	{
		std::cout << getName() << " can't repair itself, it's out of energy points!" << std::endl;
		return ;
	}
	else if (_hp <= 0)
	{
		std::cout << getName() << "'s dead. Now it's too late to repair itself.." << std::endl;
		return ;
	}
	else
	{
		_ep -= amount;
		_hp += amount;
		std::cout << getName() << " repaired itself and won " << amount << " of health, leaving it with " << _hp << " of total health" << std::endl;
	}
}

std::string	ClapTrap::getName() const
{
	return _name;
}

unsigned int ClapTrap::getDmg() const
{
	return _ad;
}