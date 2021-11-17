/*

#include "multiply.h"

float multiply(float zmienna1,float zmienna2){
    cout<< zmienna1 << " * " << zmienna2 << endl;
    return zmienna1*zmienna2;
}
int multiply ( int zmienna1 , int zmienna2 ) {
    cout<<zmienna1 << " * " << zmienna2 << endl;
    return zmienna1 * zmienna2;
}
int main () {
    cout<<"Output : "<<multiply(float (1.7),float (2.0))<<endl ;
    cout<<"Output : "<<multiply(1.7,2)<<endl ;
    return 0;
}
*/
/*
#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int tablica[20];
int main()
{
    // losowanie wartosci elementow tablicy
    for (int i =0; i<20;i++)
        tablica[i] = rand()%100;
    int n = sizeof(tablica) / sizeof(tablica[0]);
    // drukowanie tablicy
    cout << "Zwykla tablica: ";
    for (int i = 0; i < n; i++)
        cout << tablica[i] << " ";
    // Odwrocenie tablicy
    reverse(tablica, tablica + n);
    //drukowanie odwroconej tablicy
    cout << "\nOdwrocona tablica: ";
    for (int i = 0; i < n; i++)
        cout << tablica[i] << " ";
    return 0;
}
*/

/*vector<int>tablica;
    int dlugosc=10;
    string text;
    for(int i=0;i<dlugosc;i++){
        int a=random(0,9);
        tablica.push_back(a);
        text+=to_string(a);
    }
    cout<<endl<<text<<endl;
    for(int element:tablica){
        cout<<element;
    }*/
/*
#include "multiply.h"
int main(){

    int tablica[20]={};
    vector<int>array;
    for (int i=0;i<10;i++) {
        array.push_back(random(0, 9));
    }
    printTab(tablica, sizeof(tablica)/ sizeof(int));
    printTab(tablica,sizeof(tablica)/ sizeof(int));

    //printTab(array, sizeof(array)/ sizeof(int));
    //printTab(array,sizeof(array)/ sizeof(int));
    return 0;
}
*/
// Driver code
/*
#include "multiply.h"
void shuffle_array(int arr[], int n)
{

    // To obtain a time-based seed
    unsigned seed = 0;

    // Shuffling our array
    shuffle(arr, arr + n,
            default_random_engine(seed));

    // Printing our array
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
    cout << endl;
}


int main()
{

    int a[] = { 10, 20, 30, 40 };

    int n = sizeof(a) / sizeof(a[0]);

    shuffle_array(a, n);

    return 0;
}*/
