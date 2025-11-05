/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:04:54 by mcastrat          #+#    #+#             */
/*   Updated: 2025/11/03 19:41:18 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>

class Weapon {
    
    private:
        std::string _type;
        
    public:
        Weapon(std::string type);
        ~Weapon(void);
        std::string getType(void) const;
        void setType(std::string newtype);
        
};

#endif