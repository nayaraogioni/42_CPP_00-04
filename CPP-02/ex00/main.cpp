/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 13:10:35 by nogioni-          #+#    #+#             */
/*   Updated: 2026/02/12 13:22:32 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

#include <iostream>
int main( void )
{
    Fixed a; // Default constructor is called
    Fixed b( a ); // Copy constructor is called to create a new object 'b' as a copy of 'a'
    Fixed c; // Default constructor is called to create a new object 'c'

    c = b; // Copy assignment operator is called to assign the value of 'b' to 'c'

    std::cout << a.getRawBits() << std::endl; // Calls the getRawBits member function for object 'a' and prints its value
    std::cout << b.getRawBits() << std::endl;
    std::cout << c.getRawBits() << std::endl;
    
    return 0;
}