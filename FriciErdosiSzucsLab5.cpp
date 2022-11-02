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
 * Program: Lab 5 assignment
 * Description: Score average calculator
 * Date: 2022/11/1
***********************************/

#include <iostream>
#include <iomanip>
#include <vector>
#include <algorithm>

using namespace std;

//I made a vector instead of 5 variables to make code cleaner.
vector<int> scores{};

void getScore(int index = 0) {
    int score;

    cout << "Enter a diving score: ";
    cin >> score;
    while (score < 0 || score >10) {
        cout << "Enter a diving score between 0 and 10: ";
        cin >> score;
    }   //input checking.

    scores.insert(scores.begin() + index, score);
}

double calcAverage() {
    int total = 0;

    for (int num : scores) {    //adds up all elements of scores
        total += num;
    }
    average = (double) total/scores.size(); //divides total by number of scores
    
    return average
}

int findLowest() {
    //built in function came in handy :)
    int minimum = *std::min_element(scores.begin(), scores.end());
    return minimum;
}

int main() {
    
    for(int i=0; i<5; i++) {
        getScore(i);
    
    }

    int minimum = findLowest();
    scores.erase(find(scores.begin(), scores.end(), minimum));
    
    double average = calcAverage();
    
    cout << "After dropping the lowest score, " << minimum;
    cout << ", the diving average score is " << average << ".\n";
}

//I made some abstractions just to have it cleaner and better.

/**
Enter a diving score: 14
Enter a diving score between 0 and 10: -7
Enter a diving score between 0 and 10: 10
Enter a diving score: 5
Enter a diving score: 8
Enter a diving score: 3
Enter a diving score: 5
After dropping the lowest score, 3, the diving average score is 7.
**/