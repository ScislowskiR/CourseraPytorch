/*
#include "arrayUtils.h"
using namespace std;
#include <iostream>
#include <vector>
#include <algorithm>
char * resizeArray(char * array, unsigned int newSize)
{
    char *stack=new char[newSize];
    if(stack==NULL){return NULL;}
    for(int i=0;i<newSize-4;i++)
    {
        stack[i]=array[i];
    }
    return stack;
}
int main()
{
    int i=1;
    char *tablica=new char[5];
    cin >> tablica[0]>>tablica[1];
    while(tablica[i-1]!=tablica[i])
    {
        i++;
        cin>>tablica[i];
        if(i%5==0)
        {
            char* tablica=resizeArray(tablica, (unsigned int)i+5);
            if(tablica==NULL){cout<<"nullptr";return 0;}
            delete tablica;
            tablica=tablica;
        }
    }
    for(int i=0;tablica[i]!=NULL;i++)
    {
        cout<<tablica[i]<<"  ";
    }
    return 0;
}*/
