/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 14:27:40 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/07 16:17:04 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Zombie.hpp"

/* get_input:
 * Gets input from the user.
 */
static std::string get_input(std::string prompt)
{
	std::string input;
    
	std::cout << YELLOW << prompt << RESET << std::endl;
	std::cin.clear();
	std::getline(std::cin >> std::ws, input);

    // If the user enters Ctrl-D, exit the program.
	if (std::cin.eof())
	{
		std::cout << std::endl;
		std::exit(0);
	}
	return (input);
}

/* str_is_valid_positive_nbr:
 * Checks if the string is a valid positive number.
 */
static bool	str_is_valid_positive_nbr(const std::string &str)
{
	int i;

    // If the string is empty
    if (str.length() == 0 && str[0] != '0')
    {
        return (false);
    }
	i = 0;
	while (str[i])
	{
        // check if the character is a digit
		if (!std::isdigit(str[i]))
        {
            return (false);
        }
		i++;
	}

    // checks if str is more than 10 characters because the max int is 10 digits
    if (str.length() > 10)
        return (false);

    // if str is 10 characters, check if it is greater than 2147483647
    if (str.length() == 10 && str.compare("2147483647") > 0 && str[9] > '7')
    {
        return (false);
    }
	return (true);
}

/* get_valid_nbr:
 * Gets a valid positive number from the user.
 */
static std::string get_valid_nbr(std::string prompt)
{
    std::string input;

    // Keep asking for input until the user enters a valid positive number.
    while (1)
    {
        input = get_input(prompt);
        if (str_is_valid_positive_nbr(input))
        {
            return (input);
        }
        std::cout << RED 
            << "Error: Enter a positive number less than 2147483648" 
            << RESET << std::endl;
    }
}

/*  main:
 *  Creates a zombie horde.*/ 
int main(void)
{
    Zombie* zombie;
    int N;
    int i;
    std::string zombieHordeSize;

    zombieHordeSize = get_valid_nbr("How many zombies do you want to create?");
    N = std::atoi(zombieHordeSize.c_str());
    zombie = zombieHorde(N, "Zombie");
    if (!zombie)
    {
        std::cout << "Error: fail memory allocation on zombieHorde" 
            << std::endl;
        return (1);
    }
    i = 0;
    while (i < N)
    {
        zombie[i].announce();
        i++;
    }
    delete [] zombie;
    return (0);
}
