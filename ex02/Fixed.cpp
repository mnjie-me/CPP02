/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 10:49:23 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/11/26 12:49:22 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractionalBit = 8;

Fixed::Fixed() : fixedPoint(0) {}

Fixed::Fixed(const int fp) : fixedPoint(fp << fractionalBit) {}

Fixed::Fixed(const float fp) : fixedPoint(roundf(fp * (1 << fractionalBit))) {}

Fixed::Fixed(const Fixed& fp) : fixedPoint(fp.fixedPoint) {}

Fixed::~Fixed() {}

int Fixed::toInt(void) const
{
	return (this->fixedPoint >> fractionalBit);
}

float Fixed::toFloat(void) const
{
	return (static_cast<float>(this->fixedPoint) / (1 << fractionalBit));
}

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
	os << obj.toFloat();
	return (os);
}


