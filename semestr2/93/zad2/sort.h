#pragma once
/**swapping
 * @param *xp
 * @param *yp
 * */
void swap(int *xp, int *yp);
/**
 * bubble sorting
 * @param tab[] table of doubles to sort
 * @param n number of doubles to sort
 * */
void bubbleSort(double arr[], int n);
/**
 * @param arr[] table of doubles to sort
 * @param low smaller element
 * @param high higher element
 * @return returns i+1*/
double partition (double arr[], int low, int high);
/**
 * @param arr[] table of doubles to sort
 * @param low smaller element
 * @param high higher element*/
void quickSort(double arr[], int low, int high);
/**
 * @param arr[] table of doubles to sort
 * @param l
 * @param m
 * @param r*/
void merge(double arr[], int l, int m, int r);
/**
 * @param arr[] table of doubles to sort
 * @param l
 * @param r*/
void mergeSort(double arr[],int l,int r);
/**
 * @param tab[] table of doubles to print
 * @param n number of doubles to print
 * */
 void printArray(double arr[],int n);