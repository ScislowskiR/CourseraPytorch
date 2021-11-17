/*
#include <iostream>
using namespace std;
int main(){
    char tablica[20];
    string exception;
    for (int i=0;i<20;i++){
        cin>>tablica[i];
        exception=tablica[i];
        if(exception=="q"||exception=="Q"){
            break;
        }
    }
    int n= sizeof(tablica)/ sizeof(tablica[0]);for (int i=0;i<n;i++){cout<<tablica[i];}

}
*/

/*#include <iostream>
//#include <conio.h>
#include <fstream>
using namespace std;

int main() {
    // declaring sales array in C
    //FILE * fPtr = fopen("input.txt", "w+");if (fPtr==NULL){cout<<"Failed to open the file.\n";exit(EXIT_FAILURE);}
    ofstream klasa;
    klasa.open("text.txt");
    klasa << "Writing this to a file.\n";
    klasa.close();
    char sales[20];
    int i; // Variable for access sales array index
    cout << "Read User Input into Array In C++ Example Program\n";

    for (i = 0; i < 20; i++) {
        // Reading User Input sales value Based on index
        //cout << "Enter Value for Position " << i << " : ";
        //cout << i << " ";
        cin >> sales[i];
        cout<<" ";
    }
    cout<<endl;
    cout << "\n User Input Values\n";
    for (i = 0; i < 20; i++) {
        // Accessing sales value using for loop
        cout << sales[i] << " ";
        //cout << "Position : " << i << " , Sales Value : " << sales[i] << " ";
        if (sales[i]=='q'||sales[i]=='Q'){
            break;
        }
    }
    //getch();
    return 0;
}*/
/*
#include <iostream>
#include <string>
#include <fstream>
using namespace std;
int main()
{
    char tablica[20];
    for (int i=0;i<20;i++){
        cin>>tablica[i];
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
        cerr << endl << plik;
    }
    printf("\nDziala!");
    getchar();
}*/
