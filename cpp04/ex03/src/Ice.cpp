#include "../inc/Ice.hpp"

Ice::Ice()
{
	_type = "ice";
	std::cout << "Materia Ice was created, you can learn it now" << std::endl;
}

Ice::Ice(const Ice& ref)
{
	*this = ref;
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice&	Ice::operator=(const Ice& ref)
{
	if (this != &ref)
	{
		this->_type = ref._type;
		std::cout << "Ice assigned to new copy" << std::endl;
	}
	return (*this);
}

Ice::~Ice()
{
	std::cout << "Ice destroyed!" << std::endl;
}

Ice	*Ice::clone() const
{
	return new Ice(*this);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}