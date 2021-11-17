/*
#include <stdio.h>
#include <stdbool.h>
typedef enum Stan {
    MULT,
    ADD,
}Stan_t;
int readInt() {
    int liczba;
    scanf("%d",&liczba);
    return liczba;
}
int multiply(int liczba,int liczba2){
    liczba2=liczba2*liczba;
    return liczba2;
}
int add(int liczba,int liczba2){
    liczba2=liczba2+liczba;
    return liczba2;
}
unsigned short exec(){
    Stan_t stan = ADD;
    int liczba2=0;//Początkowa wartość wyniku wynosi 0.
    int (*p_read)(int)=readInt;//Function pointer p_read to wskaźnik na funkcję readInt
    int(*p_addition)(int,int)=add;
    int(*p_multiply)(int,int)=multiply;
    while ( true ) {
        int liczba = (*p_read)(0);//Wywołanie readInt () za pomocą p_read
        if(liczba==0){
            return 0;
        }
        switch ( stan ) {
            case ADD :
                if ( liczba <0) {
                    //liczba2=multiply(liczba,liczba2);
                    //liczba2=liczba*liczba2;
                    liczba2=(*p_multiply)(liczba,liczba2);
                    printf("ADDMULT");
                    printf("%d",liczba2);
                    stan = MULT;
                }else if(liczba>0){
                    //liczba2=add(liczba,liczba2);
                    //liczba2=liczba+liczba2;
                    liczba2=(*p_addition)(liczba,liczba2);
                    printf("ADDADD");
                    printf("%d",liczba2);
                }
                break;
            case MULT :
                if ( liczba >0) {
                    //liczba2=add(liczba,liczba2);
                    //liczba2=liczba+liczba2;
                    liczba2=(*p_addition)(liczba,liczba2);
                    printf("MULTADD");
                    printf("%d",liczba2);
                    stan = ADD;
                }else if(liczba<0){
                    //liczba2=multiply(liczba,liczba2);
                    //liczba2=liczba*liczba2;
                    liczba2=(*p_multiply)(liczba,liczba2);
                    printf("MULTMULT");
                    printf("%d",liczba2);
                }
                break;
        }
    }
}
//void wrapper(void (*fun)()){
//    fun();}
int main(){
    //wrapper(exec);
    void(*pointer)(void)=&exec;
    (*pointer)();
}
*/
