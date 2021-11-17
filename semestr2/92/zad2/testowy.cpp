/*
//#include "statemachine.h"
//#include "reader.h"
#include <stdbool.h>
#include <stdio.h>
#include <conio.h>
#include <cstdlib>

char output[50];
char echoio[20];
char writeio[20];
int ie=0;
int iw=0;
int i=0;
char input;
char mode='e';
bool exitt=1;
void exec()
{
    if(input=='e')      //funkcja warunkowa w celu wykrycia e, w, q
    {
        mode='e';
    }
    else if(input == 'w')
    {
        mode='w';
    }
    else if(input == 'q')
    {
        exitt=0;
    }
    else
    {
        if(mode=='e')       //jesli w funkcji wystepuje e inkrementujemy zmienna ie w tabelii echoio
        {
            echoio[ie]=input;
            ie++;

        }
        else if(mode=='w')  //jesli w kodzie wystepuje w inkrementujemy zmienna iw w tabelii writeio
        {
            writeio[iw]=input;
            iw++;

        }
    }



}

int main()              //wprowadzenie funkcji g³ównej
{
    printf("Standardowe wyjscie:  %s", echoio);         //wydrukowanie na ekran echoio
    printf("\n\nWpisany ciag znakow:  %s", output);     //wydrukowanie na ekran echoio

    while(true)
    {
        input=getch();          //inkrementacja funkcji i
        output[i]=input;
        i++;
        exec();
        if(exitt!=1)
        {
            return 0;
        }
        system("cls");
        printf("Standardowe wyjscie:  %s", echoio);
        printf("\n\nWpisany ciag znakow:  %s", output);
        FILE * fPtr = fopen("output.txt", "w");         //utworzenie pliku do zapisu
        fprintf (fPtr, "%s", echoio);                   //zapisanie do pliku wartosci zapisanych w maszynie
        fclose (fPtr);                                  //zamkniecie pliku
    }

    return 0;
}*/
