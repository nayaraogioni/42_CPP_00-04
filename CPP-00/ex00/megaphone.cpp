/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/13 13:29:14 by nogioni-          #+#    #+#             */
/*   Updated: 2026/02/13 13:29:19 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>
#include <string>

int	main(int ac, char **av)
{
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	else
	{
		for (int j = 1; j < ac; j++)
		{
			for (int i = 0; av[j][i]; i++)
			{
				std::cout << static_cast<char>(std::toupper(av[j][i]));
			}
		}
	}
	std::cout << std::endl;
	return (0);
}
