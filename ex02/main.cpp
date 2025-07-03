/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 23:15:21 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/03 13:45:04 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	Animal* animals[100];

	for (int i=0; i < 100; i++)
	{
		if (i < 50)
		{
			animals[i] = new Cat();
			animals[i]->setIdea("Play with plastic bag");
		}
		if (i > 49) 
		{
			animals[i] = new Dog();
			animals[i]->setIdea("Chase squirell");
		}
	}
	for (int i=0; i < 100; i++)
	{
		std::cout << "The " << animals[i]->getType() << " has an idea " << animals[i]->getIdea(0) << std::endl;
		delete animals[i];
	}
	Animal* dog = new Dog();
	Animal* anotherDog = new Dog();
	anotherDog->setIdea("Cats are evil");
	*dog = *anotherDog;
	std::cout << "The dog address is " << dog << " and the dog has an idea " << dog->getIdea(0) << std::endl;
	std::cout << "The another dog address is " << anotherDog << " and the another dog has an idea " << anotherDog->getIdea(0) << std::endl;
	delete dog;
	delete anotherDog;
	return 0;
}