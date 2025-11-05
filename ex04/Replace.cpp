/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcastrat <mcastrat@student.42belgium.be    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/05 01:55:36 by mcastrat          #+#    #+#             */
/*   Updated: 2025/11/05 04:13:26 by mcastrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"

Replace::Replace(const std::string &filename) : _filename(filename)
{
}

Replace::~Replace()
{
}

int Replace::readFile(std::string &content)
{
	std::ifstream infile(_filename.c_str());
	if (!infile.is_open())
		return (std::cerr << "Error: cannot open file " << _filename << std::endl, 1);
	std::stringstream buffer;
	buffer << infile.rdbuf();
	content = buffer.str();
	infile.close();
	return 0;
}

std::string Replace::replaceAll(const std::string &content, const std::string &s1, const std::string &s2)
{
	std::string result = content;
	std::string same = "no change";
	int pos = 0;
	while (1)
	{
		pos = result.find(s1, pos);
		if (pos == -1)
			break;
		result.erase(pos, s1.length());
		result.insert(pos, s2);
		pos = pos + s2.length();
	}
	if (result == content)
		return(same);
	return result;
}

int Replace::writeFile(const std::string &content)
{
	std::string outfilename = _filename + ".replace";
	std::ofstream outfile(outfilename.c_str());
	if (!outfile.is_open())
		return (std::cerr << "Error: cannot create file " << outfilename  << std::endl, 1);
	outfile << content;
	outfile.close();
	std::cout << "Success: file created " << outfilename  << std::endl;
	return 0;
}

int Replace::replaceInFile(const std::string &s1, const std::string &s2)
{
	std::string content;
	if (readFile(content) != 0)
		return 1;
	std::string result = replaceAll(content, s1, s2);
	if (result == "no change")
		return (std::cerr << "Error: the file still the same " << std::endl, 1);	
	if (writeFile(result) != 0)
		return 1;
	return 0;
}
