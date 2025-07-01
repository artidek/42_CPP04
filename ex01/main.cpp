/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 23:15:21 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/01 23:30:04 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	Animal* animals[100];

	for (int i=0; i < 100; i++)
	{
		if (i < 49)
		{
			animals[i] = new Cat();
			animals[i]->_brain->ideas[0] = "Play with plastic bag";
		}
		if (i > 48)
		{
			animals[i] = new Dog();
			animals[i]->_brain->ideas[0] = "Chase squirell";
		}
	}
	for (int i=0; i < 100; i++)
	{
		std::cout << "The " << animals[i]->getType() << " has an idea " << animals[i]->_brain->ideas[0] << std::endl;
		delete animals[i];
	}
	return 0;
}