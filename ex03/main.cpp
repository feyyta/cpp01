/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/03 19:05:15 by mcastrat          #+#    #+#             */
/*   Updated: 2025/11/05 04:28:47 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main(){
    {
        HumanA defaultHumanA;
        HumanB defaultHumanB;

        defaultHumanA.attack();
        defaultHumanB.attack();
    }

    {
        Weapon gun("ak47");

        HumanA jul("jul", gun);
        jul.attack();

        HumanB naps("naps");
        naps.attack();

        naps.setWeapon(gun);
        naps.attack();
    }

    {
        Weapon club("f16");

        HumanA jul("jul", club);
        HumanB naps("naps");
        naps.setWeapon(club);

        jul.attack();
        naps.attack();

        club.setType("scar");

        jul.attack();
        naps.attack();
    }

    {
        Weapon axe("hache");
        Weapon bow("arc");

        HumanA jul("jul", axe);
        HumanB naps("naps");

        jul.attack();
        naps.setWeapon(bow);
        naps.attack();

        naps.setWeapon(axe);
        naps.attack();
    }

    {
        Weapon club = Weapon("m16");

        HumanA jul("jul", club);
        jul.attack();
        club.setType("m18");
        jul.attack();
    }
    {
        Weapon club = Weapon("m16");

        HumanB naps("naps");
        naps.setWeapon(club);
        naps.attack();
        club.setType("m18");
        naps.attack();
    }

    return 0;
}
