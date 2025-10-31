/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/31 03:35:09 by mcastrat          #+#    #+#             */
/*   Updated: 2025/10/31 03:58:41 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void){
    std::string str = "HI THIS IS BRAIN";
    std::string *stringPTR = &str;
    std::string &stringREF = str;
    
    std::cout << "mem adress variable -> " << &str << std::endl;
    std::cout << "mem adress stringPTR -> " << &stringPTR << std::endl;
    std::cout << "mem adress stringREF -> " << &stringREF << std::endl;
    
    std::cout << "value str var -> " << str << std::endl;
    std::cout << "value stringPTR -> " << *stringPTR << std::endl;
    std::cout << "value str stringREF -> " << stringREF << std::endl;
}