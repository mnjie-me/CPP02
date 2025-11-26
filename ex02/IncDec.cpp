/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IncDec.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/26 12:48:13 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/11/26 12:48:36 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed& Fixed::operator++()
{
	this->fixedPoint += 1;
	return (*this);
}

Fixed Fixed::operator++(int)
{
	Fixed temp(*this);
	this->fixedPoint += 1;
	return(temp);
}

Fixed& Fixed::operator--()
{
	this->fixedPoint -= 1;
	return (*this);
}

Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	this->fixedPoint -= 1;
	return (temp);
}