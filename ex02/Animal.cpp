/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 17:59:21 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/03 13:40:45 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("animal"), _sound("Brrrr..."), _brain(new Brain())
{
	std::cout << "Animal default constructor called\n";
}

Animal& Animal::operator=(const Animal& copy)
{
	if (this != &copy)
	{
		this->_type = copy.getType();
		delete this->_brain;
		this->_brain = new Brain(*copy.getBrain());
	}
	return *this;
}

Animal::Animal(const Animal& copy)
{
	this->_type = copy.getType();
	this->_brain = new Brain(*copy.getBrain());
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

Brain* Animal::getBrain(void) const
{
	return this->_brain;
}

void Animal::setIdea(const std::string& idea)
{
	for (int i = 0; i < 100; i++)
	{
		if (this->_brain->ideas[i].empty())
		{
			this->_brain->ideas[i] = idea;
			break;
		}
	}
}

std::string Animal::getIdea(const int ideaIndex) const
{
	if (ideaIndex >= 0 && ideaIndex < 100)
	{
		if (this->_brain->ideas[ideaIndex].empty())
			return "White noise";
		else
			return this->_brain->ideas[ideaIndex];
	}
	return "";
}