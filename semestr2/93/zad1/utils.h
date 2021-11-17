//
// Created by scisl on 22.05.2021.
//

#ifndef CLION_UTILS_H
#define CLION_UTILS_H

#endif //CLION_UTILS_H
#ifndef CLION_MATH_FUNCTIONS_H
#define CLION_MATH_FUNCTIONS_H

#endif //CLION_MATH_FUNCTIONS_H
# pragma once
/**
* adding two double - precision floating - point numbers
* @param x first addent
* @param y second addent
* @return sum of addents x and y
*/
double add ( double x , double y ) ;
/**
* subtracting two double - precision floating - point
numbers
* @param x minuend
* @param y subtrahend
* @return difference of minuend and subtrahend
*/
double subtract ( double x , double y ) ;
/**
* multiplying two double - precision floating - point
numbers
* @param x first factor
* @param y second factor
* @return multiplication of factors x and y
*/
double multiply ( double x , double y ) ;
// Function pointer type of the illegal division operation handler
typedef double (* IllegalOperationHandler ) () ;
/**
* dividing two double - precision floating - point numbers
* @param x dividend
* @param y divisor
* @param illegalOperationHandler handler to be called on division by zero
* @return value returned by the
illegalOperationHandler invocation in case of
division by zero or quotient of divident and
divisor otherwise
* The function invocation result is undefined if illegalOperationHandler is NULL
*/
double divide ( double x , double y ,IllegalOperationHandler illegalOperationHandler ) ;
/**
* modulus of a double - precision floating - point number
* @param x number for which the modulus is to be calculated
* @return modulus of x
*/
double modulus ( double x ) ;
/**
 * greatest common divisor
 * @param x first variable
 * @param y second variable
 * @return the greatest common divisor
 * */
int gcd ( int x, int y );
/**
 * lowest common multiplier
 * @param x number1
 * @param y number2
  * @return the lowest common multiplier*/
int lcm(int x,int y);