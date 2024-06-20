#include "../inc/Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain developed" << std::endl;
}

Brain::Brain(const Brain& ref)
{
	*this = ref;
	std::cout << "Brain developed" << std::endl;
}

Brain	&Brain::operator=(const Brain &ref)
{
	if (this != &ref)
	{
		*this = ref;
		std::cout << "Brain developed" << std::endl;
	}
	return *this;
}

Brain::~Brain()
{
	std::cout << "Brain withered" << std::endl;
}