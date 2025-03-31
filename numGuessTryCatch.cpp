// Copyright (c) 2025 Volodymyr Kryzhanovskyi All rights reserved
// Created by: Volodymyr Kryzhanovskyi
// Created on: 03-31-2025
// In simple words, this program is gambling with a try catch

#include <iostream>
#include <cstdlib>
#include <string>

int main() {
    // gets number from user and declares the variable for it
    std::string userNumber;
    int userNumberAsInt;
    std::cout << "Insert random number from 0 to 9";
    std::cin >> userNumber;
    // generates random number
    int randomNumber;
    srand((unsigned)time(NULL));
    randomNumber = rand() % 10;
    //Basically sa try catch which tracks down the potenital error and states specific statement whether defends the code from error.
    try {
        userNumberAsInt = std::stoi(userNumber);
    // compares if numbers are the same, if they are displays win message
    if (userNumberAsInt == randomNumber) {
        std::cout << "You've guessed correctly. \n";
    }
    // if they are not the same then generates lose message and correct number
    else  {
        std::cout << "Your guess is incorrect, the number is " << randomNumber
        << std::endl;
    }
    } catch (std::invalid_argument) {
        std::cout << "Your argument is not valid. \n";
    }
}
