/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 17:34:23 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/03 14:15:12 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ANIMAL_H
#define ANIMAL_H

#include <iostream>
#include <string>
#include "Brain.hpp"

class Animal
{
protected:
	std::string _type;
	std::string _sound;
	Brain* _brain;
	virtual Brain* getBrain(void) const = 0;
public:
	Animal(void);
	Animal(const std::string& type);
	Animal(const Animal& copy);
	Animal& operator=(const Animal& copy);
	virtual ~Animal(void);
	virtual void makeSound(void) const = 0;
	virtual std::string getType(void) const = 0;
	virtual void setIdea(const std::string& idea) = 0;
	virtual std::string getIdea(const int ideaIndex) const = 0;
};

#endif