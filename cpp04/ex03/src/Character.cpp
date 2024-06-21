#include "../inc/Character.hpp"

Character::Character() {}

Character::Character(std::string name)
{
	_name = name;
	for (int i = 0; i < 4; i++)
		_slots[i] = NULL;
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
		for (int i = 0; i < 4; i++)
		{
			delete this->_slots[i];
			this->_slots[i] = ref._slots[i]->clone();
		}
		std::cout << "assign. operator for character called" << std::endl;
	}
	return *this;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete _slots[i];
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
		if (m && _slots[i] == NULL)
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
		_slots[idx] = NULL;
	}
	else
		std::cout << "Invalid index on Inventory slots!" << std::endl;
 }

 void	Character::use(int idx, ICharacter& target)
 {
	if ((idx >= 0 && idx < 4) && _slots[idx])
	{
		_slots[idx]->AMateria::use(target);
		std::cout << _name << " unequiped " << _slots[idx]->getType() << " for now" << std::endl;
	}
	else
		std::cout << "Invalid index on Inventory slots!" << std::endl;
 }