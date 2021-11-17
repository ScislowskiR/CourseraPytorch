/*#pragma once
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;


class Kalkulator{

public:
    int iterGcd(int x, int y);
    int recurGcd(int x, int y);
    void quitLoop();
};*/
#pragma once
#include <iostream>
#include <chrono>
using namespace std;
using namespace std::chrono;


class Kalkulator{

public:
    unsigned long long iterGcd(unsigned long long x, unsigned long long y);
    unsigned long long recurGcd(unsigned long long x, unsigned long long y);
};