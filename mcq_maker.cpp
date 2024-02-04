#include "mcq_maker.h"
#include <string>
#include <vector>
#include <iostream>

struct Question {
	std::string questionText;
	std::vector<std::string> options;
};

void mcq_maker()
{
	int ques_amount(q_amount()); //Initialize ques_amount with q_amount() to get the amount of questions
	
	std::vector<Question> questions; // Vector to store all the questions

	int q_counter{0}; // Initialize q_counter to decide the iteration count
	do
	{
		Question currentQuestion; // Create a new Question object for each iteration

		std::string question{};
		std::cout << "\nEnter question #" << q_counter + 1 << ": ";
		std::getline(std::cin >> std::ws, question);
		std::cout << question << "\n" << "This is question #" << q_counter + 1 << '\n'; // comment this out later
		
		int option_num(opt_amount()); // Initialize option_num to decide how many options to make 

		//Loop for making the options 
		for (int option{0}; option < option_num; ++option) {
			std::string optionText{};
			std::cout << "\nEnter option #" << option + 1 << ": ";
			std::getline(std::cin >> std::ws, optionText);
			std::cout << "This is option " << option + 1 << ": " << optionText << '\n'; // Comment this out later
		}

		q_counter++;

	} while (q_counter < ques_amount);
}