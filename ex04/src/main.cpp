/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/07 19:11:26 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/08 18:28:04 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

/* write_output_file: write content to output file */
void write_output_file(const std::string &filename, const std::string &content)
{
    std::ofstream output_file;

    // open output file. If error, print error message and return
    output_file.open((filename + ".replace").c_str());
    if (!output_file)
    {
        std::cerr << "Error: could not open file " << filename << ".replace" 
            << std::endl;
        return ;
    }
    // write content to output file and close it
    output_file << content;
    output_file.close();
}

/* replace_in_content: replace all occurences of s1 by s2 in content */
std::string replace_in_content(std::string &content, const std::string &s1,
    const std::string &s2)
{
    size_t pos;
    size_t s1_length;

    //store length of s1 in s1_length
    s1_length = s1.length();
    //initialize pos to start search at beginning of content
    pos = 0;
    //while pos != npos(because npos is the largest possible value for size_t)
    while ((pos = content.find(s1, pos)) != std::string::npos)
    {
        // content is now equal to content up to pos + s2 + content from pos +
        // s1_length
        content = content.substr(0,pos) + s2 + content.substr(pos + s1_length);
        pos += s2.length();
    }
    return (content);
}

/* read_input_file: read input file and return content as string */
std::string read_input_file(const std::string &filename)
{
    std::ifstream input_file;
    std::string content;
    std::string line;

    // open input file. If error, return empty string.
    // Note: c_str() is needed because open() takes a const char *
    input_file.open(filename.c_str());
    if (!input_file)
    {
        std::cerr << "Error: could not open file " << filename << std::endl;
        return ("");
    }
    // read input file line by line and store in string
    while (std::getline(input_file, line))
    {
        content += line;
        // add newline character if not last line
        if (!input_file.eof())
        {
            content += '\n';
        }
    }
    // close input file and return content
    input_file.close();
    return (content);
}

/* main: check arguments, read input file, replace s1 by s2 in content, write
 * output file, print success message */
int main(int ac, char **av)
{
    std::string filename;
    std::string s1;
    std::string s2;
    std::string content;

    if (ac != 4)
    {
        std::cout << "Usage: ./Sed_is_for_losers <filename> <s1> <s2>"
            << std::endl;
        return (1);
    }
    filename = av[1];
    s1 = av[2];
    s2 = av[3];

    // store content of input file in string. If empty, return 1
    content = read_input_file(filename);
    if (content.empty())
    {
        return (1);
    }
    replace_in_content(content, s1, s2);
    write_output_file(filename, content);
    std::cout << "File " << filename << " successfully replaced." << std::endl;
    return (0);
}
