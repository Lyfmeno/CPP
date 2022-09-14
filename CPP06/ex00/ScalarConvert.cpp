/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConvert.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/14 15:18:20 by hlevi             #+#    #+#             */
/*   Updated: 2022/09/14 15:19:59 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConvert.hpp"
#define LOG 0

ScalarConvert::ScalarConvert()
{
	if (LOG == 1)
		std::cout << "ScalarConvert default constructor called" << std::endl;
}

ScalarConvert::ScalarConvert(const ScalarConvert &cpy)
{
	if (LOG == 1)
		std::cout << "ScalarConvert copy constructor called" << std::endl;
	// ! Make copy ! this->thing = cpy->thing
}

ScalarConvert::~ScalarConvert()
{
	if (LOG == 1)
		std::cout << "ScalarConvert default destructor called" << std::endl;
}

ScalarConvert &ScalarConvert::operator=(const ScalarConvert &rhs)
{
	if (this != &rhs)
	{
		// ! Make copy !
	}
	return (*this);
}
