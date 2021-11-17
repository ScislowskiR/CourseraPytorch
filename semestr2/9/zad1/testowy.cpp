/*
#include <iostream>
#include <valarray>
#include "triangle.h"

using namespace std;

bool isRightTriangle(Point_t points[])
{
    double wynikab= (pow(pow(points[0].x-points[1].x,2)+pow(points[0].y-points[1].y,2),0.5));
    double wynikac= (pow(pow(points[0].x-points[2].x,2)+pow(points[0].y-points[2].y,2),0.5));
    double wynikbc= (pow(pow(points[1].x-points[2].x,2)+pow(points[1].y-points[2].y,2),0.5));
    cout<<wynikab<<endl;
    cout<<wynikac<<endl;
    cout<<wynikbc<<endl;
    //cout<<wynik1r<<endl<<wynik2r<<endl<<wynik3r;
    if(wynikab*wynikab+wynikac*wynikac==wynikbc*wynikbc){
        cout<<"Trojkat jest prostokatny"<<endl<<"ab^2+ac^2=bc^2"<<endl;
        return 1;
    }else if(wynikac*wynikac+wynikbc*wynikbc==wynikab*wynikab){
        cout<<"Trojkat jest prostokatny"<<endl<<"ac^2+bc^2=ab^2"<<endl;
        return 1;
    }else if(wynikac*wynikac+wynikbc*wynikbc==wynikab*wynikab){
        cout<<"Trojkat jest prostokatny"<<endl<<"ac^2+bc^2=ab^2"<<endl;
        return 1;
    }
    else{
        cout<<"Trojkat nie jest prostokatny"<<endl;
        return 0;
    }
}
int main() {
    Point_t points[3];
    */
/*for(int i=0; i<3; i++)
    {
        cout<< "Wprowadz x:";
        cin>> points[i].x;

        cout<< "Wprowadz y:";
        cin>> points[i].y;
    }*//*

    points[0].x=0;
    points[0].y=0;
    points[1].x=0;
    points[1].y=12;
    points[2].x=5;
    points[2].y=0;
    cout<<isRightTriangle(points);
    */
/*if (isRightTriangle(points)==true)
    {
        cout<< "trojkat jest prostokatny";
    }
    else
    {
        cout<< "trojkat nie jest prostokatny";
    }*//*

}*/
/*
#include "triangle.h"


bool isRightTriangle(Point_t points[]){        //funkcja która zwraca false lub true        x1,y1=A x2,y2=B x3,y3=C
    double AB,AC,BC;
    AB= (pow(pow(points->x1-points->x2,2)+pow(points->y1-points->y2,2),0.5));    //||    obliczenie długości boku z pitagorasa na współrzędnych
    AC= (pow(pow(points->x1-points->x3,2)+pow(points->y1-points->y3,2),0.5));    //||    wskaźnik na x1 - wskaźnik na x2 do kwadratu dodać kwadraty na iloczynie y
    BC= (pow(pow(points->x2-points->x3,2)+pow(points->y2-points->y3,2),0.5));    //||     i to wszystko pod pierwiastkiem


    if(AB*AB+AC*AC==BC*BC){        //pitagoras A^2+B^2=c^2
        cout<<"prostokatny"<<endl;
        return 1;
    }else if(AC*AC+BC*BC==AB*AB){        //pitagoras inna kolejność
        cout<<"prostokatny"<<endl;
        return 1;
    }else if(AC*AC+BC*BC==AB*AB){        //pitagoras inna kolejność
        cout<<"prostokatny"<<endl;
        return 1;
    }
    else{                                //jeśli nic z powyższych to brak pitagorasa
        cout<<"nieprostokatny"<<endl;
        return 0;
    }

}
int main(){        //wprowadzanie x1,y1,x2,y2,x3,y3
    double x1,y1,x2,y2,x3,y3;
    cout<<"podaj x1,y1,x2,y2,x3,y3: "<<endl;
    */
/*cin>>x1;
    cin>>y1;
    cin>>x2;
    cin>>y2;
    cin>>x3;
    cin>>y3;*//*

    x1=0;y1=0;x2=0;y2=4;x3=3;y3=0;
    Point_t points[]={x1,y1,x2,y2,x3,y3};        //argumenty(?) funkcji bool
    cout<<isRightTriangle(points);
}*/
/*
#include "triangle.h"
bool isRightTriangle(Point_t points[]){
    double wsp1,wsp2,wsp3;
    wsp1= wynik1r= (pow(pow(points->x1-points->x2,2)+pow(points->y1-points->y2,2),0.5));
    wsp2= (pow(pow(points->x1-points->x3,2)+pow(points->y1-points->y3,2),0.5));
    wsp3= (pow(pow(points->x2-points->x3,2)+pow(points->y2-points->y3,2),0.5));
    return wsp1*wsp1+wsp2*wsp2==wsp3*wsp3||wsp2*wsp2+wsp3*wsp3==wsp1*wsp1||wsp1*wsp1+wsp3*wsp3==wsp2*wsp2;
}
int main(){
    double x1,y1,x2,y2,x3,y3;
    x1=0;x2=0;x3=5;
    y1=0;y2=12;y3=0
    Point_t points[]={a,b,c,x,y,z};
    cout<<isRightTriangle(points);
    return 0;
}
*/
/*
#include <iostream>
#include "triangle.h"

using namespace std;
#include <iostream>
#include "triangle.h"
#include <math.h>

bool isRightTriangle(Point_t points[])
{
    const double xDist_AB = points[1].x - points[0].x;
    const double yDist_AB = points[1].x - points[0].x;
    const double xDist_BC = points[0].x - points[2].x;
    const double yDist_BC = points[0].x - points[2].x;
    const double xDist_CA = points[1].x - points[2].x;
    const double yDist_CA = points[1].x - points[2].x;

    double len_AB = sqrt(xDist_AB * xDist_AB + yDist_AB * yDist_AB);
    double len_BC = sqrt(xDist_BC * xDist_BC + yDist_BC * yDist_BC);
    double len_CA = sqrt(xDist_CA* xDist_CA + yDist_CA * yDist_CA);

    if(len_AB > len_CA && len_AB > len_BC)
    {
        if(round(len_AB * len_AB) == round(len_CA * len_CA) + round(len_BC * len_BC))
            return true;
    }
    else if (len_CA > len_AB && len_CA > len_BC)
    {
        if(round(len_CA * len_CA) == round(len_AB * len_AB) + round(len_BC * len_BC))
            return true;
    }
    else if (len_BC > len_AB && len_BC > len_CA)
    {
        if(round(len_BC * len_BC) == round(len_AB * len_AB) + round(len_CA * len_CA))
            return true;
    }
    std::cout << round(len_CA * len_CA) << std::endl;
    std::cout << round(len_AB * len_AB) << std::endl;
    std::cout << round(len_BC * len_BC) << std::endl;
    return false;

}
int main()
{
    Point_t points[3];
    for (int i=0; i <3; i++)
    {
        cout << "Wpisz x: ";
        cin >> points[i].x;

        cout << "Wpisz y: ";
        cin >> points[i].y;
    }

    if (isRightTriangle(points))
    {
        std::cout << "Trojkat jest prostokatny";
    }
    else
    {
        std::cout << "Trojkat nie jest prostokatny";
    }
}*/
/*
#include "triangle.h"
bool isRightTriangle(Point_t points[])
{
    double ab= (pow(pow(points[0].x-points[1].x,2)+pow(points[0].y-points[1].y,2),0.5));
    double ac= (pow(pow(points[0].x-points[2].x,2)+pow(points[0].y-points[2].y,2),0.5));
    double bc= (pow(pow(points[1].x-points[2].x,2)+pow(points[1].y-points[2].y,2),0.5));
    if(ab*ab+ac*ac==bc*bc){
        return 1;
    }else if(ac*ac+bc*bc==ab*ab){
        return 1;
    }else if(ac*ac+bc*bc==ab*ab){
        return 1;
    }
    else{
        return 0;
    }
}
int main() {
    Point_t points[3];
    points[0].x=0;
    points[0].y=0;
    points[1].x=0;
    points[1].y=12;
    points[2].x=5;
    points[2].y=0;
    cout<<isRightTriangle(points);
}*/
/*
#include <stdbool.h>
#include <iostream>
#include <valarray>
#include <iostream>
using namespace std;
typedef struct baza{
    char imie[10];
    char nazwisko[15];
    int indeks;
    struct{
        float matematyka;
        float fizyka;
    }ocena;
}bazaStudentow;
*/
/*void wyswietlListe(bazaStudentow imie, bazaStudentow nazwisko, bazaStudentow indeks, bazaStudentow ocena, float d) {
    bazaStudentow baaaaaaza;
    for(int i=0;i<baaaaaaza.indeks;i++){
        cout<<baaaaaaza.imie<<"  "<<baaaaaaza.nazwisko<<"  "<<baaaaaaza.indeks<<"  "<<baaaaaaza.ocena.matematyka<<"  "<<baaaaaaza.ocena.fizyka;
    }
}*//*

void wyswietlListe(bazaStudentow wemif[],int ile){

};
int main(){
    bazaStudentow baaaaaaza;
    int liczba_studentow;
    liczba_studentow=3;
    //char listaImie[liczba_studentow];
    //char listaNazwisko[liczba_studentow];
    bazaStudentow * wemif = static_cast<bazaStudentow *>(malloc(sizeof(bazaStudentow)));
    for(int i=0;i<liczba_studentow;i++){
        //cin>>baaaaaaza.imie[i];
        cin >> reinterpret_cast<unsigned char *>((char) baaaaaaza.imie[i]);
        cin>>baaaaaaza.nazwisko[i];
        cin>>baaaaaaza.ocena.matematyka;
        cin>>baaaaaaza.ocena.fizyka;
    }
    //for(int i=0;i<liczba_studentow;i++){}
    cout << "address of int mha: " <<dec << (long)wemif<<endl;
    int indeks[liczba_studentow];
    //wyswietlListe(baaaaaaza.imie, baaaaaaza.nazwisko, baaaaaaza.indeks, baaaaaaza.ocena.matematyka,baaaaaaza.ocena.fizyka);
    wyswietlListe(wemif,liczba_studentow);
    return 0;
}*/
/*
#include "triangle.h"
bool isRightTriangle(Point_t points[]){
    double wynikac,wynikbc,wynikab;
    wynikab= (pow(pow(points->x1-points->x2,2)+pow(points->y1-points->y2,2),0.5));
    wynikac= (pow(pow(points->x1-points->x3,2)+pow(points->y1-points->y3,2),0.5));
    wynikbc= (pow(pow(points->x2-points->x3,2)+pow(points->y2-points->y3,2),0.5));

    if(wynikab*wynikab+wynikac*wynikac==wynikbc*wynikbc){
        cout<<"siema"<<endl;
        return 1;
    }else if(wynikac*wynikac+wynikbc*wynikbc==wynikab*wynikab){
        cout<<"siema"<<endl;
        return 1;
    }else if(wynikac*wynikac+wynikbc*wynikbc==wynikab*wynikab){
        cout<<"siema"<<endl;
        return 1;
    }
    else{
        cout<<"Trojkat nie jest prostokatny"<<endl;
        return 0;
    }
    //return wynikab*wynikab+wynikac*wynikac==wynikbc*wynikbc||wynikac*wynikac+wynikbc*wynikbc==wynikab*wynikab||wynikab*wynikab+wynikbc*wynikbc==wynikac*wynikac;
}
int main(){
    double x1,x2,x3,y1,y2,y3;
    x1=0;x2=0;x3=5;
    y1=0;y2=12;y3=0;
    Point_t points[]={x1,y1,x2,y2,x3,y3};
    cout<<isRightTriangle(points);

}*/
/*
#include "triangle.h"
bool isRightTriangle(Point_t points[])
{
    double ab= (pow(pow(points[0].x-points[1].x,2)+pow(points[0].y-points[1].y,2),0.5));
    double ac= (pow(pow(points[0].x-points[2].x,2)+pow(points[0].y-points[2].y,2),0.5));
    double bc= (pow(pow(points[1].x-points[2].x,2)+pow(points[1].y-points[2].y,2),0.5));
    if(ab*ab+ac*ac==bc*bc){
        return 1;
    }else if(ac*ac+bc*bc==ab*ab){
        return 1;
    }else if(ac*ac+bc*bc==ab*ab){
        return 1;
    }
    else{
        return 0;
    }
}*/