/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 20:45:43 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/08 21:30:55 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

Harl::Harl(void)
{
}

Harl::~Harl(void)
{
}

/* error() function: it will print the error message. */
void Harl::error(void)
{
    std::cout << RED << "[ERROR]"
        << "This is unacceptable, I want to speak to the manager now.\n" 
        << RESET << std::endl;
}

/* warning() function: it will print the warning message. */
void Harl::warning(void)
{
    std::cout << YELLOW << "[WARNING]"
        << "I think I deserve to have some extra bacon for free."
        << "I've been coming for years whereas you started working here"
        << "since last month.\n" << RESET << std::endl;
}

/* info() function: it will print the info message. */
void Harl::info(void)
{
    std::cout << GREEN << "[INFO]" 
        << "I cannot believe adding extra bacon costs more money. "
        << "You didn't put enough bacon in my burger! "
        << "If you did, I wouldn't be asking for more!\n" << RESET << std::endl;
}

/* debug() function: it will print the debug message. */
void Harl::debug(void)
{
    std::cout << BLUE << "[DEBUG]"
        << "I love having extra bacon for my " 
        <<"7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
        << "\n" << std::endl;
}

/* complain() function: it will call the correct function to print the message
 * according to the level passed as argument. */
void Harl::complain(std::string level)
{
    int i;
    std::string levels[4];
    
    levels[0] = "DEBUG";
    levels[1] = "INFO";
    levels[2] = "WARNING";
    levels[3] = "ERROR";

    // This loop will compare the level passed as argument with the levels
    // available in the array. If it finds a match, it will break the loop.
    i = 0;
    while (i < 4)
    {
        if (level.compare(levels[i]) == 0)
            break;
        i++;
    }
    switch (i)
    {
        case 0:
            debug();
        case 1:
            info();
        case 2:
            warning();
        case 3:
            error();
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problem ]" 
                << std::endl;
            break;
    }
}
