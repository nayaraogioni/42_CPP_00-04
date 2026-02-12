/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 13:24:53 by nogioni-          #+#    #+#             */
/*   Updated: 2026/02/12 13:42:19 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

/*---------------------------------------------------------------------
    CONSTRUCTORS & DESTRUCTOR
---------------------------------------------------------------------*/

// Default constructor: initializes the fixed-point value to 0
Fixed::Fixed() : _fixedPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

// Constructor that takes an integer value and converts it to fixed-point
Fixed::Fixed(int const intValue) : _fixedPointValue(intValue << _fracBits)
{
    std::cout << "Int constructor called" << std::endl;
}

// Constructor that takes a floating-point value and converts it to fixed-point
Fixed::Fixed(float const floatValue) : _fixedPointValue((int)(floatValue * (1 << _fracBits)))
{
    std::cout << "Float constructor called" << std::endl;
}

// Copy constructor: copies the fixed-point value from another Fixed object
Fixed::Fixed(const Fixed& other) : _fixedPointValue(other._fixedPointValue)
{
    std::cout << "Copy constructor called" << std::endl;
}

// Destructor
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

/*---------------------------------------------------------------------
    OPERATORS
---------------------------------------------------------------------*/

// Copy assignment operator: assigns the fixed-point value from another Fixed object
Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->_fixedPointValue = other._fixedPointValue;
    return *this;
}

// Overloads the insertion operator to output the fixed-point value as a floating-point number
std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}

/*---------------------------------------------------------------------
    MEMBER FUNCTIONS
---------------------------------------------------------------------*/

// Converts the fixed-point value to a floating-point number
float Fixed::toFloat(void) const
{
    return (float)this->_fixedPointValue / (1 << _fracBits);
}

// Converts the fixed-point value to an integer
int Fixed::toInt(void) const
{
    return this->_fixedPointValue >> _fracBits;
}

int Fixed::getRawBits(void) const
{
    return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
    this->_fixedPointValue = raw;
}