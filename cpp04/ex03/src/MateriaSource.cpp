#include "../inc/MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		_book[i] = NULL;
	std::cout << "MateriaSource has been created" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& ref)
{
	*this = ref;
	std::cout << "MateriaSource copied" << std::endl;
}

MateriaSource &MateriaSource::operator=(const MateriaSource& ref)
{
	if (this != &ref)
	{
		for (int i = 0; i < 4; i++)
			this->_book[i] = ref._book[i];
		std::cout << "assign. operator overload for MateriaSource called" << std::endl;
	}
	return *this;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		delete this->_book[i];
	std::cout << "Destructor called for MateriaSource" << std::endl;
}

void	MateriaSource::learnMateria(AMateria *mat)
{
	for (int i = 0; i < 4; i++)
	{
		if (mat && this->_book[i] == NULL)
		{
			this->_book[i] = mat;
			std::cout << "Materia " << mat->getType() << " was learned successfully" << std::endl;
			return ;
		}
	}
	if (!mat)
		std::cout << "Seems too difficult to learn this weird Materia" << std::endl;
	else
		std::cout << "Can't learn more than this!" << std::endl;
}

AMateria*	MateriaSource::createMateria(std::string const& type)
{
	for (int i = 0; i < 4; i++)
	{
		if (_book[i] && _book[i]->getType() == type)
		{
			std::cout << "Materia: " << _book[i]->getType() << " created successfully!!" << std::endl;
			return _book[i]->clone();
		}
	}
	std::cout << "I can't create that Materia" << std::endl;
	return NULL;
}