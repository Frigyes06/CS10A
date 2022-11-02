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
 * Program: Lab 2 assignment
 * Description: Basic arithmetics
 * Date: 2022/09/10
***********************************/

#include <iostream>
#include <iomanip>
#include <string>
#include <math.h>

using namespace std;


int main() {
    const string myLastName = "Erdosi-Szucs";
    cout << "My last name is: " << myLastName << endl;
    const int myCollegeId = 878159321;
    cout << "My student login ID is: " << myCollegeId << endl;
    int myId = 44;
    cout << "myId is: " << myId << endl;
    const int nLet = myLastName.length();
    cout << "nLet is: " << nLet << endl;
    const int LEFT_MOST_NUMBER = 8;
    int intResult = 0;
    double doubleResult = 0;

    intResult = myId/2;
    cout << "Expression #1: 44 / 2 = " << intResult << endl;

    intResult = myId%2;
    cout << "Expression #2: 44 % 2 = " << intResult << endl;
    
    intResult = (nLet*(nLet+1))/2-1;
    cout << "Expression #3: 2 + 3 _ ... + nLet = " << intResult << endl;
    
    intResult = myId + nLet;
    cout << "Expression #4: 44 + 12 = " << intResult << endl;
    
    intResult = myId * nLet;
    cout << "Expression #5: 44 * 12 = " << intResult << endl;
    
    cout << "Expression #6: 44 += 12 = ";
    myId += nLet;
    cout << myId << endl;
    
    cout << "Expression #7: 56 *= 12";
    myId *= nLet;
    cout << " = " << myId << endl;

    doubleResult = (double) myId / (nLet + 1000);
    cout << "Expression #8: 672 / (12 + 1000) = " << doubleResult << endl;
    
    doubleResult = sin(LEFT_MOST_NUMBER);
    cout << "Expression #9: sin(8) = " << setprecision(4) << doubleResult;
    cout << endl;
}


/*
My last name is: Erdosi-Szucs
My student login ID is: 878159321
myId is: 44
nLet is: 12
Expression #1: 44 / 2 = 22
Expression #2: 44 % 2 = 0
Expression #3: 2 + 3 _ ... + nLet = 77
Expression #4: 44 + 12 = 56
Expression #5: 44 * 12 = 528
Expression #6: 44 += 12 = 56
Expression #7: 56 *= 12 = 672
Expression #8: 672 / (12 + 1000) = 0.664032
Expression #9: sin(8) = 0.9894
*/