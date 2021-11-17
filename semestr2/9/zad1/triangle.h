#ifndef CLION_TRIANGLE_H
#define CLION_TRIANGLE_H

#endif //CLION_TRIANGLE_H
#pragma once
#include <stdbool.h>
#include <iostream>
#include <cmath>
using namespace std;
typedef struct Point {//struct ma 6 elementów
    double pointx1,pointy1,pointx2,pointy2,pointx3,pointy3;
} Point_t;
bool isRightTriangle(Point_t points[]);
/*
#pragma once
#include <stdbool.h>	//biblioteka do bool
#include <iostream>
#include <cmath>	//biblioteka do pow
using namespace std;
typedef struct Point {		//deklaracja struktury
    double x,y;
} Point_t;
bool isRightTriangle(Point_t points[]);		//deklaracja funkcji
*/