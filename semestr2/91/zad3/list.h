//
// Created by scisl on 09.05.2021.
//

#ifndef CLION_LIST_H
#define CLION_LIST_H

#endif //CLION_LIST_H
#pragma once

#include "predicate.h"

typedef struct Node {
    int head;
    struct Node * tail;
} Node_t;

Node_t * createList(unsigned int nodeCount, ...);
void printList(Node_t * root);
void push(Node_t * root, int value);
void removeIf(Node_t ** root, Predicate predicate, int toCompare);
