/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:33:58 by pcervill          #+#    #+#             */
/*   Updated: 2024/09/26 13:51:15 by pcervill         ###   ########.fr       */
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
		int					n;
		static const int	c;
	public:
		Fixed();
		Fixed(Fixed &fixed);
		~Fixed();
		int getRawBits(void);
		void setRawBits(int const raw);
};

#endif