#include "../inc/Harl.hpp"

int	main(int ac, char **av)
{
	Harl	harl;
	std::string level;
	if (ac == 2)
	{
		level = av[1];
		harl.complain(level);
	}
	else
		std::cout << "I only accept one complain." << std::endl;
	return 0;
}