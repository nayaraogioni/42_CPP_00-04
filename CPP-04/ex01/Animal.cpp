/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 12:06:30 by nogioni-          #+#    #+#             */
/*   Updated: 2026/02/16 14:04:02 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal default constructor called" << std::endl;
	this->type = "I don't know what I am";
}

Animal::Animal(const Animal& other) {
	std::cout << "Animal copy constructor called" << std::endl;
	this->type = other.type;
}

Animal::~Animal() {
	std::cout << "Animal destructor called" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	if (this != &other)
		this->type = other.type;
	return *this;
}

void	Animal::makeSound(void) const
{
	std::cout << "I don't know what I sound like" << std::endl;
}

std::string	Animal::getType() const
{
	return (this->type);
}

