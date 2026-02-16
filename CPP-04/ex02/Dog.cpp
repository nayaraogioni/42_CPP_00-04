/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 12:50:39 by nogioni-          #+#    #+#             */
/*   Updated: 2026/02/16 15:19:46 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal() {
	this->type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal() {
	std::cout << "Dog copy constructor called" << std::endl;
	this->type = other.type;
	this->_brain = new Brain(*other._brain);
}

Dog::~Dog() {
	if (this->_brain)
		delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	if (this != &other) {
		Animal::operator=(other);
		if (this->_brain)
			delete this->_brain;
		this->_brain = new Brain(*other._brain);
	}
	return *this;
}

void	Dog::makeSound(void) const
{
	std::cout << "Woof woof" << std::endl;
}

Brain* Dog::getBrain() const
{
	return this->_brain;
}