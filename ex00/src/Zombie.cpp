/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 21:17:53 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/07 14:14:34 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

/*  Default Constructor:
 *  Creates a new Zombie object and sets its name by calling
 *  the setName method. */
Zombie::Zombie(void)
{
}

/*  Constructor:
 *  Creates a new Zombie object and sets its name by calling
 *  the setName method. */ 
Zombie::Zombie(std::string name)
{
    this->setName(name);
}

/* Destructor prints the zombie name before destroying it.
 * It allows better debugging to see which zombies are being
 * destroyed. */
Zombie::~Zombie(void)
{
    std::cout << RED << this->name << " is destroyed!" << RESET << std::endl;
}

/* setName: Sets the Zombie object's name. */
void Zombie::setName(std::string name)
{
    this->name = name;
}

/* announce: Prints the Zombie object's name and a message after the zombie
 * has been created.*/
void Zombie::announce(void) const
{
    std::cout << GREEN << this->name << " BraiiiiiiinnnzzzZ..." << RESET 
        << std::endl;
}
