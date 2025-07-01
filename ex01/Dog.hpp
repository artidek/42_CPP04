/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 22:07:57 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/01 22:09:38 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

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
};

#endif