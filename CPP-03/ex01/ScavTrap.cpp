/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/14 12:48:49 by nogioni-          #+#    #+#             */
/*   Updated: 2026/02/14 15:51:19 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other)
{
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &other)
{
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    if (this != &other)
    {
        ClapTrap::operator=(other);
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "ScavTrap destructor called" << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
    if (_hitPoints > 0 && _energyPoints > 0)
    {
        std::cout << "ScavTrap " << _name << " attacks " << target
                  << " causing " << _attackDamage << " points of damage!"
                  << std::endl;
        _energyPoints--;
    }
    else
        std::cout << "ScavTrap " << _name << " can't attack " << target
                  << " because it has no energy!"
                  << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
    if (_hitPoints > 0)
    {
        std::cout << "ScavTrap " << _name << " it's down " << amount
                  << " points of attack damage"
                  << std::endl;
        _hitPoints = _hitPoints - amount;
        if (_hitPoints < 0)
            _hitPoints = 0;
    }
    else
    {
        std::cout << "ScavTrap " << _name << " is dead" << std::endl;
    }
}

void ScavTrap::beRepaired(unsigned int amount)
{
    if (_energyPoints > 0 && _hitPoints > 0)
    {
        std::cout << "ScavTrap " << _name << " repairs " << amount
                  << " hit points"
                  << std::endl;
        _energyPoints--;
        _hitPoints += amount;
    }
    else
    {
        std::cout << "ScavTrap " << _name << " can't be repaired because it has no energy or it's dead" << std::endl;
    }
}

void ScavTrap::guardGate(void)
{
    std::cout << "ScavTrap " << _name << " is now on guard mode" << std::endl;
}