#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : _contactCount(0) {}

void PhoneBook::addContact(const Contact& newContact)
{
	if (_contactCount < 8)
	{
		_contacts[_contactCount] = newContact;
		_contactCount++;
	}
}
static std::string formatField(const std::string& str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void PhoneBook::displayContacts() const
{
	std::cout << "Index | First Name | Last Name  | Nickname  " << std::endl;
	std::cout << "---------------------------------------------" << std::endl;
	for (int i = 0; i < _contactCount; i++)
	{
		std::cout << std::setw(5) << i << " | "
				  << std::setw(10) << formatField(_contacts[i].get_first_name()) << " | "
				  << std::setw(10) << formatField(_contacts[i].get_last_name()) << " | "
				  << std::setw(10) << formatField(_contacts[i].get_nickname()) << std::endl;
	}
}

void PhoneBook::displayContactDetails(int index) const
{
	if (index < 0 || index >= _contactCount)
	{
		std::cout << "Invalid index." << std::endl;
		return;
	}
	const Contact& contact = _contacts[index];
	std::cout << "First Name: " << contact.get_first_name() << std::endl;
	std::cout << "Last Name: " << contact.get_last_name() << std::endl;
	std::cout << "Nickname: " << contact.get_nickname() << std::endl;
	std::cout << "Phone Number: " << contact.get_phone_number() << std::endl;
	std::cout << "Darkest Secret: " << contact.get_darkest_secret() << std::endl;
}