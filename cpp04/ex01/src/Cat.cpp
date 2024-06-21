#include "../inc/Cat.hpp"

Cat::Cat()
{
	_type = "Cat";
	_brain = new Brain();
	std::cout << "A wild Cat appeared!" << std::endl;
}

Cat::Cat(const Cat& ref)
{
	*this = ref;
	this->_brain = new Brain(*ref._brain);
	std::cout << "A wild Cat appeared!"  << std::endl;
}

Cat	&Cat::operator=(const Cat &ref)
{
	if (this != &ref)
	{
		*this = ref;
		this->_brain = new Brain(*ref._brain);
		std::cout << "A wild Cat appeared!"  << std::endl;
	}
	return *this;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Cat ran away!" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "MEOWW" << std::endl;
}

void	Cat::setCatIdea(int const id, std::string const idea)
{
	_brain->setIdea(id, idea);
}

std::string const	Cat::getCatIdea(int const id)
{
	_brain->getIdea(id);
}