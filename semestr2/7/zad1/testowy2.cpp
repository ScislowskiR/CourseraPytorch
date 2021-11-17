/*
#include <iostream>
#include <cstring>

using namespace std;
int main(){
    FILE * fPtr = fopen("input.txt", "w+");
    if (fPtr==NULL){
        cout<<"Failed to open the file.\n";
        exit(EXIT_FAILURE);
    }
    const char * text = "Ala ma kota ";
    const unsigned int textLength = strlen ( text ) ;

    // Zapisanie danych do pliku
    if ( fprintf ( fPtr , text ) != textLength )
        printf (" Failed to write to the file \n") ;

    // Wroc do poczatku pliku
    rewind ( fPtr ) ;

    // Bufor na dane odczytane (+1 na ’\0 ’)
    char buffer [ textLength + 1];
    // Odczyt zapisanych danych
    if ( fscanf ( fPtr , "%s", buffer ) != 1)
        printf (" Failed to read from the file \n");
    else
        printf (" Data read from file : %s\n", buffer ) ;
    // Zamkniecie pliku
    if ( fclose ( fPtr ) != 0) {
        printf (" Failed to close the file \n") ;
        exit ( EXIT_FAILURE ) ;
    }
    return EXIT_SUCCESS ;
    //int n= sizeof(tablica)/ sizeof(tablica[0]);for (int i=0;i<n;i++){cout<<tablica[i];}
}*/
/*
#include <stdio.h>
#include <string.h>
#include <fstream>
using namespace std;
int main()
{
    char tablica[20];
    for (int i=0;i<20;i++){
        printf("%c",tablica[i]);
        string exception;
        exception=tablica[i];
        if(exception=="q"||exception=="Q"){
            printf("Przerwales petle");
            break;
        }
    }
    int arraySize = *(&tablica + 1) - tablica;
    try {
        printf("\nPrzepisywanie zawartosci do pliku...");
        ofstream fw("D:\\Users\\scisl\\CLionProjects\\clion\\7\\zad1\\text.txt", ofstream::out);
        if (fw.is_open())
        {
            for (int i = 0; i < arraySize; i++) {
                fw << tablica[i] << "\n";
                if(tablica[i]=='q'||tablica[i]=='Q'){
                    break;
                }
            }
            fw.close();
        }
        else printf("Nie mozna otworzyc pliku");
    }
    catch (const char* plik) {
        fprintf(stderr,plik);
    }
    printf("\nDziala!");
    getchar();
}*/
