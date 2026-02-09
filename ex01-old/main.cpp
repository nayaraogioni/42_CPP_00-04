#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <limits>

int main()
{
	PhoneBook phoneBook;
	std::string command;

	while (true)
	{
		std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
		std::getline(std::cin, command);

		if (command == "ADD")
		{
			Contact newContact;
			std::string input;

			std::cout << "First Name: ";
			std::getline(std::cin, input);
			newContact.set_first_name(input);

			std::cout << "Last Name: ";
			std::getline(std::cin, input);
			newContact.set_last_name(input);

			std::cout << "Nickname: ";
			std::getline(std::cin, input);
			newContact.set_nickname(input);

			std::cout << "Phone Number: ";
			std::getline(std::cin, input);
			newContact.set_phone_number(input);

			std::cout << "Darkest Secret: ";
			std::getline(std::cin, input);
			newContact.set_darkest_secret(input);

			phoneBook.addContact(newContact);
		}
		else if (command == "SEARCH")
		{
			phoneBook.displayContacts();
			std::cout << "Enter the index of the contact to view details: ";
			int index;
			std::cin >> index;
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clear the input buffer
			phoneBook.displayContactDetails(index);
		}
		else if (command == "EXIT")
		{
			break;
		}
		else
		{
			std::cout << "Invalid command. Please try again." << std::endl;
		}
	}
}