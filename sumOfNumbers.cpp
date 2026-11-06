// Copyright (c) 2026 Bryson G All rights reserved.
// .
// Created by: Bryson G
// Date: 11,06,2026
// This program gets a number from the user and
// adds all the numbers from 1 to that number

#include <iostream>
#include <string>
int main() {
    // Declare variables
    std::string userNum;
    int sum = 0;
    int counter = 0;
    int userNumInt;

    // Get the number from the user
    std::cout << "Enter a positive integer: ";
    std::cin >> userNum;
    // see if it is a valid number and convert it to an integer
    try {
        userNumInt = std::stoi(userNum);
    // see if it is a positive integer
        if (userNumInt < 0) {
        std::cout << userNumInt << " is not a positive integer";
        }
    // Add all the numbers from 1 to the user's number
    while (counter <= userNumInt) {
        std::cout << "Tracking " << counter << " times through the loop \n";
        sum = sum + counter;
        counter = counter + 1;
    }
    // Display the sum to the user
    std::cout << "The sum of all numbers from 1 to "
    << userNumInt << " is " << sum;
}
    catch (std::invalid_argument) {
    // userNum is not an integer
    std::cout << userNum << " is not a valid number ";
}
}
