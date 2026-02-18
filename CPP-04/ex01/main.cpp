/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/16 11:58:49 by nogioni-          #+#    #+#             */
/*   Updated: 2026/02/18 19:08:32 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

void other_tests()
{
	std::cout << "========= Creating an Animal, a Cat and a Dog =========" << std::endl;
	const Animal* meta = new Animal();
	std::cout << std::endl;
	const Animal* i = new Cat();
	std::cout << std::endl;
	const Animal* j = new Dog();
	std::cout << std::endl;
	std::cout << "========= Getting Types =========" << std::endl;
	std::cout << "Cat: " << i->getType() << std::endl;
	std::cout << "Dog: " << j->getType() << std::endl;
	std::cout << "Animal: " << meta->getType() << std::endl;
	std::cout << std::endl;
	
	std::cout << "========= Making Sounds =========" << std::endl;
	std::cout << "Cats go: ";
	i->makeSound();
	std::cout << "Dogs go: ";
	j->makeSound();
	std::cout << "Animals go: ";
	meta->makeSound();
	std::cout << std::endl;

	std::cout << "========= Testing WrongAnimal and WrongCat =========" << std::endl;
	const WrongAnimal* wmeta = new WrongAnimal();
	const WrongAnimal* wi = new WrongCat();

	std::cout << "WrongCat: " << wi->getType() << std::endl;
	wi->makeSound();
	std::cout << "WrongAnimal: " << wmeta->getType() << std::endl;
	wmeta->makeSound();
	std::cout << std::endl;

	std::cout << "========= Testing Deep Copy =========" << std::endl;
	Cat* cat1 = new Cat();
	Cat* cat2 = new Cat(*cat1);

	cat1->getBrain()->setIdea(0, "I want to catch a mouse");
	cat1->getBrain()->setIdea(1, "I want to sleep on the couch");

	cat2->getBrain()->setIdea(0, "I want to eat some food");
	cat2->getBrain()->setIdea(1, "I want to sleep on the bed");
	
	std::cout << "Cat1: " << cat1->getBrain() << std::endl;
	std::cout << "Cat2: " << cat2->getBrain() << std::endl;

	std::cout << "Cat1's ideas: " << cat1->getBrain()->getIdea(0) << ", " << cat1->getBrain()->getIdea(1) << std::endl;
	std::cout << "Cat2's ideas: " << cat2->getBrain()->getIdea(0) << ", " << cat2->getBrain()->getIdea(1) << std::endl;

	std::cout << std::endl;
	
	std::cout << "========= Deleting Objects =========" << std::endl;
	delete meta;
	delete j;
	delete i;
	delete wmeta;
	delete wi;
	delete cat1;
	delete cat2;
	
}

int main(void)
{
	std::cout << "========= SUBJECT TESTS =========" << std::endl;
	std::cout << "========= CREATING 50 CATS AND 50 DOGS =========" << std::endl;
	Animal* animals[100];

	for (int i = 0; i < 100; i++)
	{
		if (i < 50)
			animals[i] = new Dog();
		else
			animals[i] = new Cat();
	}
	std::cout << std::endl;
	std::cout << "========= DELETING 50 CATS AND 50 DOGS =========" << std::endl;
	for (int i = 0; i < 100; i++)
	{
		delete animals[i];
	}

	std::cout << "=================================" << std::endl;
	//other_tests();
	return 0;
}
