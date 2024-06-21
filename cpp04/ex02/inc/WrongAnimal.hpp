#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iomanip>
# include <iostream>

class WrongAnimal
{
	protected:
	std::string _type;

	public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& ref);
	WrongAnimal& operator=(const WrongAnimal& ref);
	virtual ~WrongAnimal();

	virtual std::string	getType() const;
	virtual void	makeSound() const;
};

#endif