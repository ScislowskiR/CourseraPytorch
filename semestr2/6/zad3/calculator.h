//
// Created by scisl on 4/4/2021.
//

#ifndef CLION_CALCULATOR_H
#define CLION_CALCULATOR_H

#endif //CLION_CALCULATOR_H
#pragma once
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class Kalkulator{
public:
    float add(float x, float y);
    float substract(float x, float y);
    float multiply(float x, float y);
    float divide(float x, float y);
    float Calculate(float x, float y, char  operations[],  unsigned int size);

};
