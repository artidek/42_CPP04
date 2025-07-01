/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 21:32:24 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/01 22:25:45 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int main(void)
{
	Cat stray("siberian");
	Dog dog("puddle");
	Animal some;
	Animal *animal = &some;

	std::cout << "The animal type: " << stray.getType() << " the kind of animal: " << stray.getName() << std::endl;
	std::cout << "The " << stray.getType() << " says ";
	stray.makeSound();
	std::cout << "The animal type: " << dog.getType() << " the kind of animal: " << dog.getName() << std::endl;
	std::cout << "The " << dog.getType() << " says ";
	dog.makeSound();
	std::cout << "The animal type: " << animal->getType() << " the kind of animal: "  << std::endl;
	std::cout << "The " << animal->getType() << " says ";
	animal->makeSound();
	return 0;
}