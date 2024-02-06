#include "q_opt_amount.h"
#include <iostream>

int q_amount()
{
	std::cout << "Please enter the amount of questions: ";

	int q_amount{};
	std::cin >> q_amount; // Get the amount of questions

	std::cout << q_amount << " is the amount of questions" << "\n"; // Comment this out later

	return q_amount;
}

int opt_amount()
{
	std::cout << "\nEnter the amount of options: ";

	int opt_num{};

	while (true) {
		if (std::cin >> opt_num) {
			return opt_num;
			// Valid input, break out of the loop
			break;
		}
		else {
			// Invalid input, clear the error flag and discard input
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Invalid input\nEnter a valid integer: ";
		}
	}
}