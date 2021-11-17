/*#include "triangle.h"
bool isRightTriangle(Point_t points[]){
    double ab,ac,bc;//deklaracja długości boków
    //inicjalizacja długości boków
    ab= (pow(((*points).pointx1-(*points).pointx2)*((*points).pointx1-(*points).pointx2)+((*points).pointy1-(*points).pointy2)*((*points).pointy1-(*points).pointy2),0.5));
    ac= (pow(((*points).pointx1-(*points).pointx3)*((*points).pointx1-(*points).pointx3)+((*points).pointy1-(*points).pointy3)*((*points).pointy1-(*points).pointy3),0.5));
    bc= (pow(((*points).pointx2-(*points).pointx3)*((*points).pointx2-(*points).pointx3)+((*points).pointy2-(*points).pointy3)*((*points).pointy2-(*points).pointy3),0.5));
    if(bc*bc==ab*ab+ac*ac){
        cout<<"Triangle is rectangular"<<endl;
        return 1;
    }else if(ab*ab==ac*ac+bc*bc){
        cout<<"Triangle is rectangular"<<endl;
        return 1;
    }else if(ac*ac==bc*bc+ab*ab){
        cout<<"Triangle is rectangular"<<endl;
        return 1;
    }
    else{
        cout<<"Triangle is not rectangular"<<endl;
        return 0;
    }
}
int main(){
    double x1,x2,x3,y1,y2,y3;//deklaracja punktów x,y na układzie współrzędnych
    x1=0;x2=0;x3=4;//inicjalizacja
    y1=0;y2=3;y3=0;
    Point_t points[]={x1,y1,x2,y2,x3,y3};//tworzę wskaźnik Point_t
    cout<<isRightTriangle(points);
}*/
/*
#include "triangle.h"
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
