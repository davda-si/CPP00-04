#ifndef	ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iomanip>
# include <iostream>

class Zombie
{
private:
	std::string	_name;
public:
	Zombie();
	~Zombie();
	
	void	announce();
	void	nameSetter(std::string name);
};

#endif