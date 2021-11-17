/*

#include <vector>
#include <string>
#include <iostream>
using namespace std;

class Calculator{

public:
    float add(float number1, float number2);
    void quitWithError();
};
float Calculator::add(float number1, float number2) {
    return number1 + number2;
}
void Calculator::quitWithError() {
    cout<<"\rChoose another option"<<endl;
}
void Calculate(){

    float number1, number2, score, numBefore1, numBefore2;
    int option;
    Calculator kalk;
    do{
        cin>>option;
        if (option==1)
        {
            cout<<"\nInput 2 numbers: ";
            cin >> number1 >> number2;
            if (number1 == numBefore1 && number2 == numBefore2) {
                return;
            } else {
                numBefore1 = number1;
                numBefore2 = number2;
            }
        }
        switch (option) {
            case 1:
                score = kalk.add(number1, number2);
                cout<<"Output: "<<score<<endl<<endl;
                break;
            case 2:
                break;
            default:
                kalk.quitWithError();
                cout<<endl;
                break;
        }
    } while (option!=2);
    cout<<endl;
}
int main(){
    Calculate();
    return EXIT_SUCCESS;
}*/
/*
#include <vector>
#include <string>
#include <iostream>
using namespace std;
#include "calculator.h"
float Kalkulator::add(float liczba1, float liczba2) {
    return liczba1 + liczba2;
}
float Kalkulator::substract(float liczba1, float liczba2) {
    return liczba1-liczba2;
}
float Kalkulator::multiply(float liczba1, float liczba2) {
    return liczba1*liczba2;
}
float Kalkulator::divide(float liczba1, float liczba2) {
    return liczba1 / liczba2;
}
void Kalkulator::quitWithError() {
    cout<<"\rChoose another option"<<endl;
}
void Calculate(){

    float liczba1, liczba2, wynik, numBefore1, numBefore2;
    int opcja;
    Kalkulator kalk;
    do{
        cout<<"1. Dodawanie\n";
        cout<<"2. Odejmowanie\n";
        cout<<"3. Mnozenie\n";
        cout<<"4. Dzielenie\n";
        cout<<"5. Wyjscie\n\n";
        cout<<"Wybierz cyfre(1-5): ";
        cin>>opcja;
        if (opcja>=1&&opcja<=4)
        {
            cout<<"\nPodaj 2 liczby ";
            cin >> liczba1 >> liczba2;
            if (liczba2==0&&opcja==4){
                cout<<"Nie dzielimy przez 0!";
                return;
            }
            if (liczba1 == numBefore1 && liczba2 && numBefore2) {
                cout<<"Taka sama sekwencja liczb, zamykam kalkulator!";
                return;
            } else {
                numBefore1 = liczba1;
                numBefore2 = liczba2;
            }
        }
        switch (opcja) {
            case 1:
                wynik = kalk.add(liczba1, liczba2);
                cout<<"Output: "<<wynik<<endl<<endl;
                break;
            case 2:
                wynik = kalk.substract(liczba1, liczba2);
                cout<<"Wynik: "<<wynik<<endl<<endl;
                break;
            case 3:
                wynik = kalk.multiply(liczba1, liczba2);
                cout<<"Wynik: "<<wynik<<endl<<endl;
                break;
            case 4:
                wynik = kalk.divide(liczba1, liczba2);
                cout<<"Wynik: "<<wynik<<endl<<endl;
                break;
            case 5:
                break;
            default:
                kalk.quitWithError();
                cout<<endl;
                break;
        }
    } while (opcja!=5);
    cout<<"Zamykam kalkulator!";
    cout<<endl;
}
int main(){
    Calculate();
    return EXIT_SUCCESS;
}
*/
