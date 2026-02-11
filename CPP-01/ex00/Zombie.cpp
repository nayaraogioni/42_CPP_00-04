#include "Zombie.hpp"
#include <iostream>

/*
Inicializa o atributo this->name
com o valor que veio no parâmetro name
*/
Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie() { std::cout << name << " morreu\n"; }

void	Zombie::announce(void)
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
