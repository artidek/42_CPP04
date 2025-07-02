/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 22:07:57 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/02 11:01:14 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"
#include <ostream>

class Dog : virtual public Animal
{
  protected:
	std::string _type;

  public:
	Dog(void);
	Dog(const std::string &name);
	Dog(const Dog &copy);
	Dog& operator=(Dog& copy);
	virtual ~Dog(void);
	std::string getName(void);
	void makeSound(void) const {std::cout << "Woof\n";};
};

std::ostream& operator<<(std::ostream &o, Dog &dog);

#endif
