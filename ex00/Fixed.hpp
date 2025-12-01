/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:33:58 by pcervill          #+#    #+#             */
/*   Updated: 2025/12/01 00:19:26 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Fixed
{
	private:
		int					_num;
		static const int	_bits = 8;
	public:
		Fixed();
		Fixed(const Fixed &f);
		void	operator= (Fixed &a);
		~Fixed();
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
};

#endif