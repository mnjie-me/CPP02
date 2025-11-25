/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mari-cruz <mari-cruz@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 12:32:50 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/11/25 10:07:34 by mari-cruz        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed

{
	private:
	
		int					fixedPoint;
		static const int	fractionalBits;

	public:

		Fixed();
		Fixed(int a);
		Fixed(const Fixed& a);
		Fixed& operator=(const Fixed& a);
		~Fixed();
		
		int getRawBits( void ) const;
		void setRawBits( int const raw );
};