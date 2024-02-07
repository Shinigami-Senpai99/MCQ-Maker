#include "q_opt_amount.h"
#include "get_valid_int.h"
#include <iostream>

int q_amount()
{
	std::cout << "Please enter the amount of questions: ";

	int q_amount{get_valid_int()};

	std::cout << q_amount << " is the amount of questions" << "\n"; // Comment this out later

	return q_amount;
}

int opt_amount()
{
	std::cout << "\nEnter the amount of options: ";

	int opt_num{get_valid_int()};

	return opt_num;
}