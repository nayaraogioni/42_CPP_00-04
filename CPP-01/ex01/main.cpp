/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:30:36 by nogioni-          #+#    #+#             */
/*   Updated: 2026/02/11 18:30:37 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

int	main(void)
{
	int	N = 100;
	if (N <= 0)
		return 1;
	else
	{
		Zombie* z = zombieHorde(N, "Joca");
		for (int i = 0; i < N; i++)
		{
			std::cout <<  "[ " << (i + 1) << " ] ";
			z[i].announce();
		}
		delete[] z;
	}
	return 0;
}