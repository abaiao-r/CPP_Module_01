/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 21:34:22 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/06 21:43:41 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

/* newZombie:
 * Creates a new Zombie object and returns it.
 * The Zombie object is created on the heap because it is
 * a pointer.
 */
Zombie* newZombie(std::string name)
{
    Zombie *newZombie = new Zombie(name);
    return (newZombie);
}
