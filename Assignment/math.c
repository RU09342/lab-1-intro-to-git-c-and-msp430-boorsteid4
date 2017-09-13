/*
* math.cpp
*
*  Created on: Sep. 6, 2017
*   Last Edited: Sep. 13, 2017
*      Author: Damon Boorstein
*/

#include "stdafx.h"
#include "math.h" // include math header file

int math(int num1, int num2, char Operator) {
    int res = 0; // result

    switch (Operator)   // switches between different operators
    {
    case '+':
        res = num1 + num2;
        break;
    case '-':
        res = num1 - num2;
        break;
    case '*':
        res = num1 * num2;
        break;
    case '/':
        res = num1 / num2;
        break;
    case '%':
        res = num1 % num2;
        break;
    default:    // default case for invalid operator input
        break;
    }

    return res;
}
