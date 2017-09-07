/*
* math.cpp
*
*  Created on: Sep 6, 2017
* 	Last Edited: Sept 6, 2017
*      Author: Damon Boorstein
*/

/* Your assignment is to take the math function and implement at least the following functions:
* + Add (num1 + num2)
* - Subtract (num1 - num2)
* * Multiply (num1 * num2)
* / Divide (num1 / num2)
* % Modulus (num1 % num2)
*/

#include MATH_H_
int math(int num1, int num2, char Operator) {
	int res = 0;

	case(Operator) {
		'+': res = num1 + num2;
		'-': res = num1 - num2;
		'*': res = num1 * num2;
		'/': res = num1 / num2;
		'%': res = num1 % num2;
	}

	return res;
}
