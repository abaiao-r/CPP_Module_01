/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:28:20 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/07 14:43:48 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

/* zombieHorde:
 * Creates a new Zombie object and returns it.
 * The Zombie object is created on the heap because it is
 * a pointer.
 */
Zombie* zombieHorde( int N, std::string name )
{
    int i;
    Zombie* horde;

    horde = new Zombie[N];
    if (!horde || !name.length())
        return (NULL);
    i = 0;
    while (i < N)
    {
        horde[i].setName(name);
        i++;
    }
    return (horde);
}
