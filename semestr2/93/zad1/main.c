/*
#include<stdio.h>
#include<stdlib.h>
#include "utils.h"
double add ( double x , double y ) {
    return x + y ;
}
double subtract ( double x , double y ) {
    return x - y ;
}
double multiply ( double x , double y ) {
    return x * y ;
}
double divide ( double x , double y ,IllegalOperationHandler illegalOperationHandler ){
    if ( y == 0)
        return illegalOperationHandler () ;
    else
        return x / y ;
}
double modulus ( double x ) {
    return x < 0 ? -x : x;
}
int iterGcd(int x, int y) {
    int liczba1,liczba2,gcd;
    if(x <= y){
        liczba1=y;
        liczba2=x;
    }
    else{
        liczba1=x;
        liczba2=y;
    }
    while(liczba2!= 0){
        gcd=liczba1%liczba2;
        liczba1=liczba2;
        liczba2=gcd;
    }
    return liczba1;
}
int lcm(int x,int y){
    int liczba1,liczba2,gcd,lcm;
    lcm=((x*y)/ iterGcd(x,y));
    return lcm;
}
double onDivisionByZero () {
    printf (" Illegal operation \n") ;
    return 0.0;
}
int main () {

    int x,y;
    x=91;
    y=287;
    printf("GCD = %d\n",iterGcd(x,y));
    int(*p_addition)(int,int)=lcm;
    int func_lcm=(*p_addition)(x,y);
    printf("LCM = %d",func_lcm);
    return EXIT_SUCCESS ;
}*/
