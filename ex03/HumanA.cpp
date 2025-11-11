/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:01:11 by mcastrat          #+#    #+#             */
/*   Updated: 2025/11/11 15:07:11 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

static Weapon defaultWeapon("def w");

HumanA::HumanA(void) : _name("defaultA"), _weapon(defaultWeapon){
}

HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon){
}

HumanA::~HumanA(void){
}

void HumanA::attack(void) const{
    std::cout << this->_name << " attacks with " << this->_weapon.getType() << std::endl;
}
