/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:31:33 by nogioni-          #+#    #+#             */
/*   Updated: 2026/02/11 19:14:57 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>
#include <cstddef>

HumanB::HumanB(std::string name) : name(name), weapon(NULL) {}

void	HumanB::setWeapon(Weapon& w)
{
    weapon = &w;
}

void	HumanB::attack()
{
	if (weapon)
        std::cout << name << " attacks with their " 
                  << weapon->getType() << std::endl;
    else
        std::cout << name << " has no weapon to attack!" 
                  << std::endl;
}