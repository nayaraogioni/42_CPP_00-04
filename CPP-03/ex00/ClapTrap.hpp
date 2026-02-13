#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <string>
#include <iostream>

class ClapTrap
{
	private:
		std::string _name;
		unsigned int _hitPoints;
		unsigned int _energyPoints;
		unsigned int _attackDamage;
	public:
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();

		// when a ClapTrap attacks, it causes its target to lose 
		// hit points equal to the attack damage of the ClapTrap
		// each attack costs 1 energy point
		void attack(const std::string& target);

		// when a ClapTrap takes damage, it loses hit points equal 
		//to the damage taken
		void takeDamage(unsigned int amount);

		// when a ClapTrap is repaired, it regains hit points equal 
		// to the amount of repair
		// each repair costs 1 energy point
		void beRepaired(unsigned int amount);
};
#endif
