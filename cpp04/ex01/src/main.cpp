#include "../inc/Animal.hpp"
#include "../inc/WrongAnimal.hpp"
#include "../inc/Dog.hpp"
#include "../inc/Cat.hpp"
#include "../inc/WrongCat.hpp"
#include "../inc/Brain.hpp"

int main()
{
	const Animal* Zoo[20];

	for (int i = 0; i < 10; i++)
		Zoo[i] = new Cat();
	for (int i = 10; i < 20; i++)
		Zoo[i] = new Dog();
	return 0;
}