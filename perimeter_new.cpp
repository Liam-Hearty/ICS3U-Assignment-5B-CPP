// Copyright (c) 2019 Liam Hearty All rights reserved.
//
// Created by: Liam Hearty
// Created on: October 2019
// This program uses a while loop to add all whole numbers from 1 to the
// chosen_number


#include <iostream>


// This function uses a while loop
int main() {
    int loop_counter;
    std::string chosen_number_as_string;
    int chosen_number;
    std::string number_of_sides_as_string;
    int number_of_sides;
    int answer = 0;

    try {
        std::cout << "How many sides does your shape have: " << std::endl;
        std::cin >> number_of_sides_as_string;
        number_of_sides = std::stoi(number_of_sides_as_string);

        if (number_of_sides <= 2) {
            std::cout << "A shape can not have less than 3 sides."
            << std::endl;
            void exit(int);
        } for (loop_counter=0; loop_counter < number_of_sides; loop_counter++) {
                std::cout << "Input a positive integer: " << std::endl;
                std::cin >> chosen_number_as_string;
                chosen_number = std::stoi(chosen_number_as_string);

                if (chosen_number < 0) {
            std::cout << "That number was 0 or less, try program again."
            << std::endl;
            break;

                } else {
                    answer = answer + chosen_number;
                    continue;
        }}
        std::cout << answer << std::endl;
    } catch(std::invalid_argument) {
        std::cout << "Please type in a whole number." << std::endl;
}}
