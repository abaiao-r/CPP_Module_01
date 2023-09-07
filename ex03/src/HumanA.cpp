/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:43:15 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/07 18:54:35 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/HumanA.hpp"

/* Constructor: Store the name and the Weapon. the weapon is declared in front
 * of the constructor because it is a reference and it needs to be created
 * before the constructor */
HumanA::HumanA(std::string name, Weapon &weapon) : weapon(weapon)
{
    this->name = name;
}

/* Destructor */
HumanA::~HumanA(void)
{
}

/* attack: Print the name of the HumanA and the type of weapon */
void HumanA::attack(void)
{
    std::cout << this->name << " attacks with their " << this->weapon.getType()
        << std::endl;
}