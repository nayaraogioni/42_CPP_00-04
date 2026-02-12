/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/12 11:12:51 by nogioni-          #+#    #+#             */
/*   Updated: 2026/02/12 12:10:19 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"

FileReplacer::FileReplacer(std::string fileName,
						   std::string s1,
						   std::string s2) :
						   _fileName(fileName),
						   _s1(s1), 
						   _s2(s2) {}

void	FileReplacer::replaceInFile()
{
	
	if (_s1.empty())
	{
		std::cout << "ERROR\n" 
				  << "S1 cannot be empty."
				  << std::endl;
		return ;
	}

	if (_s1 == _s2)
	{
		std::cout << "No replacements needed: S1 is identical to S2."
				  << std::endl;
		return;
	}

	std::ifstream in(_fileName.c_str());
	if (!in.is_open())
	{
		std::cout << "ERROR\n" 
				  << "Failed to open file."
				  << std::endl;
		return ;
	}
	
	if (in.peek() == std::ifstream::traits_type::eof())
	{
		std::cout << "ERROR\n" 
				  << "File is empty."
				  << std::endl;
		return;
	}
	
	std::ofstream out((_fileName + ".replace").c_str());
	if (!out.is_open())
	{
		std::cout << "ERROR\n"
				  << "Failed to create output file.\n";
		in.close();
		return;
	}
	
	std::string line;
	while (std::getline(in, line))
	{
		size_t pos = 0;
		while ((pos = line.find(_s1, pos)) != std::string::npos)
		{
			line.erase(pos, _s1.length());
			line.insert(pos, _s2);
			pos += _s2.length();
		}
		out << line << "\n";
	}
	in.close();
	out.close();
}
