#include "Zombie.hpp"
#include <iostream>

void	Zombie::randomChump(std::string name)
{
	Zombie	cuteZombie = Zombie(name);
	cuteZombie.announce();
}