/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlevi <hlevi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/21 16:28:40 by hlevi             #+#    #+#             */
/*   Updated: 2022/08/30 14:19:15 by hlevi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("John Doe"), _grade(150)
{
	std::cout << "Bureaucrat default constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string newName, int newGrade)
{
	std::cout << "Bureaucrat assignation constructor called" << std::endl;
	if (newGrade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (newGrade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
	{
		this->_grade = newGrade;
		this->_name = newName;
		std::cout << "Bureaucrat assignation constructor succeeded" << std::endl;
	}
}

Bureaucrat::Bureaucrat(const Bureaucrat &cpy)
{
	std::cout << "Bureaucrat copy constructor called" << std::endl;
	this->_name = cpy._name;
	this->_grade = cpy._grade;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &rhs)
{
	this->_name = rhs._name;
	this->_grade = rhs._grade;
	return (*this);
}

Bureaucrat &Bureaucrat::operator++()
{
	this->_grade++;
	return (*this);
}

Bureaucrat Bureaucrat::operator++(int)
{
	Bureaucrat tmp;
	tmp = *this;
	++*this;
	return (tmp);
}

Bureaucrat &Bureaucrat::operator--()
{
	this->_grade--;
	return (*this);
}

Bureaucrat Bureaucrat::operator--(int)
{
	Bureaucrat tmp;
	tmp = *this;
	--*this;
	return (tmp);
}

std::string Bureaucrat::getName() const
{
	return (this->_name);
}

int Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void Bureaucrat::promote()
{
	if (this->_grade > 1)
	{
		std::cout << this->_name << " has been promoted" << std::endl;
		this->_grade--;
	}
	else
		std::cout << this->_name << " can't be promoted" << std::endl;
}

void Bureaucrat::demote()
{
	if (this->_grade < 150)
	{
		std::cout << this->_name << " has been demoted" << std::endl;
		this->_grade++;
	}
	else
		std::cout << this->_name << " can't be demoted" << std::endl;
}

// GradeTooLowException
const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too LOW.");
}

// GradeTooHighException
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too HIGH.");
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &bcrat)
{
	std::cout << bcrat.getName() << ", bureaucrat grade -> " << bcrat.getGrade() << std::endl;
	return (os);
}