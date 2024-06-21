#include "../inc/Cure.hpp"

Cure::Cure()
{
	_type = "ice";
	std::cout << "Materia Ice was created, you can learn it now" << std::endl;
}

Cure::Cure(const Cure& ref)
{
	*this = ref;
	std::cout << "Ice copy constructor called" << std::endl;
}

Cure&	Cure::operator=(const Cure& ref)
{
	if (this != &ref)
	{
		this->_type = ref._type;
		std::cout << "Ice assigned to new copy" << std::endl;
	}
	return (*this);
}

Cure::~Cure()
{
	std::cout << "Ice destroyed!" << std::endl;
}

Cure	*Cure::clone() const
{
	return new Cure(*this);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}