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
    int compilationLength=0;
    for (int i=0;i<sizeof(pathsList)/ sizeof(pathsList[0]);i++){
        infile.open(pathsList[i]);
        if (infile.fail()) {
            cout << " Error " << endl;
        }
        char letter;
        int number=0;
        while (!infile.eof()&&number<20) {
            infile.get(letter);
            outfile<<letter;
            number++;
            compilationLength++;
        }
        infile.close();
    }
    cout<<"Ilosc znakow w pliku compilation.txt: "<<compilationLength<<endl<<"Zadanie zostalo pomyslnie wykonane!";
    return EXIT_SUCCESS;
}
*/
