/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 10:22:29 by nogioni-          #+#    #+#             */
/*   Updated: 2026/02/14 15:43:36 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    std::cout << "===== CONSTRUCTION =====" << std::endl;
    // log should show: ClapTrap constructor -> ScavTrap constructor [2]
    ScavTrap scavA("Robot_A");
    std::cout << std::endl;

    std::cout << "===== SPECIFIC SKILLS =====" << std::endl;
    scavA.guardGate();          // message from scavA
    scavA.attack("Trump"); // message from scavA, with 20 attack damage
    std::cout << std::endl;

    std::cout << "===== ATTRIBUTES =====" << std::endl;
    // ScavTrap starts with 100 HP, 50 EP, 20 AD
    scavA.takeDamage(50);     // scavA should have 50 HP left
    scavA.beRepaired(20);    // scavA should have 70 HP now, and 49 EP (1 used for attack, 1 for repair)
    std::cout << std::endl;
 
    std::cout << "===== COPY AND ASSIGNMENT =====" << std::endl;
    ScavTrap scavB("Robot_B");
    scavB.takeDamage(90); // scavB should have 10 HP left

    std::cout << "\n--- Atribuição (scavB = scavA) ---" << std::endl;
    // scavB should now have the same attributes as scavA (70 HP, 49 EP, 20 AD)
    scavB = scavA;
    scavB.attack("Enemy"); 

    std::cout << "\n--- Copy constructor ---" << std::endl;
    ScavTrap scavC(scavB); 
    scavC.guardGate(); // scavC should have the same name and attributes as scavB
    std::cout << std::endl;

    std::cout << "===== EXAUSTION =====" << std::endl;
    ScavTrap shortLived("Low Batery");
    // shortLived starts with 100 HP, 50 EP, 20 AD
    shortLived.takeDamage(100);          // 0 HP
    shortLived.attack("Something"); //should not be able to attack, as it has 0 HP
    shortLived.beRepaired(10);           // should not be able to repair, as it has 0 HP
    std::cout << std::endl;

    std::cout << "===== DESTRUCTION =====" << std::endl;

    return 0;
}
