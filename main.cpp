#include <iostream>
#include "calculator.hpp"

int main()
{
	int a = 0;
	int b = 0;

	std::cout << "Enter the first  number: ";
	std::cin >> a;
	std::cout << "Enter the second number: ";
	std::cin >> b;

	std::cout << "Sum: " << sum(a, b) << std::endl;

	return 0;
}
