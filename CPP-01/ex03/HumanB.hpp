/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:31:36 by nogioni-          #+#    #+#             */
/*   Updated: 2026/02/11 19:02:46 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "Weapon.hpp"
#include <string>

class	HumanB
{
	private:
		std::string	name;
		Weapon*		weapon; //pointer beacause it can be null in case of no gun
	public:
		HumanB(std::string name);
		void	attack(void);
		void	setWeapon(Weapon& w);
};

#endif