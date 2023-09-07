/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:59:31 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/07 19:00:52 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Weapon.hpp"

/*  Constructor: Set the type of the Weapon */
Weapon::Weapon(std::string type)
{
    this->type = type;
}

/* Destructor */
Weapon::~Weapon(void)
{
}

/* getType: Return the type of the Weapon by reference */
std::string const &Weapon::getType(void)
{
    return (this->type);
}

/* setType: Set the type of the Weapon */
void Weapon::setType(std::string type)
{
    this->type = type;
}



