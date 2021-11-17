/*#include <iostream>

#include "calculator.h"

namespace {

	void quitWithError() {
		std::cout << "Invalid operation performed" << std::endl;
		exit(EXIT_FAILURE);
	}

}*/
// anonymous namespace
// Place your definitions here
/*#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int num1, num2;
    char opr;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;
    cout << endl;
    cout << "Enter operator: + (addition), - (subtraction)," << " * (multiplication), / (division): ";
    cin >> opr;
    cout << endl;
    cout << num1 << " " << opr << " " << num2 << " = ";
    switch (opr){
        case '+':
            cout << num1 + num2 << endl;
            break;
        case'-':
            cout << num1 - num2 << endl;
            break;
        case'*':
            cout << num1 * num2 << endl;
            break;
        case'/':
            if (num2 != 0)
                cout << num1 / num2 << endl;
            else
                cout << "ERROR \nCannot divide by zero" << endl;
            break;
        default:
            cout << "Illegal operation" << endl;
    }
    return 0;
}*/

//#define STRING(num) #num
//int num=10;

//string num_str(STRING(num));
//num_str.empty() ? cout << "empty\n" :
//cout << num_str+'3' << endl;

/*
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
