#include "../inc/Character.hpp"

Character::Character() {}

Character::Character(std::string name)
{
	_name = name;
	for (int i = 0; i < 4; i++)
		_slots[i] = NULL;
	std::cout << _name << " spawned" << std::endl;
}

Character::Character(const Character& ref): ICharacter(ref), _slots()
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
			this->_slots[i] = ref._slots[i];
		std::cout << "assign. operator for character called" << std::endl;
	}
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		delete _slots[i];
	std::cout << _name << " died.." << std::endl;
}