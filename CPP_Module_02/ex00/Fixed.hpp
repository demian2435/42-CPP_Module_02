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
