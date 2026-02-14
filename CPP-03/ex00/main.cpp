/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 10:22:29 by nogioni-          #+#    #+#             */
/*   Updated: 2026/02/14 12:46:19 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap*    clap1 = new ClapTrap("clap1");
    ClapTrap*    clap2 = new ClapTrap("clap2");
    
    std::cout << "=========== CLAP1 10 ATTACKS TESTS ===========" << std::endl;
    std::cout << "[1]" << std::endl;
    clap1->attack("target1");
    std::cout << "[2]" << std::endl;
    clap1->attack("target1");
    std::cout << "[3]" << std::endl;
    clap1->attack("target1");
    std::cout << "[4]" << std::endl;
    clap1->attack("target1");
    std::cout << "[5]" << std::endl;
    clap1->attack("target1");
    std::cout << "[6]" << std::endl;
    clap1->attack("target1");
    std::cout << "[7]" << std::endl;
    clap1->attack("target1");
    std::cout << "[8]" << std::endl;
    clap1->attack("target1");
    std::cout << "[9]" << std::endl;
    clap1->attack("target1");
    std::cout << "[10]" << std::endl;
    clap1->attack("target1");
    std::cout << "[11]" << std::endl;
    clap1->attack("target1");
    std::cout << std::endl;

    std::cout << "=========== CLAP2 10 REPAIRS TESTS ===========" << std::endl;
    std::cout << "[1]" << std::endl;
    clap2->beRepaired(1);
    std::cout << "[2]" << std::endl;
    clap2->beRepaired(1);
    std::cout << "[3]" << std::endl;
    clap2->beRepaired(1);
    std::cout << "[4]" << std::endl;
    clap2->beRepaired(1);
    std::cout << "[5]" << std::endl;
    clap2->beRepaired(1);
    std::cout << "[6]" << std::endl;
    clap2->beRepaired(1);
    std::cout << "[7]" << std::endl;
    clap2->beRepaired(1);
    std::cout << "[8]" << std::endl;
    clap2->beRepaired(1);
    std::cout << "[9]" << std::endl;
    clap2->beRepaired(1);
    std::cout << "[10]" << std::endl;
    clap2->beRepaired(1);
    std::cout << "[11]" << std::endl;
    clap2->beRepaired(1);
    std::cout << std::endl;
    
    delete clap1;
    delete clap2;
    return 0;
}