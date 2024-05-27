#include "../inc/PhoneBook.hpp"

int	main(void)
{
	PhoneBook	PhoneBook;
	std::string cmd;

	std::cout << "*------------------------*" << std::endl;
	std::cout << " Welcome to THE Phonebook" << std::endl;
	std::cout << "*------------------------*" << std::endl;
	std::cout << std::endl;
	while (1)
	{
		std::cout << "Please enter a command: ";
		std::getline(std::cin >> std::ws, cmd);
		if (cmd == "ADD")
			std::cout << "ADD command typed" << std::endl;
		else if (cmd == "SEARCH")
			std::cout << "SEARCH command typed" << std::endl;
		else if (cmd == "EXIT")
			exit (1);
		else
			std::cout << "Ups! not a valid command, please try again" << std::endl;
	}
	return (1);
}