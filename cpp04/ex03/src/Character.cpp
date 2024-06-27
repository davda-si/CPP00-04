#include "../inc/Character.hpp"

Character::Character() {}

Character::Character(std::string name)
{
	_name = name;
	for (int i = 0; i < 4; i++)
		_slots[i] = 0;
	for (int i = 0; i < 100; i++)
		_ref[i] = 0;
	std::cout << _name << " spawned" << std::endl;
}

Character::Character(const Character& ref)
{
	*this = ref;
	std::cout << "Copied character" << std::endl;
}

Character& Character::operator=(const Character& ref)
{
	if (this != &ref)
	{
		this->_name = ref._name;
		for (int i = 0; i < 100; i++)
		{
			if (ref._ref[i] != 0)
				this->_ref[i] = ref._ref[i];
		}
		for (int i = 0; i < 4; i++)
		{
			if (ref._slots[i])
				this->_slots[i] = ref._slots[i]->clone();
			else
				this->_slots[i] = 0;
		}
		std::cout << "assign. operator for character called" << std::endl;
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		if (_slots[i])
			delete _slots[i];
	}
	for (int i = 0; i < 100; i++)
	{
		if (_ref[i] != 0)
			delete _ref[i];
	}
	std::cout << _name << " died.." << std::endl;
}

std::string const&	Character::getName() const
{
	return this->_name;
}

 void	Character::equip(AMateria *m)
 {
	for (int i = 0; i < 4; i++)
	{
		if (m && _slots[i] == 0)
		{
			_slots[i] = m;
			std::cout << _name << " equipped " << _slots[i]->getType() << " to their inventory!" << std::endl;
			return ;
		}
	}
	if (!m)
		std::cout << "no Materia found" << std::endl;
	else
		std::cout << "Inventory full!" << std::endl;
 }

 void	Character::unequip(int idx)
 {
	if ((idx >= 0 && idx < 4) && _slots[idx])
	{
		std::cout << _name << " unequiped " << _slots[idx]->getType() << " for now" << std::endl;
		for (int j = 0; j < 100; j++)
		{
			if (_ref[j] == 0)
			{
				_ref[j] = _slots[idx];
				break ;
			}
		}
		_slots[idx] = 0;
	}
	else
		std::cout << "Invalid index on Inventory slots!" << std::endl;
 }

 void	Character::use(int idx, ICharacter& target)
 {
	if ((idx >= 0 && idx < 4) && _slots[idx])
		_slots[idx]->use(target);
	else
		std::cout << "Invalid index on Inventory slots!" << std::endl;
 }