#include "A.hpp"
#define LOG 0

/////////////////////////////
// Coplien                 //
/////////////////////////////
A::A()
{
	if (LOG == 1)
		std::cout << "A default constructor called" << std::endl;
}

A::A(const A &cpy)
{
	if (LOG == 1)
		std::cout << "A copy constructor called" << std::endl;
	// ! Make copy ! this->thing = cpy->thing
}

A::~A()
{
	if (LOG == 1)
		std::cout << "A default destructor called" << std::endl;
}

A &A::operator=(const A &rhs)
{
	if (this != &rhs)
	{
		// ! Make copy !
	}
	return (*this);
}

/////////////////////////////
// Assignation contructors //
/////////////////////////////
/////////////////////////////
// Getters                 //
/////////////////////////////
/////////////////////////////
// Setters                 //
/////////////////////////////
/////////////////////////////
// Operators               //
/////////////////////////////
/////////////////////////////
// Methods                 //
/////////////////////////////
/////////////////////////////
// Exceptions              //
/////////////////////////////