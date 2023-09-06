/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 21:49:20 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/06 22:07:44 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

int main(void)
{
    Zombie *zombie;

    zombie = newZombie("Zombie_on_the_heap");
    zombie->announce();
    delete zombie;

    randomChump("Zombie_on_the_stack");

    Zombie z2("Charlie");
    z2.announce();

    return (0);
}