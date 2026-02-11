/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:31:46 by nogioni-          #+#    #+#             */
/*   Updated: 2026/02/11 19:20:07 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string defaultType) : type(defaultType) {}

const   std::string&	Weapon::getType() const
{
    return type;
}

void    Weapon::setType(std::string newType)
{
    type = newType;
}