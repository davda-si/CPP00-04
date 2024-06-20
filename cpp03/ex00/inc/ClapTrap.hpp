#ifndef	CLAPTRAP_HPP
# define CLAPTRAP_HPP
# include <iomanip>
# include <iostream>

class ClapTrap
{
	private:
	std::string	_name;
	unsigned int	_hp;
	unsigned int	_ep;
	unsigned int	_ad;

	public:
	ClapTrap();
	ClapTrap(std::string name);
	ClapTrap(const ClapTrap& ref);
	ClapTrap& operator=(const ClapTrap& ref);
	~ClapTrap();

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	std::string getName() const;
	unsigned int getDmg() const;
};

#endif