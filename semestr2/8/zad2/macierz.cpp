/*
#include <iostream>
using namespace std;
int main(){
    int i,j,m,n;
    cout << "Enter the number of rows in the matrix \n";
    cin >> m;
    cout << "Enter the number of columns in the matrix \n";
    cin >> n;
    // Alokowanie pamięci dla macierzy
    double **a = new double* [m];
    for(i = 0; i < m; i++)
        a[i] = new double[n];

    // Wprowadzanie macierzy
    cout << "Enter the matrix\n";
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            cin >> a[i][j];

    // Printowanie macierzy
    cout<<endl<<"Oto nasza macierz o wymiarach "<<m<<" na "<<n;
    for(int i=0;i<m;i++){
        cout<<endl<<"| ";
        for(j=0;j<n;j++) {
            cout << a[i][j];
        }
        cout<<"  |";
    }
    int zmienna=900;
    int & refValue=zmienna;
    delete [] a;
    return 0;
}
*/
