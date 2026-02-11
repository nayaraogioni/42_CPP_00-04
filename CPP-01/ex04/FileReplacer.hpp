/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nogioni- <nogioni-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/11 19:37:22 by nogioni-          #+#    #+#             */
/*   Updated: 2026/02/11 19:40:05 by nogioni-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEREPLACER_HPP
# define FILEREPLACER_HPP

#include <string>
#include <fstream>
#include <iostream>

# define SUCCESS 0
# define ERROR 1

class FileReplacer
{
private:
    std::string _fileName;
    std::string _s1;
    std::string _s2;

public:
    FileReplacer() {}
    void setFileName(const std::string& name) { _fileName = name; }
    void setS1(const std::string& s1) { _s1 = s1; }
    void setS2(const std::string& s2) { _s2 = s2; }

    const std::string& getFileName() const { return _fileName; }
    const std::string& getS1() const { return _s1; }
    const std::string& getS2() const { return _s2; }
};

// Funções auxiliares
bool validateArguments(int argc, char** argv);
bool performReplacement(const FileReplacer& instance);

#endif


