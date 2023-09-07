/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 21:49:20 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/07 14:18:57 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

/* main: creates and destroys Zombie objects
 * Two ways of creating Zombie objects are shown:
 * 1. Zombie object created on the heap by calling newZombie
 * 2. Zombie object created on the stack by calling randomChump
 * The Zombie object created on the heap must be deleted manually
 * because it is a pointer.
 * The Zombie objects created on the stack are destroyed automatically
 * because they are not pointers.
 */
int	main(void)
{
	Zombie* zombie;

	// zombie is created on the heap then you have to delete it
	zombie = newZombie("Zombie_on_the_heap");
	zombie->announce();
	delete	zombie;
    
	// zombie is created on the stack so it is destroyed automatically
	randomChump("Zombie_on_the_stack");
	return (0);
}
