#include "mcq_maker.h"
#include <iostream>

int main()
{
	int mode{};
	
	std::cout << "1. MCQ Maker\n2. MCQ Taker\n\n" << "Mode: ";

	do 
	{
		std::cin >> mode;

		switch (mode)
		{
		case 1:
			std::cout << "\nInitializing MCQ Maker...\n\n";
			mcq_maker();
			break;
		case 2:
			std::cout << "\nChoose MCQ Test:\n\n";
			break;
		default:
			std::cout << "\nInvalid choice. Please enter 1 or 2.\n\n" << "Mode: ";
			break;
		}
		
	} while (mode != 1 && mode != 2);

	return 0;
}