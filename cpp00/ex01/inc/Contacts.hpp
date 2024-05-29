#ifndef CONTACTS_HPP
# define CONTACTS_HPP
# include <iomanip>
# include <iostream>
# include <locale>

class Contacts
{
	private:
		std::string	_first;
		std::string	_last;
		std::string	_nick;
		std::string	_phone;
		std::string	_dark;
		int	set;
	public:
		Contacts();
		~Contacts();
		void	Make_Contact(std::string f, std::string l, std::string n, std::string p, std::string d);
		void	print_book();
		void	print_contact();
		int		check_contact();
};

#endif