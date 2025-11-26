/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Comparitions.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 12:46:51 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/11/26 12:47:06 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

bool Fixed::operator>(const Fixed &obj) const
{
	if (this->fixedPoint > obj.fixedPoint)
		return (true);
	return (false);
}

bool Fixed::operator<(const Fixed &obj) const
{
	if (this->fixedPoint < obj.fixedPoint)
		return (true);
	return (false);
}

bool Fixed::operator>=(const Fixed &obj) const
{
	if (this->fixedPoint > obj.fixedPoint)
		return (true);
	if (this->fixedPoint == obj.fixedPoint)
		return (true);
	return (false);
}

bool Fixed::operator<=(const Fixed &obj) const
{
	if (this->fixedPoint < obj.fixedPoint)
		return (true);
	if (this->fixedPoint == obj.fixedPoint)
		return (true);
	return (false);
}

bool Fixed::operator==(const Fixed &obj) const
{
	if (this->fixedPoint == obj.fixedPoint)
		return (true);
	return (false);
}

bool Fixed::operator!=(const Fixed &obj) const
{
	if (this->fixedPoint != obj.fixedPoint)
		return (true);
	return (false);
}