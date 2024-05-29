#include "../inc/PhoneBook.hpp"
#include "../inc/Contacts.hpp"

Contacts::Contacts()
{
	set = 0;
}

Contacts::~Contacts()
{
}

void	Contacts::Make_Contact(std::string f, std::string l, std::string n, std::string p, std::string d)
{
	this->_first = f;
	this->_last = l;
	this->_nick = n;
	this->_phone = p;
	this->_dark = d;
	set = 1;
}

void	Contacts::print_book()
{
	std::string first = _first;
	std::string last = _last;
	std::string nick = _nick;
	if (first.length() > 10)
		first = first.substr(0, 9) + '.';
	if (last.length() > 10)
		last = last.substr(0, 9) + '.';
	if (nick.length() > 10)
		nick = nick.substr(0, 9) + '.';
	std::cout << std::setw(10) << std::right << first << "|";
	std::cout << std::setw(10) << std::right << last << "|";
	std::cout << std::setw(10) << std::right << nick << std::endl;
}

void	Contacts::print_contact()
{
	std::cout << "--------------------Contact info---------------------" << std::endl;
	std::cout << "First Name: " << _first << std::endl;
	std::cout << "Last Name: " << _last << std::endl;
	std::cout << "Nickname: " << _nick << std::endl;
	std::cout << "Phone Number: " << _phone << std::endl;
	std::cout << "Darkest Secret: " << _dark << std::endl;
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << std::endl;
}

int		Contacts::check_contact()
{
	if (this->set)
		return 1;
	return 0;
}