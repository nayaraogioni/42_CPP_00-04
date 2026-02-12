/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 12:57:34 by nogioni-          #+#    #+#             */
/*   Updated: 2026/02/12 13:05:32 by nogioni-         ###   ########.fr       */
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
		Fixed();
		Fixed(const Fixed& other);
		~Fixed();

		Fixed& operator=(const Fixed& o);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif