/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:42:25 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/07 19:02:44 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon &weapon;

    public:
        // Constructor
        HumanA(std::string name, Weapon &weapon);
        // Destructor
        ~HumanA(void);

        // Methods
        void attack(void);
};

#endif