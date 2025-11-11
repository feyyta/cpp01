/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 02:25:06 by mcastrat          #+#    #+#             */
/*   Updated: 2025/11/11 15:10:39 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int  n, std::string name){
    
    Zombie *bro;

    if (n <= 0) {
          std::cout << "no zombies" << std::endl;
          return(NULL);
    }
    if (name.empty()) {
        std::cout << "enter name bro" << std::endl;
        return(NULL);
    }
    try {
        bro = new Zombie[n];
    }
    catch(std::bad_alloc &err) {
        std::cout << "alloc err " << err.what() << std::endl;
        return(NULL);
    }
    /*for(int i = 0; i < n; i++) {
		bro[i].announce();
	}*/
    for(int i = 0; i < n; i++)
        bro[i].setname(name);
    return(bro);
}