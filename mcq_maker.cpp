#include "mcq_maker.h"
#include <string>
#include <vector>
#include <iostream>

// Define a structure to store each question and its options
struct MCQ {
    std::string questionText;
    std::vector<std::string> options;
};

void mcq_maker()
{
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
        for (int option{ 0 }; option < option_num; ++option) {
            std::string optionText{};
            std::cout << "\nEnter option #" << option + 1 << ": ";
            std::getline(std::cin >> std::ws, optionText);
            currentQuestion.options.push_back(optionText);
        }

        questions.push_back(currentQuestion); // Store the current question in the vector

        q_counter++;

    } while (q_counter < ques_amount);

    // Print out the stored questions and options for debugging
    for (const auto& question : questions) {
        std::cout << "\nQuestion: " << question.questionText << "\nOptions:\n";
        for (size_t i = 0; i < question.options.size(); ++i) {
            std::cout << i + 1 << ". " << question.options[i] << '\n';
        }
    }
}
