// The starting files are unrelated to the exercise.
//
// They simply show syntax for writing and testing
//  o) a global function
//  o) an instance method
// Pick the style that best fits the exercise.
// Then delete the other one, along with this comment!

#include "hiker.hpp"
#include <string>
#include <vector>

std::string print_diamond(char letter) {
    if (letter < 'A' || letter > 'Z') {
        return "";
    }
    
    int size = letter - 'A' + 1;
    std::vector<std::string> diamond;
    
    // Build the top half of the diamond
    for (int i = 0; i < size; i++) {
        std::string line;
        char current_char = 'A' + i;
        
        // Add leading spaces
        for (int j = 0; j < size - i - 1; j++) {
            line += " ";
        }
        
        // Add the character
        line += current_char;
        
        // Add middle spaces (except for the first line)
        if (i > 0) {
            for (int j = 0; j < 2 * i - 1; j++) {
                line += " ";
            }
            line += current_char;
        }
        
        // Add trailing spaces
        for (int j = 0; j < size - i - 1; j++) {
            line += " ";
        }
        
        diamond.push_back(line);
    }
    
    // Build the bottom half (mirror of top half, excluding the middle line)
    for (int i = size - 2; i >= 0; i--) {
        diamond.push_back(diamond[i]);
    }
    
    // Join all lines with newlines
    std::string result;
    for (size_t i = 0; i < diamond.size(); i++) {
        if (i > 0) {
            result += "\n";
        }
        result += diamond[i];
    }
    
    return result;
}
