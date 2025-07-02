/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 21:16:43 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/02 10:25:43 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Cat default constructor called\n";
	this->_sound = "Meow";
}

Cat::Cat(const std::string& type) : Animal("Cat"), _type(type)
{
	std::cout << "Cat constructor called\n";
	this->_sound = "Meow";
}

Cat::Cat(const Cat& copy) : Animal(copy)
{
	std::cout << "Cat copy constructor called\n";
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called\n";
}

Cat& Cat::operator=(Cat& copy)
{
	if (this != &copy)
		this->_type = copy.getName();
	return *this;
}

std::string	Cat::getName(void)
{
	return this->_type;
}

std::ostream& operator<<(std::ostream& o, Cat& cat)
{
	o << "Animal type: "
	<< cat.getType()
	<< " Cat type: "
	<< cat.getName();
	return o;
}
