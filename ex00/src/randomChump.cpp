/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 21:34:12 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/06 21:48:59 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

/* randomChump:
 * Creates a new Zombie object and calls the announce method.
 * The Zombie object is created on the stack because it is
 * not a pointer.
 */
void randomChump(std::string name)
{
    Zombie newZombie(name);
    newZombie.announce();
}
