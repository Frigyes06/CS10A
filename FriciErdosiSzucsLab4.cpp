/*
Copyright © 2022 Frigyes Erdosi-Szucs

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the “Software”), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.
*/

/**********************************
 * Student: Frici Erdosi-Szucs
 * Program: Lab 3 assignment
 * Description: Leap year tester
 * Date: 2022/10/18
***********************************/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    const int minDate = 1000;   //lowest date the program will work with
    const int maxDate = 2999;   //highest date the program will work with
    int yearToTest;

    cout << "Enter the year (" << minDate << ".." << maxDate << "): ";
    cin >> yearToTest;

    if (yearToTest < minDate || yearToTest > maxDate) {
        cout << "Invalid year: " << yearToTest <<endl;
        exit(0);
    } // this also triggers for non-int inputs.

    if (yearToTest % 100 == 0 && yearToTest % 400 != 0) {
        cout << "The year " << yearToTest << " is not a leap year." << endl;
        exit(0);
    }   //flat code. Nested code is bad.

    if (yearToTest % 4 == 0) {
        cout << "The year " << yearToTest << " is a leap year." << endl;
        exit(0); 
    }

    cout << "The year " << yearToTest << " is not a leap year." << endl;
}

/*  TEST Run 1
Enter the year (1000..2999): 2400
The year 2400 is a leap year.
*/
/*  TEST Run 2
Enter the year (1000..2999): 2100
The year 2100 is not a leap year.
*/
/*  TEST Run 3
Enter the year (1000..2999): 2024
The year 2024 is a leap year.
*/