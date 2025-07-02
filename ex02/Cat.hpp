/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 18:17:36 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/02 11:01:12 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"
#include <ostream>

class Cat : virtual public Animal
{
  protected:
	std::string _type;

  public:
	Cat(void);
	Cat(const std::string &name);
	Cat(const Cat &copy);
	Cat& operator=(Cat& copy);
	virtual ~Cat(void);
	std::string getName(void);
	void makeSound(void) const {std::cout << "Meow\n";};
};

std::ostream& operator<<(std::ostream &o, Cat &cat);

#endif
