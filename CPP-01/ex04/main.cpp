/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 19:26:37 by nogioni-          #+#    #+#             */
/*   Updated: 2026/02/12 11:40:10 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"

int main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "ERROR\n" 
				  << "Please insert the <file>, s1 and s2."
				  << std::endl;
		return (1);
	}
	
	FileReplacer	replacer(av[1], av[2], av[3]);

	replacer.replaceInFile();
	return (0);
}