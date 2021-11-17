/*
//
// Created by scisl on 22.05.2021.
//

#include "math_functions.h"
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
int gcd(int x, int y) {
    int number1,number2,gcd_number;
    if(x <= y){
        number1=y;
        number2=x;
    }
    else{
        number1=x;
        number2=y;
    }
    while(number2!= 0){
        gcd_number=number1%number2;
        number1=number2;
        number2=gcd_number;
    }
    return number1;
}
int lcm(int x,int y){
    int lcm;
*/
/*if(x <= y){
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
    }*//*


    //lcm=x*y/ iterGcd(x,y);
    lcm = (x * y) / gcd(x, y);
    //printf("%d\n",x);
    //printf("%d\n",y);
    //printf("%d\n",iterGcd(x,y));
    //printf("%d\n",lcm);
    //printf("%d\n",((x*y)/ iterGcd(x,y)));
    return lcm;
}
*/
