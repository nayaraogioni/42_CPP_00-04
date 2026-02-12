/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 13:46:45 by nogioni-          #+#    #+#             */
/*   Updated: 2026/02/12 14:20:20 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

/*-----------------------------------------------------------
    COMPARISON OPERATORS
------------------------------------------------------------*/

bool    Fixed::operator>(const Fixed &other) const
{
    return this->_fixedPointValue > other._fixedPointValue;
}

bool    Fixed::operator<(const Fixed &other) const
{
    return this->_fixedPointValue < other._fixedPointValue;
}

bool    Fixed::operator>=(const Fixed &other) const
{
    return this->_fixedPointValue >= other._fixedPointValue;
}

bool    Fixed::operator<=(const Fixed &other) const
{
    return this->_fixedPointValue <= other._fixedPointValue;
}

bool    Fixed::operator==(const Fixed &other) const
{
    return this->_fixedPointValue == other._fixedPointValue;
}

bool    Fixed::operator!=(const Fixed &other) const
{
    return this->_fixedPointValue != other._fixedPointValue;
}


/*-----------------------------------------------------------
    ARITHMETIC OPERATORS
------------------------------------------------------------*/

Fixed   Fixed::operator+(const Fixed &other) const
{
    return Fixed(this->toFloat() + other.toFloat());
}

Fixed   Fixed::operator-(const Fixed &other) const
{
    return Fixed(this->toFloat() - other.toFloat());
}

Fixed   Fixed::operator*(const Fixed &other) const
{
    return Fixed(this->toFloat() * other.toFloat());
}

Fixed   Fixed::operator/(const Fixed &other) const
{
    return Fixed(this->toFloat() / other.toFloat());
}

/*-----------------------------------------------------------
    INCREMENT/DECREMENT OPERATORS
------------------------------------------------------------*/

Fixed& Fixed::operator++()
{
    this->_fixedPointValue++;
    return *this;
}

Fixed   Fixed::operator++(int)
{
    Fixed temp(*this);
    this->_fixedPointValue++;
    return temp;
}

Fixed& Fixed::operator--()
{
    this->_fixedPointValue--;
    return *this;
}

Fixed   Fixed::operator--(int)
{
    Fixed temp(*this);
    this->_fixedPointValue--;
    return temp;
}

/*-----------------------------------------------------------
    MIN/MAX FUNCTIONS
------------------------------------------------------------*/

Fixed&       Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b) ? a : b;
}

Fixed&       Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b) ? a : b;
}

/* -----------------------------------------------------------
    OVERLOAD OF THE INSERTION OPERATOR
---------------------------------------------------------------*/

std::ostream& operator<<(std::ostream& os, const Fixed& fixed)
{
    os << fixed.toFloat();
    return os;
}

/*-----------------------------------------------------------
    CONSTRUTOR AND DESTRUCTOR
--------------------------------------------------------------*/

Fixed::Fixed() : _fixedPointValue(0)
{
    // std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int intValue)
{
    // std::cout << "Int constructor called" << std::endl;
    this->_fixedPointValue = intValue << _fracBits;
}

Fixed::Fixed(const float floatValue)
{
    // std::cout << "Float constructor called" << std::endl;
    this->_fixedPointValue = roundf(floatValue * (1 << _fracBits));
}

Fixed::Fixed(const Fixed& other)
{
    // std::cout << "Copy constructor called" << std::endl;
    this->_fixedPointValue = other._fixedPointValue;
}

Fixed::~Fixed()
{
    // std::cout << "Destructor called" << std::endl;
}

/*-----------------------------------------------------------
   GETTERS AND SETTERS
--------------------------------------------------------------*/

int Fixed::getRawBits(void) const
{
    // std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointValue;
}

void Fixed::setRawBits(int const raw)
{
    this->_fixedPointValue = raw;
}

/*-----------------------------------------------------------
    CONVERSION FUNCTIONS
--------------------------------------------------------------*/

float   Fixed::toFloat(void) const
{
    return (float)this->_fixedPointValue / (1 << _fracBits);
}

int     Fixed::toInt(void) const
{
    return this->_fixedPointValue >> _fracBits;
}

/*-----------------------------------------------------------
    COPY ASSIGNMENT OPERATOR
--------------------------------------------------------------*/

Fixed& Fixed::operator=(const Fixed& other)
{
    // std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        this->_fixedPointValue = other._fixedPointValue;
    }
    return *this;
}

