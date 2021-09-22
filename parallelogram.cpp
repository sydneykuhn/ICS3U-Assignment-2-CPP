// Copyright (c) 2020 Sydney Kuhn All rights reserved
//
// Created by: Sydney Kuhn
// Created on: Sep 2020
// This program calculates the area of a parallelogram
//    with dimensions given by user

#include <iostream>

int main() {
    // this function calculates the area
    int base;
    int height;
    int area;

    // input
    std::cout << "Calculate the area of a parallelogram:" << std::endl;
    std::cout << "Enter base of the parallelogram (mm): ";
    std::cin >> base;
    std::cout << "Enter height of the parallelogram (mm): ";
    std::cin >> height;

    // process
    area = base*height;

    // output
    std::cout << "" << std::endl;
    std::cout << "Area is " << area << " mm²." << std::endl;
    std::cout << "Done." << std::endl;
}
