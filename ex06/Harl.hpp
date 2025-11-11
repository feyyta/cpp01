/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/11 14:53:52 by mcastrat          #+#    #+#             */
/*   Updated: 2025/11/11 14:58:37 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl {

	private:
    	void    debug();
    	void    info();
    	void    warning();
    	void    error();
	public:
    	Harl(void);
    	~Harl(void);
    	void    complain(std::string level);
};

#endif
