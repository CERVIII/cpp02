/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcervill <pcervill@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 13:46:08 by pcervill          #+#    #+#             */
/*   Updated: 2025/12/01 13:29:47 by pcervill         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Fixed.hpp"

Fixed::Fixed()
{
//	std::cout << "Default constructor called" << std::endl;
	this->_num = 0;
}

Fixed::~Fixed()
{
//	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const int num) : _num(num << _bits)
{
//	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float num) : _num(roundf((num) * (1 << _bits)))
{
//	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &f)
{
//	std::cout << "Copy constructor called" << std::endl;
	*this = f;
}

int Fixed::getRawBits(void) const
{
//	std::cout << "getRawBits member function called" << std::endl;
	return (_num);
}

void Fixed::setRawBits(int const raw)
{
	_num = raw;
}

float	Fixed::toFloat(void) const
{
	return static_cast<float>((_num)) / ((1 << _bits));
}

int	Fixed::toInt(void) const
{
	return (_num >> _bits);
}

//	COMPARATION OPERATORS
Fixed&    Fixed::operator= (const Fixed &a)
{
//	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &a)
		this->_num = a._num;
	return *this;
}

bool	Fixed::operator> (const Fixed &a)
{
	return this->getRawBits() > a.getRawBits();
}

bool	Fixed::operator< (const Fixed &a)
{
	return this->getRawBits() < a.getRawBits();
}

bool	Fixed::operator>= (const Fixed &a)
{
	return this->getRawBits() >= a.getRawBits();
}

bool	Fixed::operator<= (const Fixed &a)
{
	return this->getRawBits() <= a.getRawBits();
}

bool	Fixed::operator== (const Fixed &a)
{
	return this->getRawBits() == a.getRawBits();
}

bool	Fixed::operator!= (const Fixed &a)
{
	return this->getRawBits() != a.getRawBits();
}

//	ARITHMETIC OPERATORS

Fixed	Fixed::operator+ (const Fixed &a)
{
	return (a.toFloat() + this->toFloat());
}

Fixed	Fixed::operator- (const Fixed &a)
{
	return (a.toFloat() + this->toFloat());
}

Fixed	Fixed::operator* (const Fixed &a)
{
	return (a.toFloat() * this->toFloat());
}

Fixed	Fixed::operator/ (const Fixed &a)
{
	return (a.toFloat() / this->toFloat());
}

//	INCREMENT/DECREMENT OPERATIONS

Fixed&	Fixed::operator++(void)
{
	++this->_num;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	tmp._num = this->_num++;
	return tmp;
}

Fixed&	Fixed::operator--(void)
{
	--this->_num;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	tmp._num = this->_num--;
	return tmp;
}

//	OVERLOADED FUNCTIONS
Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

const Fixed& Fixed::min(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return a;
	return b;
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

const Fixed& Fixed::max(const Fixed &a, const Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

std::ostream& operator<<(std::ostream &os, Fixed const &a)
{
	os << a.toFloat();
	return os;
}
