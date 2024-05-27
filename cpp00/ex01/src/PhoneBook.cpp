#include "../inc/PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->_index = 0;
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::Add_Contact()
{
	std::string f;
	std::string l;
	std::string n;
	std::string c;
	std::string d;

	std::cout << "Enter first name: ";
	std::getline(std::cin >> std::ws, f);
	std::cout << "\n" << "Enter last name: ";
	std::getline(std::cin >> std::ws, l);
	std::cout << "\n" << "Enter nickname: ";
	std::getline(std::cin >> std::ws, n);
	std::cout << "\n" << "Enter phone number: ";
	std::getline(std::cin >> std::ws, c);
	std::cout << "\n" << "Enter darkest secret >:) : ";
	std::getline(std::cin >> std::ws, d);
	std::cout << std::endl;
}