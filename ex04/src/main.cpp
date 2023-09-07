/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:11:26 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/07 21:32:09 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>


int main(int ac, char **av)
{
    std::string filename;
    std::string s1;
    std::string s2;
    std::ifstream input_file;
    std::ofstream output_file;
    std::string content;
    std::string line;
    size_t pos;
    size_t s1_length;

    if (ac != 4)
    {
        std::cout << "Usage: ./Sed_is_for_losers <filename> <s1> <s2>"
            << std::endl;
        return (1);
    }
    filename = av[1];
    s1 = av[2];
    s2 = av[3];
    input_file.open(filename.c_str());
    if (!input_file)
    {
        std::cerr << "Error: could not open file " << filename << std::endl;
        return (1);
    }
    output_file.open((filename + ".replace").c_str());
    if (!output_file)
    {
        std::cerr << "Error: could not open file " << filename << ".replace" 
            << std::endl;
        return (1);
    }
    while (std::getline(input_file, line))
    {
        content += line;
        content += '\n';
    }
    s1_length = s1.length();
    pos = 0;
    while ((pos = content.find(s1, pos)) != std::string::npos)
    {
        content = content.substr(0,pos) + s2 + content.substr(pos + s1_length);
        pos += s2.length();
    }
    output_file << content;
    input_file.close();
    output_file.close();
    std::cout << "File " << filename << " successfully replaced." << std::endl;
    return (0);
}
