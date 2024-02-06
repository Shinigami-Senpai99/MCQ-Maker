#include "mcq_saver.h"
#include <iostream>

void mcq_saver(std::vector<MCQ> test)
{
	// Open a file for writing
	std::cout << "Enter the MCQ set name: ";
	std::string filename{};
	std::getline(std::cin >> std::ws, filename);
	std::ofstream outputFile(filename + ".txt");

	// Check if the file is opened successfully
	if (outputFile.is_open()) {

		// Serialize and write each MCQ object to the file
		for (const auto& question : test) {
			outputFile << "Question: " << question.questionText << "\n\n";
		
			int option_num{ 0 };
			
			outputFile << "Options:" << "\n";
			for (const auto& option : question.options) {
				option_num++;
				outputFile << option_num << '.' << option << "\n";
			}
			
			outputFile << "\nAnswer: " << question.answer << "\n";
		}

		// Close the file
		outputFile.close();
		std::cout << "\nMCQ test has been saved to mcq_test.txt\n";
	}
	else {
		std::cerr << "Unable to open file for writing.\n";
	}
}