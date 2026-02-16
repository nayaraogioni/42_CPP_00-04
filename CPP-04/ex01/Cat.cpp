/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 13:12:43 by nogioni-          #+#    #+#             */
/*   Updated: 2026/02/16 15:01:17 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal() {
	this->type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal() {
	std::cout << "Cat copy constructor called" << std::endl;
	this->type = other.type;
	this->_brain = new Brain(*other._brain);
}

Cat::~Cat() {
	if (_brain)
		delete _brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	if (this != &other) {
		Animal::operator=(other);
		this->type = other.type;
		if (this->_brain)
			delete _brain;
		this->_brain = new Brain(*other._brain);
	}
	return *this;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow meow" << std::endl;
}

Brain* Cat::getBrain() const
{
	return this->_brain;
}
