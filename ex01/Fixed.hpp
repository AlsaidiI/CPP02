
#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{

public:

	// Constructors
	Fixed(void);
	Fixed(Fixed const & input);
	Fixed(int const input);
	Fixed(float const input);
	~Fixed(void);


	// Member functions
	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
	Fixed & operator=(Fixed const & input);
	
	float	toFloat( void ) const;
	int		toInt( void ) const;

private:

	int	_value;
	static int const	_digits = 8;

};

std::ostream & operator<<(std::ostream & o, Fixed const & input);

#endif