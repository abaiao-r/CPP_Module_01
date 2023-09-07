/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:27:22 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/07 15:23:14 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>
#include <cstdlib>


/* colours */
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"

class Zombie
{
    private:
        std::string name;

    public:
        // Constructors
        Zombie(void);
        Zombie(std::string name);
        
        // Destructor
        ~Zombie(void);

        // Setters
        void setName(std::string name);
        
        // Methods
        void announce(void) const;

};

// Prototypes
Zombie* zombieHorde( int N, std::string name );
Zombie* newZombie(std::string name);

#endif