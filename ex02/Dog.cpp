/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 22:09:56 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/02 10:25:29 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Dog default constructor called\n";
	this->_sound = "Woof";
}

Dog::Dog(const std::string& type) : Animal("Dog"), _type(type)
{
	std::cout << "Dog constructor called\n";
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
		this->_type = copy.getName();
	return *this;
}

std::string	Dog::getName(void)
{
	return this->_type;
}

std::ostream& operator<<(std::ostream& o, Dog& dog)
{
	o << "Animal type: "
	<< dog.getType()
	<< " Dog type: "
	<< dog.getName();
	return o;
}
