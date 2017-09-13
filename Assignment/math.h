/*
 * math.h
 *
 *  Created on: Sep 6, 2017
 *  Last Updated: Sep 13, 2017
 *      Author: Damon Boorstein
 */

/* Function: int math(int, int, char);
 *
 * Valid inputs: all valid int, '+', '-', '*', '/', '%'
 *
 * Description: Accepts two integer arguments as coefficients and one char-type operator.
 *  Acceptable operators include '+', '-', '*', '/', and '%'. Performs integer math.
*/

#ifndef MATH_H_
#define MATH_H_

int math(int num1, int num2, char Operator);

#endif /* MATH_H_ */
