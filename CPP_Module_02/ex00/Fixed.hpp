#pragma once

class Fixed
{
	private:
		int n;
		static const int bits = 8;
	public:
		Fixed(void);
		Fixed(Fixed &copy);
		Fixed& operator = (Fixed &copy);
		~Fixed();
		int getRawBits(void);
		void setRawBits(int n);
};
