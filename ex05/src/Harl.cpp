/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 18:47:26 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/08 20:46:29 by abaiao-r         ###   ########.fr       */
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
        << "This is unacceptable, I want to speak to the manager now." 
        << RESET << std::endl;
}

/* warning() function: it will print the warning message. */
void Harl::warning(void)
{
    std::cout << YELLOW << "[WARNING]"
        << "I think I deserve to have some extra bacon for free."
        << "I've been coming for years whereas you started working here"
        << "since last month." << RESET << std::endl;
}

/* info() function: it will print the info message. */
void Harl::info(void)
{
    std::cout << GREEN << "[INFO]" 
        << "I cannot believe adding extra bacon costs more money. "
        << "You didn't put enough bacon in my burger! "
        << "If you did, I wouldn't be asking for more!" << RESET << std::endl;
}

/* debug() function: it will print the debug message. */
void Harl::debug(void)
{
    std::cout << BLUE << "[DEBUG]"
        << "I love having extra bacon for my " 
        <<"7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!"
        << std::endl;
}

/* complain() function: depending on the level, it will call the appropriate
 * function. */
void Harl::complain(std::string level)
{
    int i;
    std::string levels[4];
    levels[0] = "DEBUG";
    levels[1] = "INFO";
    levels[2] = "WARNING";
    levels[3] = "ERROR";

    // array of pointers to member functions
    void (Harl::*complain[4])(void);
    complain[0] = &Harl::debug;
    complain[1] = &Harl::info;
    complain[2] = &Harl::warning;
    complain[3] = &Harl::error;

    // loop through the array of levels and call the appropriate function
    i = 0;
    while (i < 4)
    {
        if (levels[i] == level)
            (Harl().*(complain[i]))();
        i++;
    }
}
