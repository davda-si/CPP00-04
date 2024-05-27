#include <iostream>
#include <stdlib.h>
#include "Contacts.hpp"

class PhoneBook
{
	private:
		int			_index;
		Contacts	_Contacts[8];
	public:
		PhoneBook();
		~PhoneBook();
		void Add_Contact();
		void Search();
};