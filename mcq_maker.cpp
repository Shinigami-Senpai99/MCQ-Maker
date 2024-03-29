#include "struct_mcq.h"
#include "q_opt_amount.h"
#include "get_valid_int.h"
#include <iostream>


std::vector<MCQ> mcq_maker()
{
    std::cout << "\nInitializing MCQ Maker...\n\n";

    int ques_amount(q_amount()); // Initialize ques_amount with q_amount() to get the amount of questions

    std::vector<MCQ> questions{}; // Create a vector called questions that will hold data of MCQ type

    int q_counter{ 0 }; // Initialize q_counter to decide the iteration count
    do
    {
        MCQ currentQuestion{}; // Create a new Question structure for the current question

        std::cout << "\nEnter question #" << q_counter + 1 << ": ";
        std::getline(std::cin >> std::ws, currentQuestion.questionText);

        int option_num(opt_amount()); // Initialize option_num to decide how many options to make

        // Loop for making the options
        for (int o_counter{ 0 }; o_counter < option_num; ++o_counter) {
            std::string optionText{};
            std::cout << "\nEnter option #" << o_counter + 1 << ": ";
            std::getline(std::cin >> std::ws, optionText);
            currentQuestion.options.push_back(optionText);
        }

        // Get the integer for the answer
        std::cout << "\nAnswer: ";

        do
        {
            currentQuestion.answer = get_valid_int();
            
            if (currentQuestion.answer < 1 || currentQuestion.answer > option_num)
            {
                std::cout << "Invalid Option\nPlease Enter a valid option: ";
            }
            else
            {
                break;
            }

        } while (currentQuestion.answer >= 1 || currentQuestion.answer <= option_num);
        
        questions.push_back(currentQuestion); // Store the current question in the vector

        q_counter++;

    } while (q_counter < ques_amount);

    return questions;

}
