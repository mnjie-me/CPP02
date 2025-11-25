/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 11:25:13 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/11/25 12:28:00 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractionalBit = 8;

Fixed::Fixed() : fixedPoint(0) {}

Fixed::Fixed(const int fp)
{
	fixedPoint = fp << fractionalBit;
}

Fixed::Fixed(const float f)
{
	fixedPoint = roundf(f * (1 << fractionalBit));
}

Fixed::~Fixed() {}

Fixed::Fixed(const Fixed& fp) : fixedPoint(fp.fixedPoint) {}

Fixed& Fixed::operator=(const Fixed& object)
{
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