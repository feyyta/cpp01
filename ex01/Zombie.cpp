/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 22:54:27 by mcastrat          #+#    #+#             */
/*   Updated: 2025/10/31 02:56:36 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(void) :_name("default"){}

Zombie::Zombie(std::string name) : _name(name){
}

Zombie::~Zombie(void){
	std::cout << this->_name << " die" << std::endl;
}

void Zombie::announce(void){
    std::cout << this->_name << " BraiinzzZZ.." << std::endl;
}

void    Zombie::setname(std::string name){
    this->_name = name;
}
