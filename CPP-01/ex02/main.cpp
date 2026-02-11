/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:31:20 by nogioni-          #+#    #+#             */
/*   Updated: 2026/02/11 18:31:21 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main(void)
{
	std::string	str = "HI THIS IS BRAIN";

	std::string	*stringPTR = &str;

	std::string&	stringREF = str;

	std::cout << "O endereço de memória da variável string: "
			  << &str << std::endl;

	std::cout << "O endereço de memória mantido por stringPTR: "
			  << stringPTR << std::endl;

	std::cout << "O endereço de memória mantido por stringREF: "
			  << &stringREF << std::endl;

	std::cout << "\n";
	std::cout << "O valor da variável string: "
			  << str << std::endl;

	std::cout << "O valor apontado por stringPTR: "
			  << *stringPTR << std::endl;

	std::cout << "O valor apontado por stringREF: "
			  << stringREF << std::endl;
	return 0;
}