/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:31:12 by nogioni-          #+#    #+#             */
/*   Updated: 2026/02/11 18:31:13 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie*	zombieHorde(int N, std::string name )
{
	Zombie*	nZombie;

	nZombie = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		nZombie[i].set_name(name);
	}
	return (nZombie);
}