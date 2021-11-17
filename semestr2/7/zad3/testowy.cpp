/*
#include <fstream>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int main() {
    ifstream infile;
    ofstream outfile;
    int opcja;
    cin >> opcja;
    string sciezka;
    if (opcja == 1) { sciezka = "D:\\Users\\scisl\\CLionProjects\\clion\\7\\zad2\\CPlusPlusSampleFile.txt"; }
    else if (opcja == 2) { sciezka = "D:\\Users\\scisl\\CLionProjects\\clion\\6\\zad1\\CPlusPlusSampleFile.txt"; }
    else if (opcja == 3) { sciezka = "D:\\Users\\scisl\\CLionProjects\\clion\\6\\zad2\\CPlusPlusSampleFile.txt"; }
    else if (opcja == 4) { sciezka = "D:\\Users\\scisl\\CLionProjects\\clion\\6\\zad3\\CPlusPlusSampleFile.txt"; }
    else if (opcja == 5) { sciezka = "D:\\Users\\scisl\\CLionProjects\\clion\\5\\zad1\\CPlusPlusSampleFile.txt"; }
    else if (opcja == 6) { sciezka = "D:\\Users\\scisl\\CLionProjects\\clion\\5\\zad2\\CPlusPlusSampleFile.txt"; }
    else if (opcja == 7) { sciezka = "D:\\Users\\scisl\\CLionProjects\\clion\\5\\zad3\\CPlusPlusSampleFile.txt"; }
    else if (opcja == 8) { sciezka = "D:\\Users\\scisl\\CLionProjects\\clion\\4\\CPlusPlusSampleFile.txt"; }
    else if (opcja == 9) { sciezka = "D:\\Users\\scisl\\CLionProjects\\clion\\7\\zad3\\CPlusPlusSampleFile.txt"; }
    else if (opcja == 0) { cin >> sciezka; }
    infile.open(sciezka);
    if (infile.fail()) {
        cout << " Error " << endl;
    }
    //cout<<endl;
    int number=0;
    int numb_char = 0;
    char letter;
    char big_string[]="";
    while (!infile.eof()) {
        infile.get(letter);
        cout << letter;
        numb_char++;
        outfile << letter;
    }
    cout<<endl<<number;
    cout <<endl<< "The number of characters is :" << numb_char << endl;
    infile.close();
    return EXIT_SUCCESS;
}*/
/*
#include <fstream>
#include <algorithm>
#include <iterator>
#include <iostream>
#include <string>
#include <cstdlib>
#include <cstring>
using namespace std;
int main() {
    ifstream infile;
    ofstream outfile;
    string pathsList[9]={"D:\\Users\\scisl\\CLionProjects\\clion\\7\\zad2\\CPlusPlusSampleFile.txt",
                         "D:\\Users\\scisl\\CLionProjects\\clion\\6\\zad1\\CPlusPlusSampleFile.txt",
                         "D:\\Users\\scisl\\CLionProjects\\clion\\6\\zad2\\CPlusPlusSampleFile.txt",
                         "D:\\Users\\scisl\\CLionProjects\\clion\\6\\zad3\\CPlusPlusSampleFile.txt",
                         "D:\\Users\\scisl\\CLionProjects\\clion\\5\\zad1\\CPlusPlusSampleFile.txt",
                         "D:\\Users\\scisl\\CLionProjects\\clion\\5\\zad2\\CPlusPlusSampleFile.txt",
                         "D:\\Users\\scisl\\CLionProjects\\clion\\5\\zad3\\CPlusPlusSampleFile.txt",
                         "D:\\Users\\scisl\\CLionProjects\\clion\\4\\CPlusPlusSampleFile.txt",
                         "D:\\Users\\scisl\\CLionProjects\\clion\\7\\zad3\\CPlusPlusSampleFile.txt"
    };

    string kompilacja="D:\\Users\\scisl\\CLionProjects\\clion\\7\\zad3\\compilation.txt";
    cout<<"Teraz skopiuje zawartosc 9 plikow do pliku compilation txt."<<endl;
    outfile.open(kompilacja);
    for (int i=0;i<sizeof(pathsList)/ sizeof(pathsList[0]);i++){
        infile.open(pathsList[i]);
        if (infile.fail()) {
            cout << " Error " << endl;
        }
        char letter;
        while (!infile.eof()) {
            infile.get(letter);
            outfile<<letter;
        }
        infile.close();
    }
    cout<<"Zadanie zostalo pomyslnie wykonane!";
    return EXIT_SUCCESS;
}
*/