/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/25 11:26:03 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/11/25 12:21:25 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class Fixed

{
	private:

		int fixedPoint;
		static const int fractionalBit;

	public:

		Fixed();
		Fixed(const int fp);
		Fixed(const float f);
		Fixed(const Fixed& fp);
		Fixed& operator=(const Fixed& object);
		~Fixed();

		float toFloat( void ) const;
		int toInt( void ) const;
};
	
std::ostream& operator<<(std::ostream& os, const Fixed& obj);