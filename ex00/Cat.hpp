/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 18:17:36 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/03 11:19:39 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class Cat : public Animal
{
  public:
	Cat(void);
	Cat(const Cat &copy);
	Cat& operator=(Cat& copy);
	virtual ~Cat(void);
	std::string getName(void);
};

#endif