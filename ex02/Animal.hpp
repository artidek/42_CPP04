/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 17:34:23 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/02 10:57:43 by aobshatk         ###   ########.fr       */
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
public:
	Animal(void);
	Animal(const std::string& type);
	Animal(const Animal& copy);
	Animal& operator=(const Animal& copy);
	virtual ~Animal(void);
	virtual void makeSound(void) const = 0;
	virtual std::string getType(void) const;
	Brain* _brain;
};

#endif
