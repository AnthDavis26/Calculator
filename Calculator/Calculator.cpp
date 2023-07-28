#include <iostream>

int main()
{
	float a, b, result;
	char op = -1;
	
	std::cout << "Enter your first number: ";
	std::cin >> a;
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "Enter your operand (+, -, *, or /): ";

	while (op != '+' && op != '-' && op != '*' && op != '/')
		std::cin >> op;

	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	std::cout << "Enter your second number: ";
	std::cin >> b;

	switch (op)
	{
	case('-'): result = a - b; break;
	case('*'): result = a * b; break;
	case('/'): result = a / b; break;
	default: result = a + b;
	}

	std::cout << a << " " << op << " " << b << " = " << result << std::endl;
}