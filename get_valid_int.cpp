#include <iostream>

int get_valid_int()
{
	int valid_num{};

	while (true) {
		if (std::cin >> valid_num) {
			return valid_num;
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