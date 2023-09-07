/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:42:37 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/07 19:05:38 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class HumanB
{
    private:
        std::string name;
        // weapon is a pointer to a Weapon object because it is not initialized
        // in the constructor, but in the setWeapon method.
        Weapon *weapon;

    public:
        // Constructor
        HumanB(std::string name);
        // Destructor
        ~HumanB(void);

        // Methods
        void attack(void);
        void setWeapon(Weapon &weapon);
};

#endif