/*
//
// Created by scisl on 09.05.2021.
//

#include "list.h"
#include "comparators.h"
#include "predicate.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
bool isLess(int lhs, int rhs){
    return lhs < rhs;
}
bool isEqual(int lhs, int rhs){
    return lhs == rhs;
}
bool isGreater(int lhs, int rhs){
    return lhs > rhs;
}

int main() {
    // Create list
    const unsigned int nodeCount = 5;
    Node_t * root = createList(nodeCount, 2, 4, 6, 8, 10);
    // Print created list
    printf("\nCreated new list:       ");
    printList(root);
    // Remove first element
    printf("\nRemoved first element:  ");
    removeIf(&root, isEqual, 2);
    printList(root);
    // Remove last element
    printf("\nRemoved last element:   ");
    removeIf(&root, isGreater, 9);
    printList(root);
    // Remove first element less than 8
    printf("\nRemoved first number<8: ");
    removeIf(&root, isLess, 8);
    printList(root);
    return 0;
}
*/
