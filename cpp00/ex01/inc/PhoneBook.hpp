#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include <iomanip>
# include <iostream>
# include <locale>
# include <stdlib.h>
# include "Contacts.hpp"

class PhoneBook
{
	private:
		Contacts	_Contacts[8];
	public:
		PhoneBook();
		~PhoneBook();
		void Add_Contact();
		void Search();
};

#endif