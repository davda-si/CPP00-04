#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
# include "IMateriaSource.hpp"

class MateriaSource: public IMateriaSource
{
	private:
	AMateria *_book[4];

	public:
	MateriaSource();
	MateriaSource(const MateriaSource& ref);
	MateriaSource& operator=(const MateriaSource& ref);
	~MateriaSource();

	void learnMateria(AMateria*);
	AMateria* createMateria(std::string const & type);
};

#endif