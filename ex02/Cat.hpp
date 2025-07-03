/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aobshatk <aobshatk@42warsaw.pl>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/01 18:17:36 by aobshatk          #+#    #+#             */
/*   Updated: 2025/07/03 14:28:04 by aobshatk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

# include "Animal.hpp"

class Cat : public Animal
{
  protected:
	Brain* getBrain(void) const;
  public:
	Cat(void);
	Cat(const std::string &name);
	Cat(const Cat &copy);
	Cat& operator=(const Cat& copy);
	virtual ~Cat(void);
	void makeSound(void) const;
	std::string getType(void) const;
	void setIdea(const std::string& idea);
	std::string getIdea(const int ideaIndex) const;
};

#endif