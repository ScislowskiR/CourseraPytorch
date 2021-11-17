/*
#include "list.h"
#include "predicate.h"

bool isLess (int x , int y ) {
    return x < y ;
    }
bool isGreater ( int x , int y ) {
    return x > y ;
    }
void swap (int * x , int * y ) {
    int tmp = * x ;
    * x = * y ;
    * y = tmp ;
    }
void printTab ( const int * tab , unsigned int tabSize ){
    if ( tab != NULL ) {
        for ( unsigned int i = 0; i < tabSize ; ++ i )
            printf("%d",tab[i]);
    }
    printf("\n");
}
void bubbleSort ( int * tab , unsigned int n , bool (*comparator ) (int , int ) ){
    if ( tab != NULL && comparator != NULL ) {
        for (unsigned int i = 0; i < n - 1; ++i) {
            for (unsigned int j = 0; j < n - i - 1; ++j) {
                // Wywolanie funkcji porownujacej
                if (comparator(tab[j], tab[j + 1])) {
                    swap(tab + j, tab + j + 1);
                }
            }
        }
    }
}
int main () {
    const unsigned int tabSize = 10;
    int tab [ 10 ] = {4 , -7 , 1 , 0 , 2 , 1 , 8 , -3 ,-2 , 5};
    printTab(tab,tabSize);
    // Sortowanie w kolejnosci malejacej
    bubbleSort ( tab , tabSize , isLess ) ;
    printTab ( tab , tabSize ) ;
    // Sortowanie w kolejnosci rosnacej
    bubbleSort ( tab , tabSize , isGreater ) ;
    printTab ( tab , tabSize ) ;
    return 0;
}
*/
