/*#include "calculator.h"
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
    return liczba1/liczba2;
}
void Kalkulator::quitWithError() {
    cout<<"\rNiepasujaca cyfra"<<endl;
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
        cout<<"2. Odejmowanie\n";
        cout<<"3. Mnozenie\n";
        cout<<"4. Dzielenie\n";
        cout<<"5. Wyjscie\n";
        cout<<"Wybierz cyfre(1-5): \n";
        cin>>opcja;
        if (opcja>=1&&opcja<=4)
        {
            count++;
            //cout<<"Count: "<<count<<endl;
            cout<<"\nWpisz 2 liczby: ";
            cin >> liczba1 >> liczba2;
            listLiczba1.push_back(liczba1);
            listLiczba2.push_back(liczba2);
            //for (auto i : listLiczba1){cout<<i<<endl;}
            //for (auto i : listLiczba2){cout<<i<<endl;}
        }
        switch (opcja) {
            case 1:
                wynik = kalk.add(liczba1, liczba2);
                cout<<"Wynik: "<<wynik<<endl<<endl;
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
                kalk.quitWithError();
                cout<<endl;
                return;
            default:
                break;
        }
    }
}
int main(){
    Calculate();
    return EXIT_SUCCESS;
}*/
//listLiczba1->push_back(liczba1);
//listLiczba2->push_back(liczba2);
//cout<<listLiczba1<<listLiczba2;
//count++;
//cout<<count<<endl;
//listLiczba1.push_back(liczba1);
//listLiczba2.push_back(liczba2);
/*
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
            if (liczba1 == numBefore1 && liczba2 && numBefore2) {
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
