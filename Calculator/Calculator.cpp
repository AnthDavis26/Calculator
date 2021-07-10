#include <iostream>
#include <string>

int main()
{
	float a, b, result;
	char op = -1;
	
	std::cout << "Enter your first number: ";
	std::cin >> a;

	std::cout << "Enter your second number: ";
	std::cin >> b;

	std::cout << "Enter your operand (+, -, *, or /): ";
	std::cin >> op;

	while (op != '+' && op != '-' && op != '*' && op != '/')
		std::cin >> op;

	switch (op)
	{
		case('-'): result = a - b; break;
		case('*'): result = a * b; break;
		case('/'): result = a / b; break;
		default: result = a + b;
	}

	std::cout << "Result: " << result << std::endl;
}