#include "../inc/PhoneBook.hpp"

int	main(void)
{
	PhoneBook	PhoneBook;
	std::string cmd;

	std::cout << "*------------------------*" << std::endl;
	std::cout << "|Welcome to THE Phonebook|" << std::endl;
	std::cout << "*------------------------*" << std::endl;
	std::cout << std::endl;
	while (1)
	{
		std::cout << "Please enter one of these commands: ADD, SEARCH or EXIT" << std::endl;
		std::cout << ">> ";
		std::getline(std::cin >> std::ws, cmd);
		if (!std::cin)
			break;
		else if (cmd == "ADD")
			PhoneBook.Add_Contact();
		else if (cmd == "SEARCH")
			PhoneBook.Search();
		else if (cmd == "EXIT")
		{
			std::cout << "Bye!" << std::endl;
			break;
		}
		else
			std::cout << "Ups! not a valid command, please try again" << std::endl;
	}
	return (1);
}