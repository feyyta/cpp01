/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:53:55 by mcastrat          #+#    #+#             */
/*   Updated: 2025/11/11 15:11:47 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int getLevel(std::string level){
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for (int i = 0; i < 4; i++) {
        if (levels[i] == level)
            return i;
    }
    return -1;
}

int main(int ac, char **av){
    
	if (ac != 2) {
        std::cerr << "Usage: ./harlFilter <level>" << std::endl;
        return 1;
	}
    Harl harl;
    int level = getLevel(av[1]);

    switch (level) {
        case 0:
            harl.complain("DEBUG");
            std::cout << std::endl;
            // fall through
        case 1:
            harl.complain("INFO");
            std::cout << std::endl;
            // fall through
        case 2:
            harl.complain("WARNING");
            std::cout << std::endl;
            // fall through
        case 3:
            harl.complain("ERROR");
            break;
        default:
            std::cout << "Probably complaining about insignificant problems" << std::endl;
    }
    return 0;
}
