/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 19:26:37 by nogioni-          #+#    #+#             */
/*   Updated: 2026/02/11 19:34:09 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"

int main(int ac, char **av) {
	if (validateArguments(ac, av) == ERRO)
		return(ERRO);
	FileReplacer	instance;
	setInfo(instance, av);
	if (searchAndReplace(instance) == ERRO)
		return (ERRO);
	std::cout << GREEN << "[ ✓ ] " << RESET << av[1] << ".replace created successfully!" << std::endl;
	return (SUCCESS);
}