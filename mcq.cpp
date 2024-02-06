#include "struct_mcq.h"
#include <iostream>

	int main()
	{
		int mode{};
		std::vector<MCQ> test{};

		std::cout << "1. MCQ Maker\n2. MCQ Taker\n\n" << "Mode: ";
		
		std::cin >> mode;
		
		do 
		{
			switch (mode)
			{
			case 1:
				std::cout << "\nInitializing MCQ Maker...\n\n";
				test = mcq_maker();
				break;
			case 2:
				std::cout << "\nChoose MCQ Test:\n\n";
				break;
			default:
				std::cout << "\nInvalid choice. Please enter 1 or 2.\n\n" << "Mode: ";
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cin >> mode;

				if (mode == 1) {
					std::cout << "\nInitializing MCQ Maker...\n\n";
					test = mcq_maker();
				}
				else if (mode == 2) {
					std::cout << "\nChoose MCQ Test:\n\n";
				}
				
				break;
			}
		
		} while (mode != 1 && mode != 2);

		// Print out the stored questions and options for debugging using a range loop
		for (const auto& question : test) {
			std::cout << "\nQuestion: " << question.questionText << "\nOptions:\n";
			for (size_t i = 0; i < question.options.size(); ++i) {
				std::cout << i + 1 << ". " << question.options[i] << '\n';
			}
			std::cout << "\nAnswer: " << question.answer << "\n";
		}

		return 0;
	}