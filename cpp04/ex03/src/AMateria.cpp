#include "../inc/AMateria.hpp"

AMateria::AMateria(){}

AMateria::AMateria(std::string const & type)
{
	_type = type;
	std::cout << "AMateria constructor called for " << _type << std::endl;
}

AMateria::AMateria(const AMateria& ref)
{
	*this = ref;
	std::cout << "AMateria Copy constructor called for " << this->_type << std::endl;
}

AMateria& AMateria::operator=(const AMateria& ref)
{
	if (this != &ref)
	{
		this->_type = ref._type;
		std::cout << "AMateria Assignement operator overload for " << this->_type << std::endl;
	}
	return *this;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destroyed.." << std::endl;
}

std::string const	&AMateria::getType() const
{
	return _type;
}