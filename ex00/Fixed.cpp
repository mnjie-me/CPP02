/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnjie-me <mnjie-me@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 12:45:17 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/12/16 14:14:19 by mnjie-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::fractionalBits = 8;

Fixed::Fixed() : rawBits(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& a) : rawBits(a.rawBits) 
{
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& a)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &a)
		this->rawBits = a.rawBits;
	return (*this);
}

Fixed::~Fixed() 
{
	std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->rawBits);
}

void Fixed::setRawBits(int const raw)
{
	this->rawBits = raw;
}
