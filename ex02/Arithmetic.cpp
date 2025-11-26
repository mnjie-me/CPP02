/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Arithmetic.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 12:45:32 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/11/26 12:52:55 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed& Fixed::operator=(const Fixed& obj)
{
	if (this != &obj)
	{
		this->fixedPoint = obj.fixedPoint;
	}
	return (*this);
}

Fixed Fixed::operator*(const Fixed& obj)
{
	return (Fixed(this->toFloat() * obj.toFloat()));
}

Fixed Fixed::operator/(const Fixed& obj)
{
	return (Fixed(this->toFloat() / obj.toFloat()));
}

Fixed Fixed::operator-(const Fixed& obj)
{
	return (Fixed(this->toFloat() - obj.toFloat()));
}

Fixed Fixed::operator+(const Fixed& obj)
{
	return (Fixed(this->toFloat() + obj.toFloat()));
}