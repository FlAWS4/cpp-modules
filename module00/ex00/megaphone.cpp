/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mshariar <mshariar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/10 23:58:26 by mshariar          #+#    #+#             */
/*   Updated: 2025/11/12 23:56:29 by mshariar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
        return (-1);
    }
    int i = 1;
    while (i < ac)
    {
        int j = 0;
        while (av[i][j])
        {
            std::cout << static_cast<char>(std::toupper (av[i][j]));
            j++;
        }
        i++;
    }
    std::cout << std::endl;
    return (0);
}