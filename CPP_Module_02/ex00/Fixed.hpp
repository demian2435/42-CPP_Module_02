/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dmalori <dmalori@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 17:41:04 by dmalori           #+#    #+#             */
/*   Updated: 2021/04/26 17:41:05 by dmalori          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Fixed
{
	private:
		int n;
		static const int bits = 8;
	public:
		Fixed(void);
		Fixed(Fixed const &copy);
		Fixed& operator = (Fixed const &copy);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int const n);
};
