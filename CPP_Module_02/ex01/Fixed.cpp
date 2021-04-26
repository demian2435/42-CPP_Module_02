/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:41:14 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/26 17:41:16 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>


Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->n = 0;
}

Fixed::Fixed(Fixed const &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Fixed::Fixed(const float n)
{
	std::cout << "Float constructor called" << std::endl;
	this->n = (round(n * (1 << this->bits )));
}

Fixed::Fixed(int const n)
{
	std::cout << "Int constructor called" << std::endl;
	this->n = n << this->bits;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->n);
}

void Fixed::setRawBits(int n)
{
	this->n = n;
}


float Fixed::toFloat(void) const
{
	return ((float)this->n / (1 << this->bits));
}

int   Fixed::toInt() const
{
	return (this->n >> this->bits);
}

std::ostream& operator<<(std::ostream &output, Fixed const &obj)
{
	output << " " << obj.toFloat();
	return (output);
}

Fixed& Fixed::operator = (Fixed const &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	this->n = copy.n;
	return (*this);
}
