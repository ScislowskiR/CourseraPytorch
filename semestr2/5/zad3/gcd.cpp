/*
#include "gcd.h"
int Kalkulator::recurGcd(int x, int y){if (y == 0)
        return x;

    return recurGcd(y, x % y);
}

int Kalkulator::iterGcd(int x, int y) {
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
void Kalkulator::quitLoop() {
    cout<<"Zamykam program!";
}
void Oblicz(){

    int x,y,gcd,option,numBefore1,numBefore2;
    x=91;
    y=287;
    Kalkulator kalk;
    // Swapping variables n1 and n2 if n2 is greater than n1.
    gcd=kalk.iterGcd(x,y);
    cout << "HCF = " << gcd<<endl;
    cout<<"GCD("<< x <<", "<< y <<") = "<< kalk.recurGcd(x, y)<<endl;
    do {
        cout<<"1. to opcja rekurencyjna.\n";
        cout<<"2. to opcja iteracyjna.\n";
        cout<<"3. zamyka program\n";
        cin>>option;
        switch (option) {
            case 1:
                cout << "Wybrales opcje rekurencyjna!";
                break;
            case 2:
                cout << "Wybrales opcje iteracyjna!";
                break;
            case 3:
                kalk.quitLoop();
                return;
            default:
                cout << "Wybrales zla opcje!";
                break;
        }
        if (option>=1&&option<=2)
        {
            cout<<"\nPodaj 2 liczby ";
            cin >> x >> y;
            if (x==0||y==0){
                cout<<"Nie dzielimy przez zero!";
                return;
            }
            else if (x%y==0&&y%x==0){
                cout<<"Brak wspolnego dzielnika!";
                return;
            }
            //else if (x<0||y<0){cout<<"Program nie obsluguje liczb ujemnych!";}
            //if (x == numBefore1 && y && numBefore2) {cout<<"Taka sama sekwencja liczb, zamykam kalkulator!";return;}
            else {
                numBefore1 = x;
                numBefore2 = y;
            }
        }
        auto start = high_resolution_clock::now();
        switch (option) {
            case 1:
                gcd=kalk.recurGcd(x,y);
                cout<<gcd<<endl;
                break;
            case 2:
                gcd=kalk.iterGcd(x,y);
                cout<<gcd<<endl;
                break;
            case 3:
                kalk.quitLoop();
                return;
            default:
                cout<<endl;
        }
        cout<<endl;
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<seconds>(stop - start);
        cout << "Czas trwania procesu to " << duration.count()<<" sekund."<< endl<<endl;
    }
    while (option!=3);
    kalk.quitLoop();
}
int main () {
    Oblicz();
    return 0;
}
*/
/*
#include "gcd.h"
unsigned long long Kalkulator::recurGcd(unsigned long long x, unsigned long long y){if (y == 0)
        return x;

    return recurGcd(y, x % y);
}

unsigned long long Kalkulator::iterGcd(unsigned long long x, unsigned long long y) {
    unsigned long long liczba1,liczba2,gcd;
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
void Oblicz(){
    unsigned long long x,y,gcd,option;
    x=91;
    y=287;
    Kalkulator kalk;
    cout << "HCF = " << kalk.iterGcd(x,y)<<endl;
    cout<<"GCD("<< x <<", "<< y <<") = "<< kalk.recurGcd(x, y)<<endl;
            cout<<"\nPodaj 2 liczby ";
            cin >> x >> y;
    if (x==0||y==0){
        cout<<"Nie dzielimy przez zero!";
        return;
    }
    else if (x%y==0&&y%x==0){
        cout<<"Brak wspolnego dzielnika!";
        return;
    }
                gcd=kalk.recurGcd(x,y);
                cout<<gcd<<endl;
                gcd=kalk.iterGcd(x,y);
                cout<<gcd<<endl;
}
int main () {
    Oblicz();
    return 0;
}
*/