#include "Zombie.hpp"
#include <iostream>

Zombie*	Zombie::newZombie(std::string name)
{
	Zombie*	uglyZombie = new Zombie(name);
	return (uglyZombie);
}
