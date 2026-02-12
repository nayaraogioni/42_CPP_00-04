/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 13:24:58 by nogioni-          #+#    #+#             */
/*   Updated: 2026/02/12 13:42:58 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

int main( void )
{
    Fixed a; // Default constructor called, a is initialized to 0
    Fixed const b( 10 ); // Int constructor called, b is initialized to 10 in fixed-point representation
    Fixed const c( 42.42f ); // Float constructor called, c is initialized to 42.42 in fixed-point representation
    Fixed const d( b ); // Copy constructor called, d is initialized as a copy of b

    a = Fixed( 1234.4321f ); // Float constructor called to create a temporary Fixed object with the value 1234.4321, then copy assignment operator called to assign it to a

    std::cout << "a is " << a << std::endl; // Overloaded insertion operator called, outputs the fixed-point value of a as a floating-point number
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;
    
    std::cout << "a is " << a.toInt() << " as integer" << std::endl; // toInt() method called to convert the fixed-point value of a to an integer, then outputs it
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;

    return 0;
}