//
// Created by scisl on 3/25/2021.
//
#ifndef CLION_FIB_H
#define CLION_FIB_H
#endif //CLION_FIB_H


#pragma once
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;

unsigned long long recurFibonacci( unsigned long long n){
    if (n <= 2)
        return n;
    else
        return recurFibonacci(n - 2) + recurFibonacci(n - 1);
}
unsigned long long iterFibonacci(unsigned long long n){
    unsigned long long x = 0, y = 1, z;
    for (unsigned long long i = 0; i < n; i++) {
        //cout << x << " ";
        z = x + y;
        x = y;
        y = z;
    }
    cout<<x<<endl;
}
