/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 21:06:32 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/06 22:07:37 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

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

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif