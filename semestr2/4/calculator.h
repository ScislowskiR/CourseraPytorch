/*
#pragma once

#include <limits>

enum class Operation : unsigned int {
	ADD = 0,
	SUBTRACT,
	MULTIPLY,
	DIVIDE,
	INVALID = std::numeric_limits<unsigned int>::max()
};

float add(float x, float y);
float subtract(float x, float y);
float multiply(float x, float y);
float divide(float x, float y);

float calculate(Operation operation, float x, float y);
*/
//Zamieściłem takie samo rozwiązanie w zadaniu 2 i 3
#pragma once
#include <vector>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;
class Kalkulator{

public:
    float add(float liczba1, float liczba2);
    float substract(float liczba1, float liczba2);
    float multiply(float liczba1, float liczba2);
    float divide(float liczba1, float liczba2);
    void quitWithError();
};
//michal.stepniak@pwr.edu.pl