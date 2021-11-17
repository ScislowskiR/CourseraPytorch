/*
#include "list.h"
static Node_t * createNode(int head) {
    Node_t * node = (Node_t *) malloc(sizeof(node));
    node->head = head;
    node->tail = NULL;
    return node;
}
void push(Node_t * root, int value) {
    Node_t * currentNode = root;
    if (currentNode != NULL) {
        while (currentNode->tail != NULL)
            currentNode = currentNode->tail;
        currentNode->tail = createNode(value);
    }
}
void printList(Node_t * root) {
    Node_t * currentNode = root;
    while (currentNode != NULL) {
        printf("%d ", currentNode->head);
        currentNode = currentNode->tail;
    }
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
    return nodes;
}
*/
