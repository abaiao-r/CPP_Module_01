/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:27:53 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/07 16:21:05 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

/* constructor:
 * Initializes the Zombie object.
 */
Zombie::Zombie(void)
{
}

/* constructor:
 * Initializes the Zombie object.
 */
Zombie::Zombie(std::string name)
{
    this->name = name;
}

/* destructor:
 * Called when the object is destroyed.
 */
Zombie::~Zombie(void)
{
    std::cout << RED << this->name << " is dead" << RESET << std::endl;
}

/* setName:
 * Sets the Zombie object's name.
 */
void Zombie::setName(std::string name)
{
    this->name = name;
}

/* announce:
 * Prints the Zombie object's name and a message after the zombie
 * has been created.
 */
void Zombie::announce(void) const
{
    std::cout << GREEN << this->name << " BraiiiiiiinnnzzzZ..." << RESET 
        << std::endl;
}
