#ifndef struct_mcq_h
#define struct_mcq_h

// Dependencies
#include <vector>
#include <string>

// Define a structure to store each question and its options
struct MCQ {
    std::string questionText;
    std::vector<std::string> options;
};

// Forward declared dependencies
std::vector<MCQ> mcq_maker();

#endif // !struct_mcq_h

