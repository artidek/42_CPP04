/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 18:17:36 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/01 21:30:47 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

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
};

#endif