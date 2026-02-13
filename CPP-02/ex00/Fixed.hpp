/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 12:57:34 by nogioni-          #+#    #+#             */
/*   Updated: 2026/02/13 09:48:51 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	private:
		int		_fixedPointValue;
		static const int	_fracBits = 8;

	public:
		Fixed(); // Default constructor
		Fixed(const Fixed& other); // Copy constructor
		~Fixed(); // Destructor

		Fixed& operator=(const Fixed& other); // Copy assignment operator

		int		getRawBits(void) const; // Returns the raw value of the fixed-point number
		void	setRawBits(int const raw); // Sets the raw value of the fixed-point number
};

#endif