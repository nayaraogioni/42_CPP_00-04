/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 13:28:52 by nogioni-          #+#    #+#             */
/*   Updated: 2026/02/13 13:28:53 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "PhoneBook.hpp"
#include "Contact.hpp"

#include <iostream>
#include <limits>
#include <cctype>

bool getValidatedInput(const std::string& prompt, std::string& target, bool (*validationFunc)(const std::string&))
{
	while (true)
	{
		std::cout << prompt;
		if (!(std::getline(std::cin, target)) || std::cin.eof())
			return false;

		if (!target.empty() && validationFunc(target))
			return true;

		if (prompt == "Phone Number: ")
			std::cout << "Invalid input.\nPlease insert only 0-9 digits and do not leave it empty.\n";
		else
			std::cout << "Invalid input.\nPlease insert only alphanumeric characters.\nDo not leave it empty.\n";
	}
}

bool isValidPhone(const std::string& str)
{
	if (str.empty())
		return false;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!std::isdigit(static_cast<unsigned char>(str[i])))
			return false;
	}
	return true;
}

bool	onlySpacesString(const std::string& str)
{
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] != ' ' && str[i] != '\t')
			return false;
	}
	return true;
}

bool isAlphaNumeric(const std::string& str)
{
	if (str.empty() || onlySpacesString(str))
		return false;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!std::isalnum(static_cast<unsigned char>(str[i])) && str[i] != ' ')
			return false;
	}
	return true;
}

int main()
{
	PhoneBook phoneBook;
	std::string command;

	while (true)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		if (!std::getline(std::cin, command) || std::cin.eof())
			return 0;

		if (command == "ADD")
		{
			Contact newContact;
			std::string input;

			if (!getValidatedInput("First Name: ", input, isAlphaNumeric))
				return 0;
			newContact.set_first_name(input);

			if (!getValidatedInput("Last Name: ", input, isAlphaNumeric))
				return 0;
			newContact.set_last_name(input);

			if (!getValidatedInput("Nickname: ", input, isAlphaNumeric))
				return 0;
			newContact.set_nickname(input);

			if (!getValidatedInput("Phone Number: ", input, isValidPhone))
				return 0;
			newContact.set_phone_number(input);

			if (!getValidatedInput("Darkest Secret: ", input, isAlphaNumeric))
				return 0;
			newContact.set_darkest_secret(input);

			phoneBook.addContact(newContact);
			std::cout << "Contact added successfully!\n";
		}

		else if (command == "SEARCH")
		{
			phoneBook.displayContacts();
			std::string searchInput;
			std::cout << "Enter index (1-8) or QUIT to return: ";
			
			if (!std::getline(std::cin, searchInput) || std::cin.eof())
				return 0;

			if (searchInput == "QUIT")
				continue;

			if (searchInput.length() == 1 && searchInput[0] >= '1' && searchInput[0] <= '8')
			{
				int idx = searchInput[0] - '0';
				phoneBook.displayContactDetails(idx);
			}
			else
			{
				std::cout << "Invalid index.\n";
			}
		}
		else if (command == "EXIT")
		{
			break;
		}
	}
	return 0;
}