/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 17:42:07 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/07 19:02:00 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include <iostream>

class Weapon
{
    private:
        std::string type;

    public:
        // Constructor
        Weapon(std::string type);

        // Destructor
        ~Weapon(void);

        // Setters
        void setType(std::string type);

        // Getters
        std::string const &getType(void);
};

#endif