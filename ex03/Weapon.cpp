/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:16:45 by mcastrat          #+#    #+#             */
/*   Updated: 2025/11/11 14:19:21 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : _type(type) {
}

Weapon::~Weapon(void){
}

const std::string &Weapon::getType(void) const{
    return(this->_type);
}

void Weapon::setType(std::string newtype){
    this->_type = newtype;
}