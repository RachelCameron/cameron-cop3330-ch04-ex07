/*
 *  UCF COP3330 Fall 2021 Assignment 5 Solution
 *  Copyright 2021 Rachel Cameron
 */

#include "header.h"

double inputConverter(string input){ 

    if (input.compare("zero") == 0)
        return 0;

    else if (input.compare("one") == 0)
        return 1;

    else if (input.compare("two") == 0)
        return 2;

    else if (input.compare("three") == 0)
        return 3;

    else if (input.compare("four") == 0)
        return 4;

    else if (input.compare("five") == 0)
        return 5;

    else if (input.compare("six") == 0)
        return 6;

    else if (input.compare("seven") == 0)
        return 7;

    else if (input.compare("eight") == 0)
        return 8;

    else if (input.compare("nine") == 0)
        return 9;

    else 
        return stoi(input);
        
}

int main() {
    
    double input1;
    double input2;
    double answer;
    string input01;
    string input02;
    string operation;

    cout << "Please enter two single-digit numbers as digits or spelled out.\nEXAMPLE: 1 2 [OR] one two\n";
    cin >> input01 >> input02;
    cout << "Please enter your operator.\nEXAMPLE: + [OR] - [OR] / [OR] *\n";
    cin >> operation;

    input1 = inputConverter(input01);
    input2 = inputConverter(input02);

    if (operation == "+") {
        answer = input1 + input2;
        cout << "The sum of " << input1 << " and " << input2 << " is " << answer << "\n";
    }

    else if (operation == "-") {
        answer = input1 - input2;
        cout << "The difference of " << input1 << " and " << input2 << " is " << answer << "\n";
    }

    else if (operation == "/") {
        answer = input1 / input2;
        cout << "The quotient of " << input1 << " and " << input2 << " is " << answer << "\n";
    }

    else if (operation == "*") {
        answer = input1 * input2;
        cout << "The product of " << input1 << " and " << input2 << " is " << answer << "\n";
    }

    else {
    cout << "ERROR: Invalid entry detected. Please check your input and try again.\n";
    }

}