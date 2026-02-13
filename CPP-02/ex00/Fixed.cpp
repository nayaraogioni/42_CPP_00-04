/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 12:57:25 by nogioni-          #+#    #+#             */
/*   Updated: 2026/02/13 09:51:44 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

// Default constructor: initializes the fixed-point value to 0
Fixed::Fixed() : _fixedPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

// Copy constructor: creates a new object as a copy of an existing object
Fixed::Fixed(const Fixed& other)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

// Copy assignment operator: assigns the value of one object to another existing object
Fixed& Fixed::operator=(const Fixed& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
        this->_fixedPointValue = other.getRawBits();
    return *this;
}

// Destructor: called when an object goes out of scope or is explicitly deleted
Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

// Returns the raw value of the fixed-point number
int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointValue;
}

// Sets the raw value of the fixed-point number
void Fixed::setRawBits(int const raw)
{
    this->_fixedPointValue = raw;
}