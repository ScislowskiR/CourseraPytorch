/*
#include<stdio.h>
#include<stdlib.h>
#include"math_functions.h"
// IllegalOperationHandler
double onDivisionByZero () {
    printf (" Illegal operation \n") ;
    return 0.0;
}
int main () {
    //double divident , divisor ;
    //printf ("Put divident : ") ;
    //scanf ("%lf", & divident ) ;
    //printf ("Put divisor : ") ;
    //scanf ("%lf", & divisor ) ;
    // Uzycie funkcji divide () z biblioteki libmath
    //printf (" Quotient equals : %lf\n", divide ( divident ,divisor , onDivisionByZero ) );
    int x,y;
    x=91;
    y=287;
    printf("GCD = %d\n",iterGcd(x,y));
    //int lcm=x*y/ iterGcd(x,y);
    int(*p_addition)(int,int)=lcm;
    int func_lcm=(*p_addition)(x,y);
    //lcm(91,287);
    //printf("LCM = %d\n",lcm);
    printf("%d",func_lcm);
    return EXIT_SUCCESS ;
}*/
