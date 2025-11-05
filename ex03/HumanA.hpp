/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:01:52 by mcastrat          #+#    #+#             */
/*   Updated: 2025/11/05 04:18:11 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA {

    private:
        std::string _name;
        Weapon &_weapon;

    public:
        HumanA(void);
        HumanA(std::string name, Weapon& weapon);
        ~HumanA(void);
        void attack(void) const;
};

#endif
