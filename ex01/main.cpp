/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/29 22:34:48 by mcastrat          #+#    #+#             */
/*   Updated: 2025/10/31 03:26:31 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	int n = 6;
	Zombie *bro;

	bro = zombieHorde(n,"omoe");
	if (!bro)
		return 1;
	for(int i = 0; i < n; i++){
		bro[i].announce();
	}
	delete[] bro;
	return 0;
}
