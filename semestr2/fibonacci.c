//
// Created by scisl on 14.11.2021.
//

#include <stdio.h>
int fibonacci(int x){
    if(x>1){return fibonacci(x-2)+fibonacci(x-1);}
    return x;
}
int main(){
    int x=9;
    //printf("%d",fibonacci(x));

    return 0;
}