/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/11 14:23:40 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/11 16:32:15 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	std::cout << "Default constructor called" << std::endl;  
	this->name = "Cl4p-Tp";
	this->hp = 10;
	this->ep = 10;
	this->ad = 0;
}

ClapTrap::ClapTrap(std::string newName)
{
	std::cout << "Assignation constructor called" << std::endl;  
	this->name = newName;
	this->hp = 10;
	this->ep = 10;
	this->ad = 0;
}

ClapTrap::ClapTrap(const ClapTrap &trap)
{
	std::cout << "Copy constructor called" << std::endl;  
	*this = trap;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Default destructor called" << std::endl;  
}

ClapTrap	&ClapTrap::operator= (const ClapTrap &rhs)
{
	this->name = rhs.getName();
	this->hp = rhs.getHp();
	this->ep = rhs.getEp();
	this->ad = rhs.getAd();
	return (*this);
}

std::string ClapTrap::getName() const
{
	return (this->name);
}

int	ClapTrap::getHp() const
{
	return (this->hp);
}

int	ClapTrap::getEp() const
{
	return (this->ep);
}

int	ClapTrap::getAd() const
{
	return (this->ad);
}

void	ClapTrap::setHp(int newHp)
{
	this->hp = newHp;
}

void	ClapTrap::setEp(int newEp)
{
	this->ep = newEp;
}

void	ClapTrap::setAd(int newAd)
{
	this->ad = newAd;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->ep > 0 && this->hp > 0)
	{
		std::cout << "ClapTrap" << this->name << "attacks" << target
			<< ", causing" << this->ad << "points of damages !" << std::endl;
		this->ep--;
	}
	else
		std::cout << "ClapTrap" << this->name << "is either dead or has no energy left" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap" << this->name << "takes" 
		<< amount << "points of damages" << std::endl;
	this->hp -= amount;
	if (this->hp <= 0)
		std::cout << "ClapTrap" << this->name << "died" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->ep > 0 && this->hp > 0)
	{
		std::cout << "ClapTrap" << this->name << "attacks" << target
			<< ", causing" << this->ad << "points of damages !" << std::endl;
		this->ep--;
	}
	else
		std::cout << "ClapTrap" << this->name << "is either dead or has no energy left" << std::endl;
}
