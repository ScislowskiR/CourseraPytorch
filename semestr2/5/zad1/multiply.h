/*//
// Created by scisl on 3/25/2021.
//
#pragma once
#include <iostream>
#include <chrono>
#include <bits/stdc++.h>
#include <algorithm>
#include <ctime>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;
using namespace std::chrono;
int multiply (int initializer1, int initializer2);

int random(int min, int max) //range : [min, max]
{
    static bool first = true;
    if (first)
    {
        srand( time(NULL) ); //seeding for the first time only!
        first = false;
    }
    return min + rand() % (( max + 1 ) - min);
}

void printTab(int * tab, unsigned int size)
{
    for (unsigned int i=0;i<size;++i){
        cout<<tab[i]<<" ";
    }
}
void reverseTab(int * tab, unsigned int size){
    for (unsigned int i=0;i<size;++i){
        cout<<tab[i]<<" ";
    }
}*/
/*if ( psize == sizeof(char) )
    { char* pchar; pchar=(char*)data; ++(*pchar); }
    else if (psize == sizeof(int) )
    { int* pint; pint=(int*)data; ++(*pint); }*/
/*void increment_all (int* start, int* stop)
{
    int * current = start;
    while (current != stop) {
        ++(*current);
        ++current;
    }
}*/
/*
void print_all (const int* start, const int* stop)
{
    while (start != stop) {
        cout << *start << '\n';
        ++start;
    }
}*/
