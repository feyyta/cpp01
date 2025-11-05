/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:03:11 by mcastrat          #+#    #+#             */
/*   Updated: 2025/11/05 04:17:40 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(void) : _name("defaultB"), _weapon(NULL){
}
HumanB::HumanB(std::string name) : _name(name), _weapon(NULL) {
}

HumanB::~HumanB(void){
}

void HumanB::setWeapon(Weapon &weapon) {
    this->_weapon = &weapon;
}

void HumanB::attack(void) const {
    if (this->_weapon)
        std::cout << this->_name << " attacks " << this->_weapon->getType() << std::endl;
    else
        std::cout << this->_name << " has no weapon " << std::endl;
}
