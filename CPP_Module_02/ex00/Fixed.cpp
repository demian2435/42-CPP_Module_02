#include "Fixed.hpp"
#include <iostream>


Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->n = 0;
}

Fixed::Fixed(Fixed &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}


Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void)
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->n);
}

void Fixed::setRawBits(int n)
{
	this->n = n;
}

Fixed& Fixed::operator = (Fixed &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	this->n = copy.getRawBits();
	return (*this);
}
