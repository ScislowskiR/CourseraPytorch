/*
#include <iostream>


void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void bbl_sort( int *tab, int size)
{
    for(int i = 0;i<size;i++)
    {

        int swapped = 0;
        for(int j = 0;j < size -i -1; j++)
        {
            if(tab[j]>tab[j+1])
            {
                swap(tab[j],tab[j+1]);
                swapped = 1;
            }
        }
        if(!swapped)
        {
            break;
        }
    }
}

void show_tab(int *tab,int size)
{
    for(int i = 0;i<size;i++)
    {
        std::cout<<tab[i]<<" ";
    }
    std::cout<<std::endl;
}

bool mediana( int *tab,int size, double * buffer)
{
    bbl_sort(tab,size);
    if (size == 0) {
        return false;
    }

    if(size % 2 ==0)
    {
        double result,result1,mediana;
        result = tab[size /2-1];
        result1 = tab[(size/2)];
        mediana = (result + result1)/2;
        *buffer = mediana;
    }
    else
    {
        int result1 = tab[(size/2)];
        *buffer = result1;
    }

    return true;
}

int main()
{
    const int size = 4;
    double value;
    int tab[size] = {0,6,4,5};     // {1,3,7,4,2,6,5};

    if(mediana(tab,size,&value))
    {
        show_tab(tab,size);
        mediana(tab,size,&value);

        std::cout<<value<<std::endl;
        std::cout<<"SUCCESS"<<std::endl;
    }else std::cout<<"ERROR"<<std::endl;
}*/