// Copyright (c) 2019 Patrick Gemmell All rights reserved.
//
// Created by: Patrick Gemmell
// Created on: October 2019
// This Program plays a guessing game

#include <iostream>
#include <cstdlib>
#include <string>

int main() {
    while (true) {
        // This function guesses the number and compares
        const float GUESSED_ANSWER =  (rand() % 10) + 1;
        std::string integer_as_string;
        int integer_as_number;
            
        // input
        std::cout << "Guess an integer: ";
        std::cin >> integer_as_string;
            
        try {
            integer_as_number = std::stoi(integer_as_string);
            // process and output
            if (integer_as_number == GUESSED_ANSWER) {
                std::cout << "Correct!";
                break;
            } else {
                std::cout << "Is not correct";
            }
        } catch (std::invalid_argument) {
            std::cout << "That was not a valid integer";
        }
    }
}
