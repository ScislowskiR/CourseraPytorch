/*
#include "fib.h"


int main(){
    //printf("%llu",x);
    //printf("\n%llu\n",y);
    unsigned long long g;
    unsigned long long nRecur;
    cin>>g;
    nRecur=g-1;
    unsigned long long nIter;
    cin>>nIter;
    auto start = high_resolution_clock::now();
    if(g==1&&nIter==1){
        printf("1\n1");
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<seconds>(stop - start);
        cout << "\nCzas trwania procesu: " << duration.count() << endl;
    }
    else if(g==0||nIter==0){
        printf("0\n0\n");
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<seconds>(stop - start);
        cout << "Czas trwania procesu: " << duration.count()<<" sekund." << endl;
    }
    else {
        printf("%llu\n", recurFibonacci(nRecur));
        iterFibonacci(nIter);
        auto stop = high_resolution_clock::now();
        auto duration = duration_cast<seconds>(stop - start);
        cout << "Czas trwania procesu: " << duration.count() << endl;
    }
}
*/
/*
#include "fib.h"


int main(){
    //printf("%llu",x);
    //printf("\n%llu\n",y);
    unsigned long long g;
    unsigned long long nRecur;
    cin>>g;
    if (g<0){
        cout<<"liczba jest mniejsza od zera"<<endl;
        return 0;
    }
    nRecur=g-1;
    unsigned long long nIter;
    cin>>nIter;
    if (nIter<0){
        cout<<"liczba jest mniejsza od zera"<<endl;
        return 0;
    }
    int a;
    int b;
    auto start = high_resolution_clock::now();
    if(g==0){
        a=0;
        cout<<a<<endl;
    } else if (g==1){
        a=1;
        cout<<a<<endl;
    }else{
        printf("%llu\n", recurFibonacci(nRecur));
    }
    if (nIter==0){
        b=0;
        cout<<b<<endl;
    }else if (nIter==0){
        b=1;
        cout<<b<<endl;
    }
    else{
        iterFibonacci(nIter);
    }
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<seconds>(stop - start);
    cout << "Czas trwania procesu to " << duration.count()<<" sekund."<< endl;
}
*/
