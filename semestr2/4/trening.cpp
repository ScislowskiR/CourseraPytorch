/*
#include<iostream>
using namespace std;
float addFun(float, float);
float subFun(float, float);
float mulFun(float, float);
float divFun(float, float);
int main()
{
    float numOne, numTwo, res;
    int choice;
    do
    {
        cout<<"1. Addition\n";
        cout<<"2. Subtraction\n";
        cout<<"3. Multiplication\n";
        cout<<"4. Division\n";
        cout<<"5. Exit\n\n";
        cout<<"Enter Your Choice(1-5): ";
        cin>>choice;
        if(choice>=1 && choice<=4)
        {
            cout<<"\nEnter any two Numbers: ";
            cin>>numOne>>numTwo;
        }
        switch(choice)
        {
            case 1:
                res = addFun(numOne, numTwo);
                cout<<"\nResult = "<<res;
                break;
            case 2:
                res = subFun(numOne, numTwo);
                cout<<"\nResult = "<<res;
                break;
            case 3:
                res = mulFun(numOne, numTwo);
                cout<<"\nResult = "<<res;
                break;
            case 4:
                res = divFun(numOne, numTwo);
                cout<<"\nResult = "<<res;
                break;
            case 5:
                return 0;
            default:
                cout<<"\nWrong Choice!";
                break;
        }
        cout<<"\n------------------------\n";
    }while(choice!=5);
    cout<<endl;
    return 0;
}
float addFun(float a, float b)
{
    return (a+b);
}
float subFun(float a, float b)
{
    return (a-b);
}
float mulFun(float a, float b)
{
    return (a*b);
}
float divFun(float a, float b)
{
    return (a/b);
}
*/
/*
#include <vector>
#include <string>
#include <sstream>
#include <iostream>
using namespace std;
class Kalkulator{

public:
    float add(float liczba1, float liczba2);
    void quitWithError();
};
float Kalkulator::add(float liczba1, float liczba2) {
    return liczba1 + liczba2;
}
void Kalkulator::quitWithError() {
    cout<<"\rInvalid option"<<endl;
}
void Calculate(){

    float liczba1, liczba2, wynik;
    int opcja;
    Kalkulator kalk;
    //string listLiczba1[]={};
    //string listLiczba2[]={};
    cout<<endl;
    vector<float> listLiczba1 = {};
    int arrSize1 = listLiczba1.size()/sizeof(listLiczba1[0]);
    vector<float> listLiczba2 = {};
    int arrSize2 = listLiczba2.size()/sizeof(listLiczba2[0]);
    int x=0;
    int count=0;
    for (x;true;x++){
        cout<<"1. Dodawanie\n";
        cout<<"5. Wyjscie\n";
        cout<<"Wybierz cyfre(1): \n";
        cin>>opcja;
        if (opcja==1)
        {
            count++;
            cout<<"Count: "<<count<<endl;
            cout<<"\nType 2 numbers: ";
            cin >> liczba1 >> liczba2;
            listLiczba1.push_back(liczba1);
            listLiczba2.push_back(liczba2);
            for (auto i : listLiczba2) {
                if (i != listLiczba2[0]) {
                    return;
                }
            }
            //for (auto i : listLiczba2){cout<<i<<endl;cout<<listLiczba2[count]<<endl;}
        }
        switch (opcja) {
            case 1:
                wynik = kalk.add(liczba1, liczba2);
                cout<<"Wynik: "<<wynik<<endl<<endl;
                break;
            case 2:
                return;
            default:
                kalk.quitWithError();
                cout<<endl;
                break;
        }
    }
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