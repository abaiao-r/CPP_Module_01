/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 16:27:12 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/07 17:34:53 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

/* main:
 * Creates a string, a pointer to a string and a reference to a string.
 * Prints the memory address of each variable and the value of each variable.
 */
int main(void)
{
    std::string str;
    std::string *stringPTR;
    std::string &stringREF = str;

    str = "HI THIS IS BRAIN";
    stringPTR = &str;

    std::cout << "String memory address: " << &str << std::endl;
    std::cout << "Pointer memory address: " << stringPTR << std::endl;
    std::cout << "Reference memory address: " << &stringREF << std::endl;

    std::cout << "String value: " << str << std::endl;
    std::cout << "Pointer value: " << *stringPTR << std::endl;
    std::cout << "Reference value: " << stringREF << std::endl;
    return (0);
}
