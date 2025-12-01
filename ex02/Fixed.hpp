/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:33:58 by pcervill          #+#    #+#             */
/*   Updated: 2025/12/01 13:12:55 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_num;
		static const int	_bits = 8;
	public:
		Fixed();
		~Fixed();
		Fixed(const int num);
		Fixed(const float num);
		Fixed(const Fixed &f);
		
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

		Fixed&	operator= (const Fixed &a);
	//  ******COMPARATION OPERATORS******
	bool	operator> (const Fixed &a);
	bool	operator< (const Fixed &a);
	bool	operator>= (const Fixed &a);
	bool	operator<= (const Fixed &a);
	bool	operator== (const Fixed &a);
	bool	operator!= (const Fixed &a);

//  ******ARITHMETIC OPERATORS******
	Fixed	operator+ (const Fixed &a);
	Fixed	operator- (const Fixed &a);
	Fixed	operator* (const Fixed &a);
	Fixed	operator/ (const Fixed &a);
//  ******INCREMENT/DECREMENT OPERATORS******
	Fixed&	operator++ ();
	Fixed	operator++ (int);
	Fixed&	operator-- ();
	Fixed	operator-- (int);

//  ******OVERLOADED FUNCTIONS******
	static Fixed&  min(Fixed &f1, Fixed &f2);
	static const Fixed& min(const Fixed& f1, const Fixed& f2);
	static Fixed& max(Fixed &f1, Fixed &f2);
	static const Fixed& max(const Fixed& f1, const Fixed& f2);

};
std::ostream& operator<<(std::ostream& os, Fixed const &a);

#endif