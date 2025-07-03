/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 22:09:56 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/03 12:53:30 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog default constructor called\n";
	this->_sound = "Woof";
	this->_type = "dog";
} 

Dog::Dog(const Dog& copy) : Animal(copy)
{
	std::cout << "Dog copy constructor called\n";
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called\n";
}

Dog& Dog::operator=(Dog& copy)
{
	if (this != &copy)
	{
		this->_type = copy.getType();
		this->_brain = copy.getBrain();
	}
	return *this;
}
