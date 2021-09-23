// Copyright (c) 2021 Liam Fletcher All rights reserved
//
// Created by: Liam Fletcher
// Created on: Sep 2021
// This program asks the user to guess a number between 0 - 9

#include <iostream>
#include <string>
#include <random>

main() {
    // this function uses a try statement
    std::string integerAsString;
    int integerAsNumber;
    int someRandomNumber;
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0 , 9);  // [0,9]
    someRandomNumber = idist(rgen);

    // input
    std::cout << "Enter the number between 0 - 9: ";
    std::cin >> integerAsString;
    std::cout << "" << std::endl;

    // process & output
    try {
         integerAsNumber = std::stoi(integerAsString);
    
        if (integerAsNumber == someRandomNumber) {
        // output
        std::cout << "You guessed the number correctly" << integerAsNumber;
        } else {  
            std::cout << "You guessed the number incorrectly :(";
            std::cout << std::endl;
            
    } catch (std::invalid_argument) {
        std::cout << "That was not a valid number";
    }
    std::cout << "\nDone.";
}
