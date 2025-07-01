/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 17:59:21 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/01 23:13:25 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("some"), _sound("Brrrr..."), _brain(new Brain())
{
	std::cout << "Animal default constructor called\n";
}

Animal::Animal(const std::string& type) : _type(type), _sound("Brrrr..."), _brain(new Brain())
{
	std::cout << "Animal constructor called\n";
}

Animal& Animal::operator=(const Animal& copy)
{
	if (this != &copy)
		this->_type = copy.getType();
	return *this;
}

Animal::Animal(const Animal& copy)
{
	*this = copy;
	std::cout << "Animal copy constructor called\n";
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called\n";
	delete _brain;
}

void Animal::makeSound(void) const
{
	std::cout << this->_sound << std::endl;
}

std::string Animal::getType(void) const
{
	return this->_type;
}
