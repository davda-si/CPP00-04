#include "../inc/Cure.hpp"
#include "../inc/Ice.hpp"
#include "../inc/Character.hpp"
#include "../inc/MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	std::cout << std::endl;
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	std::cout << std::endl;
	ICharacter* me = new Character("me");
	std::cout << std::endl;
	AMateria* tmp;
	std::cout << std::endl;
	tmp = src->createMateria("ice");
	std::cout << std::endl;
	me->equip(tmp);
	std::cout << std::endl;
	tmp = src->createMateria("cure");
	std::cout << std::endl;
	me->equip(tmp);
	std::cout << std::endl;
	ICharacter* bob = new Character("bob");
	std::cout << std::endl;
	me->use(0, *bob);
	me->use(1, *bob);
	me->unequip(0);
	me->unequip(1);
	std::cout << std::endl;
	delete me;
	delete bob;
	delete src;
	return 0;
}