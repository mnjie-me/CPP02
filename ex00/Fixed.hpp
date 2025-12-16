/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnjie-me <mnjie-me@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/24 12:32:50 by mari-cruz         #+#    #+#             */
/*   Updated: 2025/12/16 14:40:47 by mnjie-me         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Fixed

{
	private:
	
		int					rawBits;
		static const int	fractionalBits;

	public:

		Fixed();
		Fixed(const Fixed& a);
		Fixed& operator=(const Fixed& a);
		~Fixed();
		
		int getRawBits(void) const;
		void setRawBits(int const raw);
};