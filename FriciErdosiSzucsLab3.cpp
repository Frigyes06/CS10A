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
 * Description: Carpool calculator
 * Date: 2022/09/27
***********************************/

#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main() {
    float gasPrice;
    for (;;) {      //input checking
        cout << "Enter cost per gallon of gas (in Dollars.cents): ";
        if (cin >> gasPrice) {
            break;
        } else {
            cout << "Please enter a valid number" << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    if (not((int) round(gasPrice * 1000) % 10 == 9)) {
        gasPrice += 0.009;  //weird gas law. See: tinyurl.com/3p6uwzek
    }

    if (gasPrice < 4.59) {
        cout << "What do you think this is, Texas?" << endl;
    }

    cout << "Enter average miles per gallon: ";
    float mpg;
    cin >> mpg;
    cout << "Enter miles driven per day: ";
    float dailyMiles;
    cin >> dailyMiles;
    cout << "Enter parking fees per day (in Dollars): ";
    float parkingFee;
    cin >> parkingFee;
    cout << "Enter tolls per day (in Dollars): ";
    float tolls;
    cin >> tolls;

    float totalCost = (dailyMiles / mpg) * gasPrice + parkingFee + tolls;
    printf("your daily driving cost is: $%.2f", totalCost);
    cout << endl << endl;

    cout << "How many people can your car fit? ";
    int carCapacity;
    cin >> carCapacity;

    cout << "carpool options:         $/person" << endl;
    for(int i = 1; i < carCapacity + 1; i++) {  //for loop to generate calculations
        if (i == 1) {
            printf("%2d Person: %20.2f \n", i, totalCost / i);
        } else{
            printf("%2d People: %20.2f \n", i, totalCost / i);
        }
    }
 }


 /*
Enter cost per gallon of gas (in Dollars.cents): 5.779
Enter average miles per gallon: 23
Enter miles driven per day: 126.4
Enter parking fees per day (in Dollars): 5
Enter tolls per day (in Dollars): 10
your daily driving cost is: $46.76

How many people can your car fit? 12
carpool options:         $/person
 1 Person:                46.76 
 2 People:                23.38 
 3 People:                15.59 
 4 People:                11.69 
 5 People:                 9.35 
 6 People:                 7.79 
 7 People:                 6.68 
 8 People:                 5.84 
 9 People:                 5.20 
10 People:                 4.68 
11 People:                 4.25 
12 People:                 3.90
*/