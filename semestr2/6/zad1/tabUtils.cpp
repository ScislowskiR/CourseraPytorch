/*

#include "tabUtils.h"

int main() {
    char x=0x16;
    int variable=0x29A;
    unsigned short z = 0x7D ;
    int*ptr=&variable;
    cout<<variable<<endl;
    cout<<*ptr<<endl;
    *ptr=2;
    cout<<sizeof(x)<<" "<<x<<endl;
    cout<<sizeof(&variable)<<" "<<variable<<endl;
    cout<<sizeof(z)<<" "<<z<<endl;
    cout<<variable<<endl;
    cout<<sizeof(*ptr)<<" "<<ptr<<endl;
    cout<<&variable<<endl;
    cout<<sizeof(ptr)<<" "<<ptr<<endl;
    cout<<sizeof(&ptr)<<" "<<ptr<<endl;
    const unsigned int tabSize=3;
    double matrix[tabSize][tabSize]={
            { 3.38 , -7.11 , 2.1 },
            { -4.5 , 9.25 , -3.3 },
            { 0.0 , -0.5 , 3.34 }
    };*//*

*/
/*
#include "tabUtils.h"
int main()
{
    //25 + (rand() % ( 63 - 25 + 1 ) );
    printTab(wsk,14);
    cout<<endl;
    reverseTab(wsk,14);//&tablica[3]
    cout<<*wsk<<endl;
    cout<<wsk<<endl;
    return 0;
}*//*

#include "tabUtils.h"
int random(int min, int max) //range : [min, max]
{
    static bool first = true;
    if (first)
    {
        srand( time(NULL) ); //seeding for the first time only!
        first = false;
    }
    return min + rand() % (( max + 1 ) - min);
}
void printTab(int * tab, unsigned int size) {
    cout<<"This is my array:"<<endl;
    for (unsigned int i = 0; i < size; ++i) {
        cout << tab[i] << " ";
    }
    cout<<endl;
}
void reverseTab(int * tab, unsigned int size) {
    cout<<"This is a reverse array:"<<endl;
    for (int i=size-1; i>=0; i--) {
        cout << tab[i] << " ";
    }
    cout<<endl;
}
int main(){
    //works
    int array[20];
    for (int i =0; i<20;i++)
        array[i] = rand()%10;
    reverseTab(array, sizeof(array)/sizeof(int));
    printTab(array, sizeof(array)/sizeof(int));
    //printTab(array, sizeof(array)/sizeof(int));
    //reverseTab(array, sizeof(array)/sizeof(int));
    return 0;
}
*/
