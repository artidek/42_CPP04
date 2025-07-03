/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 22:07:57 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/03 13:44:17 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class Dog : virtual public Animal
{
  public:
	Dog(void);
	Dog(const std::string &name);
	Dog(const Dog &copy);
	Dog& operator=(const Dog& copy);
	virtual ~Dog(void);
};

#endif