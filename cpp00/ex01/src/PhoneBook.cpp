#include "../inc/PhoneBook.hpp"
#include "../inc/Contacts.hpp"

PhoneBook::PhoneBook()
{
}

PhoneBook::~PhoneBook()
{
}

void	PhoneBook::Add_Contact()
{
	static int	i;
	std::string f;
	std::string l;
	std::string n;
	std::string c;
	std::string d;

	std::cout << "Enter first name: ";
	while (f.empty())
		std::getline(std::cin >> std::ws, f);
	std::cout << "Enter last name: ";
	while (l.empty())
		std::getline(std::cin >> std::ws, l);
	std::cout <<  "Enter nickname: ";
	while (n.empty())
		std::getline(std::cin >> std::ws, n);
	std::cout << "Enter phone number: ";
	while (c.empty())
		std::getline(std::cin >> std::ws, c);
	std::cout << "Enter darkest secret >:) : ";
	while (d.empty())
		std::getline(std::cin >> std::ws, d);
	std::cout << std::endl;
	_Contacts[i].Make_Contact(f, l, n, c, d);
	i++;
	if (i == 8)
		i = 0;
}

void	PhoneBook::Search()
{
	int	i = 0;
	int	inp;

	std::cout << std::setw(10) << std::right << "Index" << "|";
	std::cout << std::setw(10) << std::right << "First Name" << "|";
	std::cout << std::setw(10) << std::right << "Last Name" << "|";
	std::cout << std::setw(10) << std::right << "Nickname" << std::endl;
	std::cout << "------------------------------------------------" << std::endl;
	while (i < 8)
	{
		std::cout << std::setw(10) << std::right << i + 1 << "|";
		this->_Contacts[i].print_book();
		i++;
	}
	std::cout << "Type the number of the contact to see more details >> ";
	std::cin >> std::ws >> inp;
	if (!std::cin || inp > 8 || inp < 1)
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "This phonebook only has 8 contacts, please type a number inside that range!" << std::endl;
		return ;
	}
	else if (this->_Contacts[inp - 1].check_contact() == 0)
	{
		std::cin.clear();
		std::cin.ignore(1000, '\n');
		std::cout << "You typed an empty slot from the Phonebook, try a existing one please!" << std::endl;
		return ;
	}
	this->_Contacts[inp - 1].print_contact();
}