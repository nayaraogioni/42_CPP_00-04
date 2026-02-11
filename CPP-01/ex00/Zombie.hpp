# ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie(std::string name); //construtor para atribuir um nome a todo zumbi q nasce
		void	announce(void);
		Zombie*	newZombie(std::string name);
		void	randomChump(std::string name);
		~Zombie();
};

#endif