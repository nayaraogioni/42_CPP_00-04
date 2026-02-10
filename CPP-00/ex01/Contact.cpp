#include "Contact.hpp"

//--------------------------------------------------
// Constructor -> initialization of the data members
//--------------------------------------------------
Contact::Contact() : _firstName(""), _lastName(""), _nickname(""), _phoneNumber(""), _darkestSecret(""){}

//--------------------------------------------------
// Member functions to set data members
// Contact::set_first_name() -> function from the Contact class
// set_first_name(std::string name) receives a string parameter 'name'
// and assigns it to the private data member _firstName of the Contact class
//--------------------------------------------------

//--------------------------------------------------
// 'this': is a pointer that points to the object for 
// which a member function is called. 
// It allows access to the object's members
// (both data and functions) from within the member function.
// In this case, 'this' is used to access the private
// data members of the Contact class.
//--------------------------------------------------

void	Contact::set_first_name(std::string name)
{
	this->_firstName = name;
}

void	Contact::set_last_name(std::string name)
{
	this->_lastName = name;
}

void	Contact::set_nickname(std::string name)
{
	this->_nickname = name;
}

void	Contact::set_phone_number(std::string number)
{
	this->_phoneNumber = number;
}

void	Contact::set_darkest_secret(std::string secret)
{
	this->_darkestSecret = secret;
}

//--------------------------------------------------
// Member functions to get data members
// Contact::get_first_name() -> function from the Contact class
// get_first_name() returns the value of the private data member _firstName
//--------------------------------------------------
std::string	Contact::get_first_name() const
{
	return this->_firstName;
}

std::string	Contact::get_last_name() const
{
	return this->_lastName;
}

std::string	Contact::get_nickname() const
{
	return this->_nickname;
}

std::string	Contact::get_phone_number() const
{
	return this->_phoneNumber;
}

std::string	Contact::get_darkest_secret() const
{
	return this->_darkestSecret;
}
