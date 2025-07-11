/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 17:34:23 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/03 12:49:58 by aobshatk         ###   ########.fr       */
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
	Brain* getBrain(void) const;
public:
	Animal(void);
	Animal(const std::string& type);
	Animal(const Animal& copy);
	Animal& operator=(const Animal& copy);
	virtual ~Animal(void);
	virtual void makeSound(void) const;
	virtual std::string getType(void) const;
	virtual void setIdea(const std::string& idea);
	virtual std::string getIdea(const int ideaIndex) const;
};

#endif