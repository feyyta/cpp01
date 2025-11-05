/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 01:51:21 by mcastrat          #+#    #+#             */
/*   Updated: 2025/11/05 04:28:54 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

int main(int ac, char **av){
	if (ac != 4)
		return (std::cerr << "Usage: ./replace <filename> <s1> <s2>" << std::endl, 1);
	std::string filename = av[1];
	std::string s1 = av[2];
	std::string s2 = av[3];
	if (s1.empty())
		return (std::cerr << "Error: s1 cannot be empty" << std::endl, 1);
	Replace r(filename);
	if (!r.replaceInFile(s1, s2))
		return 1;
	return 0;
}
