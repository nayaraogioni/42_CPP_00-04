/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 13:24:56 by nogioni-          #+#    #+#             */
/*   Updated: 2026/02/13 10:13:41 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int		_fixedPointValue;
		static const int	_fracBits = 8;

	public:
		Fixed(); // Default constructor
		Fixed(const Fixed& other); // Copy constructor
		Fixed &operator=(const Fixed &other); // Copy assignment operator
		~Fixed(); // Destructor

		int getRawBits(void) const;		// Returns the raw value of the fixed-point number
		void setRawBits(int const raw); // Sets the raw value of the fixed-point number

		Fixed(int const intValue); // Constructor that takes an integer value and converts it to fixed-point
		Fixed(float const floatValue); // Constructor that takes a floating-point value and converts it
		
		float	toFloat(void) const; // Converts the fixed-point value to a floating-point number
		int		toInt(void) const; // Converts the fixed-point value to an integer

};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed); // Overloads the insertion operator to output the fixed-point value as a floating-point number

#endif