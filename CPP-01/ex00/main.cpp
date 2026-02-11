#include "Zombie.hpp"
#include <string>
#include <iostream>

int	main(void)
{
	Zombie* z = Zombie::newZombie("Feio");
	z->announce();
	delete z;
	Zombie::randomChump("Bonito");
	return 0;
}