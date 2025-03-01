// Chapter 4 Exercise 5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//Programmer:Brenna Meyer
//Date: 02/28/2025
//Requirements: Body Mass Index
//Write a program that calculates and displays a person’s body mass index(BMI).
// The BMI is often used to determine whether a person is overweight or underweight for his or her height.
// A person’s BMI is calculated with the following formula :
//BMI = weight×703 / height2
//where weight is measured in pounds and height is measured in inches.
// The program should display a message indicating whether the person has optimal weight, is underweight, or is overweight.
// A person’s weight is considered to be optimal if his or her BMI is between 18.5 and 25. 
// If the BMI is less than 18.5, the person is considered to be underweight.
// If the BMI value is greater than 25, the person is considered to be overweight.



#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float BMI,
        Weight,
        Height;

    cout << "Enter weight (in pounds):" << endl;
    cin >> Weight;

    cout << "Enter height (in inches, example. 2' 9\"=33 inches)" << endl;
    cin >> Height;

    BMI = Weight * (730 / pow(Height, 2));
    cout << "BMI=" << BMI << endl;

    if (BMI >= 18.5 && BMI <= 25)
        cout << "Weight optimal." << endl;
    else if (BMI >= 0 && BMI <= 18.5)
        cout << "Under weight." << endl;
    else if (BMI >= 25)
        cout << "Overweight." << endl;

    return 0;
}


