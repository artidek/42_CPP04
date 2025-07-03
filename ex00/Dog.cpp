/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 22:09:56 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/03 11:23:02 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	std::cout << "Dog default constructor called\n";
	this->_type = "dog";
	this->_sound = "Woof";
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
		this->_type = copy.getType();
	return *this;
}
