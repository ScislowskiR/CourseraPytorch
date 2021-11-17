/*
#include <stdio.h>
void exec();
char readChar() {
    char character;
    while ((character = getchar()) == '\n' || character == EOF) {}
    return character;
}
int main() {
    exec();
    return 0;
}*/
/*
#include <stdio.h>
typedef enum Stan {
    WRITE,
    ECHO,
}Stan_t;
void echo(int liczba){
    printf("%c",liczba);
}
void write(int liczba,FILE*plik){
    putc(liczba,plik);
}
char readChar() {
    char litera;
    //scanf("%c",&litera);
    litera=getc(stdin);
    return litera;
}
unsigned short exec(){
    Stan_t obecnyStan = ECHO ;
    FILE *plik = fopen("D:\\Users\\scisl\\CLionProjects\\clion\\91\\zad1\\text.txt", "w+");
    //char comment[1000];
    //char c;
    while ( 1 ) {
        char litera = readChar();
        //char nextBit = getc(stdin);
        if(litera=='q'){
            //fclose(fp);
            fclose(plik);
            printf("Po odebraniu znaku 'q' program konczy dzialanie.");
            return 0;
        }
        switch ( obecnyStan ) {
            case ECHO :
                if ( litera =='w') {
                    obecnyStan = WRITE;
                }
                if(obecnyStan==WRITE){
                    //putc(litera, plik);
                    write(litera,plik);
                }
                else if(obecnyStan==ECHO){
                    echo(litera);
                }
                break;
            case WRITE :
                if ( litera =='e') {
                    obecnyStan = ECHO;
                }
                if(obecnyStan==WRITE){
                    //putc(litera, plik);
                    write(litera,plik);
                }
                else if(obecnyStan==ECHO){
                    echo(litera);
                }
                break;
        }
    }
}
int main(){
    exec();
}
*/
