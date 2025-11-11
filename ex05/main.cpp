/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:22:54 by mcastrat          #+#    #+#             */
/*   Updated: 2025/11/11 15:11:23 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(void){
    
	Harl harl;
    std::string level;
    std::cout << "Enter a level (DEBUG, INFO, WARNING, ERROR) or 'exit' to quit:" << std::endl;

    while (1) {
        std::cout << "> ";
        if (!std::getline(std::cin, level))
            break;
        if (level == "exit")
            break;
        if (level.empty())
            continue;
        harl.complain(level);
        std::cout << std::endl;
    }
    return 0;
}
