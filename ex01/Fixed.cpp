/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 11:25:13 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/11/25 12:48:26 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractionalBit = 8;

Fixed::Fixed() : fixedPoint(0) 
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int fp)
{
	fixedPoint = fp << fractionalBit;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float f)
{
	fixedPoint = roundf(f * (1 << fractionalBit));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::~Fixed() 
{
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& fp) : fixedPoint(fp.fixedPoint)
{
	std::cout << "Copy constructor called" << std::endl;

}

Fixed& Fixed::operator=(const Fixed& object)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &object)
	{
		this->fixedPoint = object.fixedPoint;
	}
	return (*this);
}

float Fixed::toFloat( void ) const
{
	return (static_cast<float>(fixedPoint) / (1 << fractionalBit));
}

int Fixed::toInt( void ) const
{
	return (fixedPoint >> fractionalBit);
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}