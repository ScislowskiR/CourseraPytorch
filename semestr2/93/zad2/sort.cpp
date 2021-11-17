/*#include <cstdio>
#include "sort.h"
#include <typeinfo>
#include <iostream>
#include <chrono>
void swap(double *xp, double *yp)
{
    double temp = *xp;
    *xp = *yp;
    *yp = temp;
}

// An optimized version of Bubble Sort
void bubbleSort(double arr[], int n)
{
    int i, j;
    bool swapped;
    for (i = 0; i < n-1; i++)
    {
        swapped = false;
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                swap(&arr[j], &arr[j+1]);
                swapped = true;
            }
        }

        // IF no two elements were swapped by inner loop, then break
        if (!swapped)
            break;
    }
}
double partition (double arr[], int low, int high)
{
    int pivot = arr[high];    // pivot
    int i = (low - 1);  // Index of smaller element

    for (int j = low; j <= high- 1; j++)
    {
        // If current element is smaller than or
        // equal to pivot
        if (arr[j] <= pivot)
        {
            i++;    // increment index of smaller element
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return (i + 1);
}
void quickSort(double arr[], int low, int high)
{
    if (low < high)
    {
        double pi = partition(arr, low, high);

        // Separately sort elements before
        // partition and after partition
        quickSort(arr, low, pi - 1);
        quickSort(arr, pi + 1, high);
    }
}
void merge(double arr[], int l, int m, int r)
{
    int n1 = m - l + 1;
    int n2 = r - m;

    // Create temp arrays
    int L[n1], R[n2];

    // Copy data to temp arrays L[] and R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[m + 1 + j];

    // Merge the temp arrays back into arr[l..r]

    // Initial index of first subarray
    int i = 0;

    // Initial index of second subarray
    int j = 0;

    // Initial index of merged subarray
    int k = l;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        }
        else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }

    // Copy the remaining elements of
    // L[], if there are any
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Copy the remaining elements of
    // R[], if there are any
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// l is for left index and r is
// right index of the sub-array
// of arr to be sorted
void mergeSort(double arr[],int l,int r){
    if(l>=r){
        return;//returns recursively
    }
    int m =l+ (r-l)/2;
    mergeSort(arr,l,m);
    mergeSort(arr,m+1,r);
    merge(arr,l,m,r);
}

void printArray(double arr[], int n)
{
    int i;
    for (i=0; i < n; i++)
        printf("%.1f ", arr[i]);
    printf("n");
}
int main()
{
    auto begin = std::chrono::high_resolution_clock::now();
    int length=3000;
    double arrBubble[length];
    double arrQuick[length];
    double arrMerge[length];
    for(int i=0;i<length;i++){
        arrBubble[i]=i+0.5;
    }
    for(int i=0;i<length;i++){
        arrQuick[i]=i+1.5;
    }
    for(int i=0;i<length;i++){
        arrMerge[i]=i+7;
    }
    //double arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n1 = sizeof(arrBubble)/sizeof(arrBubble[0]);
    int n2 = sizeof(arrQuick)/sizeof(arrBubble[0]);
    int n3 = sizeof(arrMerge)/sizeof(arrBubble[0]);
    bubbleSort(arrBubble, n1);
    quickSort(arrQuick, 0, n2-1);
    mergeSort(arrMerge, 0, n3 - 1);
    printf("Sorted array: \n");
    printArray(arrBubble,10);//n
    printf("\n");
    printArray(arrQuick,10);//n
    printf("\n");
    printArray(arrMerge,10);//n
    printf("\n");
    //printf("\n%f\n",arr[0]);
    //xstd::cout<<typeid(arr[0]).name();
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = std::chrono::duration_cast<std::chrono::nanoseconds>(end - begin);
    printf("Time measured: %.3f seconds.\n", elapsed.count() * 1e-9);
    return 0;
}*/
/*echo %time%

sort.cpp libsort.lib

echo %time%

echo %time%

sort.cpp libsort.dll

echo %time%

*/