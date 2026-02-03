#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>

class Contact
{
//--------------------------------------------------
// Data members must be private so they cannot be
// accessed directly from outside the class
//--------------------------------------------------
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
//--------------------------------------------------
// Member functions must be public so they can be
// accessed from outside the class
//--------------------------------------------------
	public:
//--------------------------------------------------
// Constructor -> initialization of the data members
//--------------------------------------------------
		Contact(void);
//--------------------------------------------------
// Member functions to set data members
//--------------------------------------------------
		void	set_first_name(std::string name);
		void	set_last_name(std::string name);
		void	set_nickname(std::string name);
		void	set_phone_number(std::string number);
		void	set_darkest_secret(std::string secret);
//--------------------------------------------------
// Member functions to get data members
//--------------------------------------------------
		std::string	get_first_name() const;
		std::string	get_last_name() const;
		std::string	get_nickname() const;
		std::string	get_phone_number() const;
		std::string	get_darkest_secret() const;
};

#endif