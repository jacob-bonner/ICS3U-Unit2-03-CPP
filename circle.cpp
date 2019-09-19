// Copyright (c) 2019 Jacob Bonner All rights reserved.
//
// Created by: Jacob Bonner
// Created on: September 2019
// This program can calculate the circumference of a circle using TAU


#include <iostream>

// This function calculates the circumference of a circle using TAU
int main() {
    // These are the constants and variables
    const double TAU = 6.28;
    int radius;
    double circumference;

    // Input
    std::cout << "Enter the radius here: " << std::endl;
    std::cin >> radius;

    // Process
    circumference = TAU*radius;

    // Output
    std::cout << "" << std::endl;
    std::cout << "The circumference is " << circumference << "cm" << std::endl;
}
