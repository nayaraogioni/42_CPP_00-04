#include "ClapTrap.hpp"

ClapTrap::ClapTrap(const std::string& name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : _name(other._name) {
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

ClapTrap::~ClapTrap(){
	std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_hitPoints > 0 && _energyPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " attacks " << target
	          << " causing " << _attackDamage << " points of damage!"
			  << std::endl;
		_energyPoints--;
	}
	else
		std::cout << "ClapTrap " << _name << " can't attack " << target
	          << " because it has no energy!"
			  << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hitPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " it's down " << amount
	          << " of attack damage"
			  << std::endl;
		_hitPoints = _hitPoints - amount;
		if (_hitPoints < 0)
			_hitPoints = 0;
	}
	else
	{
		std::cout << "ClapTrap " << _name << " is dead" << std::endl;
	}
	
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energyPoints > 0 && _hitPoints > 0)
	{
		std::cout << "ClapTrap " << _name << " repaired " << amount
	          << " of attack damage"
			  << std::endl;
		_energyPoints--;
		_hitPoints += amount;
	}
	
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other) {
		this->_name = other._name;
		this->_hitPoints = other._hitPoints;
		this->_energyPoints = other._energyPoints;
		this->_attackDamage = other._attackDamage;
}
	return *this;
}
