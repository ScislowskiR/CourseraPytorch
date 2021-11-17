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
    int opcja;
    cout<<"Wybierz plik przy pomocy cyfry"<<endl;
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
        cout << "Error, nie udalo sie poprawnie zaladowac pliku!" << endl;
    }
    //cout<<endl;
    cout<<"Wybierz literke"<<endl;
    char literka;
    cin>>literka;
    int number=0;
    int numb_char = 0;
    char letter;
    while (!infile.eof()) {
        infile.get(letter);
        cout << letter;
        numb_char++;
        if(letter==literka){
            number++;
        }
    }
    cout<<endl<<"Ta litera wystapila w pliku "<<number<< " razy.";
    cout <<endl<< "The number of characters is: " << numb_char<<"."<< endl;
    infile.close();
    return EXIT_SUCCESS;
}
*/
