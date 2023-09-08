/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaiao-r <abaiao-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 18:41:52 by abaiao-r          #+#    #+#             */
/*   Updated: 2023/09/08 20:46:10 by abaiao-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>
# include <string>
# include <iomanip>

/* colours */
# define RESET		"\033[0m"
# define RED		"\033[31m"	
# define GREEN		"\033[32m"
# define YELLOW		"\033[33m"
# define BLUE		"\033[34m"

class Harl
{
    private:
        void debug(void);
        void info(void);
        void warning(void);
        void error(void);

    public:
        Harl(void);
        ~Harl(void);
        void complain(std::string level);
};

#endif
