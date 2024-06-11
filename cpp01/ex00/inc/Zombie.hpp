#ifndef	ZOMBIE_HPP
# define ZOMBIE_HPP
# include <iomanip>
# include <iostream>

class Zombie
{
private:
	std::string	_name;
public:
	Zombie(std::string name);
	~Zombie();
	
	void	announce();
};

#endif