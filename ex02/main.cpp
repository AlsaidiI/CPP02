#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << "\t\tis a at start" << std::endl;
	std::cout << ++a << "\tis a at ++a" << std::endl;
	std::cout << a << "\tis a after ++a" << std::endl;
	std::cout << a++ << "\tis a at a++" << std::endl;
	std::cout << a << "\tis a after a++" << std::endl;

	std::cout << b << "\t\tvalue of b" << std::endl;

	std::cout << Fixed::max(a, b) << "\t\tthe max of a and b" << std::endl;
	std::cout << Fixed::min(a, b) << "\tthe min of a and b" << std::endl;

	return 0;
}