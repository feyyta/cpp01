/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:22:28 by mcastrat          #+#    #+#             */
/*   Updated: 2025/11/11 15:11:13 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(void){
}

Harl::~Harl(void){
}

void Harl::debug(void){
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void){
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::warning(void){
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years, whereas you started working here just last month." << std::endl;
}

void Harl::error(void){
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
//tableau de ptr vers ft membre
void Harl::complain(std::string level) {
    void (Harl::*functions[])(void) = {
        &Harl::debug,
        &Harl::info,
        &Harl::warning,
        &Harl::error
    };
    std::string levels[] = {
        "DEBUG",
        "INFO",
        "WARNING",
        "ERROR"
    };
    for (int i = 0; i < 4; i++) {
        if (levels[i] == level) {
            (this->*functions[i])();
            return;
        }
    }
    std::cout << "Unknown level: " << level << std::endl;
}
