/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:43:34 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/07 18:54:26 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanB.hpp"

/* Constructor: Set the name of the HumanB */
HumanB::HumanB(std::string name)
{
    this->name = name;
}

/* Destructor */
HumanB::~HumanB(void)
{
}

/* attack: Print the name of the HumanB and the type of weapon */
void HumanB::attack(void)
{
    std::cout << this->name << " attacks with their " << this->weapon->getType()
        << std::endl;
}

/* setWeapon: Set the weapon of the HumanB  using a reference  because the
 * weapon is already created */
void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}
