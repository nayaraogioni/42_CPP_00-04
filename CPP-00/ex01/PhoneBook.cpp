/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 13:28:36 by nogioni-          #+#    #+#             */
/*   Updated: 2026/02/13 13:28:37 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : _contactCount(0), _index(0) {}

void PhoneBook::addContact(const Contact& newContact)
{
	_contacts[_index] = newContact;
	_index = (_index + 1) % 8;
	if (_contactCount < 8)
	{
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
	std::cout << "   Index   | First Name | Last Name |  Nickname " << std::endl;
	std::cout << "------------------------------------------------" << std::endl;
	for (int i = 0; i < _contactCount; i++)
	{
		std::cout << std::setw(10) << (i + 1) << " | "
				  << std::setw(10) << formatField(_contacts[i].get_first_name()) << " | "
				  << std::setw(10) << formatField(_contacts[i].get_last_name()) << " | "
				  << std::setw(10) << formatField(_contacts[i].get_nickname()) << std::endl;
	}
}

void PhoneBook::displayContactDetails(int index) const
{
	if (index < 1 || index > _contactCount)
	{
		std::cout << "Invalid index." << std::endl;
		return;
	}
	const Contact& c = _contacts[index - 1];
	std::cout << "First Name: " << c.get_first_name() << std::endl;
	std::cout << "Last Name: " << c.get_last_name() << std::endl;
	std::cout << "Nickname: " << c.get_nickname() << std::endl;
	std::cout << "Phone Number: " << c.get_phone_number() << std::endl;
	std::cout << "Darkest Secret: " << c.get_darkest_secret() << std::endl;
}