/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 21:06:32 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/08 21:40:36 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

/* colours */
# define RESET		"\033[0m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"

class Zombie
{
  private:
	std::string name;

  public:
	// Constructor
	Zombie(void);
	Zombie(std::string name);

	// Destructor
	~Zombie(void);

	// Setters
	void setName(std::string name);

	// Methods
	void announce(void) const;
};

// Prototypes
Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif