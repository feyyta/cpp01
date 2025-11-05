/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 01:50:12 by mcastrat          #+#    #+#             */
/*   Updated: 2025/11/05 04:04:26 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
#define REPLACE_HPP

#include <iostream>
#include <fstream>
#include <sstream>

class Replace
{
private:
	std::string _filename;
	int readFile(std::string &content);
	std::string replaceAll(const std::string &content, const std::string &s1, const std::string &s2);
	int writeFile(const std::string &content);

public:
	Replace(const std::string &filename);
	~Replace();
	int replaceInFile(const std::string &s1, const std::string &s2);
};

#endif
