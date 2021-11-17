/*
#include "calculator.h"
float Kalkulator::add(float x, float y) {
    return x + y;
}
float Kalkulator::substract(float x, float y) {
    return x-y;
}
float Kalkulator::multiply(float x, float y) {
    return x*y;
}
float Kalkulator::divide(float x, float y) {
    return x / y;
}
float Kalkulator::Calculate(float x,float y,char  operations[],  unsigned int size) {
    int opcja;
    x=1;
    y=2;
    float wynik=0;
    char *x1=operations;
    Kalkulator kalk;
    for(int i=0;i<size;++i){
        int a=x1[i];
        switch (a) {
            case '1':
                wynik+= kalk.add(x, y);
                cout << "Wynik: " << wynik << endl;
                break;
            case '2':
                wynik+= kalk.substract(x, y);
                cout << "Wynik: " << wynik << endl;
                break;
            case '3':
                wynik+= kalk.multiply(x, y);
                cout << "Wynik: " << wynik << endl;
                break;
            case '4':
                wynik+= kalk.divide(x, y);
                cout << "Wynik: " << wynik << endl;
                break;
            case '5':
                cout << "Ostateczny wynik: " << wynik << endl;
                return 0;
        }
    }
}
int main(){
    cout<<"Wybierz opcje";
    char tab [] = "1234325";

    cout<<endl;
    for ( int i=0;i< sizeof(tab);i++){
        cout<<tab[i];
    }
    cout<<endl;
    float x=1,y=5;
    int size= sizeof(tab);
    Kalkulator kalk;
    kalk.Calculate(x, y, tab, size);
    return EXIT_SUCCESS;
}
*/
