// Copyright (c) 2021 Jonathan Kene All rights reserved.
//
// Created by: Jonathan Kene
// Date: May 7, 2021
// This program asks the user for the diameter and then
// displays the cost of the pizza based on the diameter.
#include <iostream>
#include <cmath>

int main() {
  // declare constants
const float HST = .05;

  // declare variables
  float  subtotal, tax, total;

  // get the subtotal from the user
  std::cout << "Enter the subtotal ($): ";
  std::cin >> subtotal;

  // calculate the tax amount and the total with tax
  tax = HST * subtotal;
  total = subtotal + tax;
  total = std::ceil(total * 100.0) / 100.0;

  // display the total of the pizza to the user
  std::cout << "You entered a subtotal of $"
  <<  printf("%.1f", subtotal) << "";
  std::cout << "\n";
  std::cout << "The HST is $" << tax << " and the total is $" << total << std::endl;
  }
