/*#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;
bool median(const int*tab,unsigned int n,int*buffer) {
    bool result = false;
    //sort(tab, tab + sizeof(tab)/sizeof(int));

    //cout<<((((double)(tab[int(n/2)-1]+tab[int(n/2)])/2)-int((double)(tab[int(n/2)-1]+tab[int(n/2)])/2))>0)<<endl;
    if (tab != nullptr && buffer != nullptr) {
        if (((double) n / 2 - int((double) n / 2) > 0) == 0) {//Czy liczba n jest parzysta
            *buffer = (tab[int(n / 2) - 1] + tab[int(n / 2)]) / 2;//Wzór na mediane  dla n parzystych
            cout<<"\nWzor1";
            if ((0 < (double) (tab[int(n / 2) - 1] + tab[int(n / 2)]) / 2 -int((double) (tab[int(n / 2) - 1] + tab[int(n / 2)]) / 2))) {//Czy mediana zaokrągla wynik?
                result = false;//Jeśli mediana zaokrągla wynik bo np. int(3.5) zwraca nam 3 to w moim kodzie funkcja bool zwraca fałsz
                return result;
            }
        } else if (abs((double) n / 2 - int((double) n / 2)) > 0 != 0) {//Czy liczba n jest nieparzysta
            *buffer = tab[n / 2];//Wzór na mediane dla n nieparzystych
            cout<<"\nWzor2";
        }
        result = true;
    }
    return result;
}
int main(){
    int tablica[]={9,7,7,8,5,7};
    int n=sizeof(tablica)/sizeof(int);
    int temp;
    for(int i=0;i<n;i++)//Szereguję tablicę
    {
        for(int j=i+1;j<n;j++)
        {
            if(tablica[i]>tablica[j])
            {
                temp  =tablica[i];
                tablica[i]=tablica[j];
                tablica[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){cout<<tablica[i]<<" ";}//Print uszeregowana tablica
    int wynik;
    bool warunek=median(tablica,n,&wynik);
    if (warunek)printf("\nKod dziala, mediana wynosi: %d\n",wynik);
    else printf("\nWystapil blad, mediana jako integer zaokragla prawdziwy wynik!");

    return 0;
}*/
/*#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;
bool median(const int*tab,unsigned int n,double*buffer) {
    bool result = false;
    //sort(tab, tab + sizeof(tab)/sizeof(int));
    //cout<<((((double)(tab[int(n/2)-1]+tab[int(n/2)])/2)-int((double)(tab[int(n/2)-1]+tab[int(n/2)])/2))>0)<<endl;
    if (tab != nullptr && buffer != nullptr) {
        if (((double) n / 2 - int((double) n / 2) > 0) == 0) {//Czy liczba n jest parzysta
            //jesli n/2 daje miejsca dziesiętne to int(n/2) redukuje te miejsca dziesiętne i wtedy odejmowanie daje liczbę 0.5 i wtedy liczba n jest nieparzysta
            *buffer = (double)(tab[int(n / 2) - 1] + tab[int(n / 2)]) / 2;//Wzór na mediane dla n parzystych
            //w tablicy 8- elementowej mediane liczymy z 4element+5element/2
            //tablica zaczyna się od 0 więc bierzemy 3 i 4 aby wyrazić te indeksy
            cout<<"\nWzor1";
        } else if (abs((double) n / 2 - int((double) n / 2)) > 0 != 0) {//Czy liczba n jest nieparzysta
            //7-elem /2 ==3.5   ale int(7-elem/2) ==3
            //abs() to wartosc absolutna
            *buffer = (double)tab[n / 2];//Wzór na mediane dla n nieparzystych
            cout<<"\nWzor2";
        }
        result = true;
    }
    return result;
}
int main(){
    int tablica[]={9,8,7,8,5,7};
    int n=sizeof(tablica)/sizeof(int);//n integerow /sizeof(int) int=4bajty
    sort(tablica, tablica+n);
    for(int i=0;i<n;i++){cout<<tablica[i]<<" ";}//Print kazdy wyraz tablicy o i-indeksie +spacja
    double wynik;
    bool warunek=median(tablica,n,&wynik);//wynik to *buffer
    if (warunek)printf("\nKod dziala, mediana wynosi: %f\n",wynik); //if(true)
    else printf("\nWystapil blad, mediana jako integer zaokragla prawdziwy wynik!");
    cout<< sizeof(tablica);
    return 0;
}*/
    //sort(tab, tab+n);
    /*for(int i=0;i<n;i++)
    {
        if((tab[i]>='a'&&tab[i]<='z') || (tab[i]>='A'&&tab[i]<='Z')){
            result=false;
            return result;
        }
        //if (isalpha(tab[i])){result=false;return result;}
    }*/
/*#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;
bool median(const int*tab,unsigned int n,int*buffer) {
    bool result;
    if (tab!=nullptr && buffer != nullptr){
        if(((((double)(tab[int(n/2)-1]+tab[int(n/2)])/2)-int((double)(tab[int(n/2)-1]+tab[int(n/2)])/2))>0)==0) {
            //if(((((double)(tab[int(n/2)-1]+tab[int(n/2)])/2)-int((double)(tab[int(n/2)-1]+tab[int(n/2)])/2))>0)){
            if ((abs(((tab[int(n / 2) - 1] + tab[int(n / 2)]) / 2) / 2)-int(abs((tab[int(n / 2) - 1] + tab[int(n / 2)])))) > 0) {
                result = false;
                return result;
            }
            cout<<endl<<"wzor1";
            *buffer=(tab[int(n/2)-1]+tab[int(n/2)])/2;
        }
        else if(((((double)(tab[int(n/2)-1]+tab[int(n/2)])/2)-int((double)(tab[int(n/2)-1]+tab[int(n/2)])/2))>0)){
            *buffer=tab[n/2];
            cout<<endl<<"wzor2";
        }
        result=true;
        return result;
    }
}
int main(){
    int tab[]={9,7,7,6,5,4,3,5};
    int value;
    bool result;
    int n=sizeof(tab)/sizeof(int);
    sort(tab, tab+n);
    for(int i=0;i<sizeof(tab)/sizeof(int);i++){cout<<tab[i];}
    result=median(tab,sizeof(tab)/sizeof(int),&value);
    if (result)printf("\nKod dziala, mediana wynosi: %d\n",value);
    else printf("\nWystapil blad, mediana jako integer zaokragla prawdziwy wynik!");

    return 0;
}*/
/*
#include <cstdio>
#include <cmath>//do abs()
#include <iostream>
#include <algorithm>//do sort()

using namespace std;
bool median(const int*tab,unsigned int n,int*buffer)
{
    //sort(tab, tab+10);
    bool result;
    for(int i=0;i<n;i++)
    {
        if((tab[i]>='a'&&tab[i]<='z') || (tab[i]>='A'&&tab[i]<='Z')){
            result=false;
            return result;
        }
        //if (isalpha(tab[i])){result=false;return result;}
    }
    int tablica[n];
    for(int i=0;i<n;i++)
    {
        tablica[i]=tab[i];
    }
    sort(tablica, tablica+n);
    if (tablica!=nullptr && buffer != nullptr){
        if((abs((double)n/2-int((double)n/2))>0)==0){//sprawdza czy n jest liczbą
// parzystą jeśli (double)n/2 daje liczbę z przecinkiem to int((double)n/2) zaokrągla
// ją w dół i odejmowanie (double)n/2-int((double)n/2)>0) daje więcej niż zero i
//(lewa)==0 to nie jest prawda (liczba nie jest parzysta) i kod nie zostaje wykonany i idziemy do else if
            *buffer=(tablica[int(n/2)-1]+tablica[int(n/2)])/2;
            cout<<endl<<"wzor1"<<endl;
        }
        else if(abs((double)n/2-int((double)n/2))>0!=0){//sprawdza czy n jest liczbą nieparzystą
//jeśli tutaj zamieniłem warunek                 ^^^^^^^^^ jeśli warunek po lewej dawał wcześniej jeden to teraz (warunek>0)!=0
            *buffer=tablica[n/2];
            cout<<endl<<"wzor2"<<endl;
        }
        for(int i=0;i<sizeof(tablica)/sizeof(int);i++){cout<<tablica[i];}

        result=true;
        return result;
    }
    //return result;
}
int main(){
    int tab[]={4,6,2,4,6,7};
    int value;
    bool result;
    for(int i=0;i<sizeof(tab)/sizeof(int);i++){cout<<tab[i];}
    //cout<<endl<<endl;
    //median(tab,sizeof(tab)/sizeof(int),&value);
    result=median(tab,sizeof(tab)/sizeof(int),&value);
    if (result)printf("\nKod dziala, mediana wynosi: %d\n",value);
    else printf("\nWystapil blad, podane zawiera litery!");
    return 0;
}*/
/*
#include <iostream>
using namespace std;
struct StudentGroup{
    unsigned short year;
    char*surnames[12];
    unsigned long indices[12];
    unsigned long semester;
};
int main(){
    cout<<sizeof(StudentGroup);
}*/
/*
#include <cstdio>
#include <cmath>
#include <iostream>
#include <algorithm>

using namespace std;
bool median(const int*tab,unsigned int n,float*buffer) {
    bool result = false;
    if (tab != nullptr && buffer != nullptr) {
        if (((float) n / 2 - int( n / 2) > 0) == 0) {//Czy liczba n jest parzysta
            *buffer = ((float)tab[n/2] + tab[(n/2)-1])/2;
            cout<<"\nWzor1";

        } else if (abs((float) n / 2 - int((float) n / 2)) > 0 != 0) {//Czy liczba n jest nieparzysta
            *buffer = (float)tab[n/2];
            cout<<"\nWzor2";
        }
        result = true;
    }
    return result;
}
int main(){
    int tablica[]={9,7,7,5,7,4,3,5};
    int n=sizeof(tablica)/sizeof(int);
    int temp;
    for(int i=0;i<n;i++)//Szereguję tablicę
    {
        for(int j=i+1;j<n;j++)
        {
            if(tablica[i]>tablica[j])
            {
                temp  =tablica[i];
                tablica[i]=tablica[j];
                tablica[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++){cout<<tablica[i]<<" ";}//Print uszeregowana tablica
    float wynik;
    bool warunek=median(tablica,n,&wynik);
    if (warunek)printf("\nKod dziala, mediana wynosi: %d\n",wynik);
    else printf("\nWystapil blad, mediana jako integer zaokragla prawdziwy wynik!");

    return 0;
}*/