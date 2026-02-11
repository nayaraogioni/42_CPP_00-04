/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 18:31:08 by nogioni-          #+#    #+#             */
/*   Updated: 2026/02/11 18:31:09 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
	private:
		std::string	name;
	public:
		Zombie();
		~Zombie();
		void	announce(void);
		void	set_name(std::string name);

};

Zombie*	zombieHorde(int N, std::string name );

#endif