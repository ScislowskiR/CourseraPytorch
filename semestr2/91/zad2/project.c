/*
#include <stdbool.h>
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
typedef bool (*Predicate)(int, int);
bool isEqual(int lhs, int rhs);
bool isGreater(int lhs, int rhs);
bool isLess(int lhs, int rhs);
typedef struct Node {
    int head;
    struct Node * tail;
} Node_t;
Node_t * createList(unsigned int nodeCount, ...);
void printList(Node_t * root);
void push(Node_t * root, int value);
void removeIf(Node_t ** root, Predicate predicate, int toCompare);
bool isEqual(int lhs, int rhs){
    return lhs == rhs;}
bool isLess(int lhs, int rhs){
    return lhs < rhs;}
bool isGreater(int lhs, int rhs){//How to implement this<<<<<<<<<<<<<<<======================
    return lhs > rhs;}
static Node_t * createNode(int head) {
    //unsigned int size= sizeof(node);
    Node_t * node = (Node_t *) malloc((unsigned int) sizeof(node));
    node->head = head;
    node->tail = 0;
    return node;
}
void push(Node_t * root, int value) {
    Node_t * currentNode = root;
    if (currentNode != 0) {
        while (currentNode->tail != 0)
            currentNode = currentNode->tail;
        currentNode->tail = createNode(value);
    }
}
void printList(Node_t * root) {
    Node_t * currentNode = root;
    printf("\n");
    while (currentNode != 0) {
        printf("%d ", currentNode->head);
        currentNode = currentNode->tail;
    }
    printf("\n");
}
Node_t*createList(unsigned int nodeCount,...) {
    va_list numbers;
    va_start(numbers, nodeCount);
    Node_t *nodes;
    for (unsigned int i = 0; i < nodeCount; ++i) {
        if (i != 0) {
            push(nodes, va_arg(numbers, int));
        } else {
            nodes = createNode(va_arg(numbers, int));
        }
    }
    va_end(numbers);
    return nodes;}
void removeIf(Node_t ** root, Predicate predicate, int toCompare) {
    Node_t * nodes = *root;
    Node_t * previousNode = 0;
    if(nodes!=0){
        while (nodes != 0) {
            if (predicate(nodes->head, toCompare)) {
                if (previousNode != 0) {
                    previousNode->tail = nodes->tail;
                } else {
                    *root = nodes->tail;
                }
            }
            previousNode = nodes;
            nodes = nodes->tail;
        }
    }
}
int main() {
    const unsigned int nodeCount = 5;
    Node_t * root = createList(nodeCount, 2, 4, 6, 8, 10);
    printf("Created new list:       ");
    printList(root);
    printf("Removed middle element:  ");
    removeIf(&root, isEqual, 6);
    printList(root);
    printf("Removed last element:   ");
    removeIf(&root, isGreater, 9);
    printList(root);
    removeIf(&root, isGreater, 7);
    printList(root);
    printf("Removed first number<8: ");
    removeIf(&root, isLess, 8);
    printList(root);
    return 0;
}
*/
