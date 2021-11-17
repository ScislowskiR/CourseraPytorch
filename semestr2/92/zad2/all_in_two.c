/*
#include <stdio.h>
#include <stdbool.h>
typedef enum Stan {
    MULT,//wartosci MULT i ADD maszyny stanow
    ADD,
}Stan_t;//wywolujemy tą strukturę za pomocą aliasu Stan_t
int readInt() {
    int liczba;
    scanf("%d",&liczba);//funkcja sluzy do wpisywania integerow
    return liczba;//funkcja zwraca pojedyncze integery
}
int add(int liczba,int liczba2){
    liczba2=liczba2+liczba;
    return liczba2;
}
int multiply(int liczba,int liczba2){
    liczba2=liczba2*liczba;
    return liczba2;
}
unsigned short exec(){
    Stan_t stan = ADD ;//poczatkowa wartosc stanu maszyny to ADD pochodzące ze struktury
    int liczba2=0;//Początkowa wartość wyniku wynosi 0.
    while ( true ) {
        int liczba = readInt();
        if(liczba==0){//jesli wpisana liczba to 0 to kod zostaje zakonczony
            return 0;
        }
        switch ( stan ) {//switch-case   2 opcje:   stan ADD ;stan MULT
            case ADD :
                if ( liczba <0) {
                    liczba2=multiply(liczba,liczba2);
                    //liczba2=liczba*liczba2;
                    printf("addmult");
                    printf("%d",liczba2);
                    stan = MULT;
                }else if(liczba>0){
                    liczba2=add(liczba,liczba2);
                    //liczba2=liczba+liczba2;
                    printf("addadd");
                    printf("%d",liczba2);
                }
                break;
            case MULT :
                if ( liczba >0) {
                    liczba2=add(liczba,liczba2);
                    //liczba2=liczba+liczba2;
                    printf("multadd");
                    printf("%d",liczba2);
                    stan = ADD;
                }else if(liczba<0){
                    liczba2=multiply(liczba,liczba2);
                    //liczba2=liczba*liczba2;
                    printf("multmult");
                    printf("%d",liczba2);
                }
                break;
        }
    }
}
int main(){
    exec();
}
*/
