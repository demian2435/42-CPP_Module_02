#pragma once
#include <iostream>
#include <ostream> 

class Fixed
{
	private:
		int n;
		static const int bits = 8;
	public:
		Fixed(void);
		Fixed(Fixed const &copy);
		Fixed(int const n);
		Fixed(float const n);
		Fixed& operator = (Fixed const &copy);
		~Fixed();
		int getRawBits(void) const;
		void setRawBits(int n);
		int toInt() const;
		float toFloat() const;
};

std::ostream& operator<<(std::ostream &output, Fixed const &obj);
