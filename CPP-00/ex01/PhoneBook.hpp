#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		Contact	_contacts[8];
		int	_contactCount;
		int		_index;

	public:
		PhoneBook();
		void	addContact(const Contact& newContact);
		void	displayContacts() const;
		void	displayContactDetails(int index) const;
};

#endif