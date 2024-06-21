#include "../inc/Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain();
	std::cout << "A wild Dog appeared!" << std::endl;
}

Dog::Dog(const Dog& ref)
{
	*this = ref;
	this->_brain = new Brain(*ref._brain);
	std::cout << "A wild Dog appeared!"  << std::endl;
}

Dog	&Dog::operator=(const Dog &ref)
{
	if (this != &ref)
	{
		*this = ref;
		this->_brain = new Brain(*ref._brain);
		std::cout << "A wild Dog appeared!"  << std::endl;
	}
	return *this;
}

Dog::~Dog()
{
	std::cout << "Dog ran away!" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "BARK BARK WOOF" << std::endl;
}

void	Dog::setDogIdea(int const id, std::string const idea)
{
	_brain->setIdea(id, idea);
}

std::string const	Dog::getDogIdea(int const id)
{
	_brain->getIdea(id);
}