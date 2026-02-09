#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <limits>
#include <cctype>

// -------------------------------
// Funções auxiliares de validação
// -------------------------------
bool isValidPhone(const std::string& str)
{
    if (str.empty())
        return false;
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::isdigit(static_cast<unsigned char>(str[i])) && str[i] != '-')
            return false;
    }
    return true;
}

bool isAlphaNumeric(const std::string& str)
{
    if (str.empty())
        return false;
    for (size_t i = 0; i < str.length(); i++)
    {
        if (!std::isalnum(static_cast<unsigned char>(str[i])) && str[i] != ' ')
            return false;
    }
    return true;
}

// -------------------------------
// main()
// -------------------------------
int main()
{
    PhoneBook phoneBook;
    std::string command;

    while (true)
    {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        if (!std::getline(std::cin, command))
            return 0;

        // -------------------
        // ADD
        // -------------------
        if (command == "ADD")
        {
            Contact newContact;
            std::string input;

            // First Name
            while (true)
            {
                std::cout << "First Name: ";
                if (!std::getline(std::cin, input))
                    return 0;
                if (isAlphaNumeric(input))
                    break;
                std::cout << "Invalid: use alphanumeric characters only and do not leave empty.\n";
            }
            newContact.set_first_name(input);

            // Last Name
            while (true)
            {
                std::cout << "Last Name: ";
                if (!std::getline(std::cin, input))
                    return 0;
                if (isAlphaNumeric(input))
                    break;
                std::cout << "Invalid: use alphanumeric characters only and do not leave empty.\n";
            }
            newContact.set_last_name(input);

            // Nickname
            while (true)
            {
                std::cout << "Nickname: ";
                if (!std::getline(std::cin, input))
                    return 0;
                if (isAlphaNumeric(input))
                    break;
                std::cout << "Invalid: use alphanumeric characters only and do not leave empty.\n";
            }
            newContact.set_nickname(input);

            // Phone Number
            while (true)
            {
                std::cout << "Phone Number: ";
                if (!std::getline(std::cin, input))
                    return 0;
                if (isValidPhone(input))
                    break;
                std::cout << "Invalid: use only digits (0-9) or '-'.\n";
            }
            newContact.set_phone_number(input);

            // Darkest Secret (alfanumérico também)
            while (true)
            {
                std::cout << "Darkest Secret: ";
                if (!std::getline(std::cin, input))
                    return 0;
                if (isAlphaNumeric(input))
                    break;
                std::cout << "Invalid: use alphanumeric characters only and do not leave empty.\n";
            }
            newContact.set_darkest_secret(input);

            phoneBook.addContact(newContact);
        }

        // -------------------
        // SEARCH
        // -------------------
        else if (command == "SEARCH")
        {
            phoneBook.displayContacts();
            std::string searchInput;

            std::cout << "Enter index (1–8) or QUIT to return: ";
            if (!std::getline(std::cin, searchInput))
                return 0;

            if (searchInput == "QUIT")
                continue;

            if (searchInput.length() == 1 &&
                searchInput[0] >= '1' &&
                searchInput[0] <= '8')
            {
                int idx = searchInput[0] - '0';
                phoneBook.displayContactDetails(idx);
            }
            else
            {
                std::cout << "Invalid index.\n";
            }
        }

        // -------------------
        // EXIT
        // -------------------
        else if (command == "EXIT")
        {
            break;
        }
    }

    return 0;
}
