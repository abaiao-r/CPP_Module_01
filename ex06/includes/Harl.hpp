/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 20:47:17 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/08 21:11:02 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>

/* Colours */
# define RESET		"\033[0m"
# define RED		"\033[31m"
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"
# define MAGENTA	"\033[35m"

class Harl
{
    private:
        void error(void);
        void warning(void);
        void info(void);
        void debug(void);
    public:
        Harl(void);
        ~Harl(void);
        void complain(std::string level);
};

#endif