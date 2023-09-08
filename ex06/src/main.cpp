/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 20:45:17 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/08 21:31:33 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Harl.hpp"

int main(int ac, char **av)
{
    Harl harl;

    if (ac != 2)
    {
        std::cout << MAGENTA << "Usage: ./harlFilter [DEBUG|INFO|WARNING|ERROR]"
            << "\n" << RESET << std::endl;
        return (1);
    }
    harl.complain(av[1]);
    return (0);
}