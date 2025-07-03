/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 22:07:57 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/03 14:28:01 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

# include "Animal.hpp"

class Dog : public Animal
{
protected:
	Brain* getBrain(void) const;
  public:
	Dog(void);
	Dog(const std::string &name);
	Dog(const Dog &copy);
	Dog& operator=(const Dog& copy);
	virtual ~Dog(void);
	void makeSound(void) const;
	std::string getType(void) const;
	void setIdea(const std::string& idea);
	std::string getIdea(const int ideaIndex) const;
};

#endif