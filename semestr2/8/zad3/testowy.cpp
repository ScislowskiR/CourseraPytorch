/*
#include <assert.h>
// Declaration of NULL
#include <stddef.h>
#include <stdlib.h>
#include <stdbool.h>

#include "arrayUtils.h"

static Node_t * createNode(int value) {
    Node_t * node = (Node_t *) malloc(sizeof(node));
    node->head = value;
    node->tail = NULL;
    return node;
}

bool isEmpty(Node_t * root) {
    return !root;
}

void push(Node_t ** root, int value) {
    if (root) {
        if (*root) {
            Node_t * currentNode = *root;
            while (currentNode->tail != NULL)
                currentNode = currentNode->tail;
            currentNode->tail = createNode(value);
        } else {
            *root = createNode(value);
        }
    }
}

bool pop(Node_t ** root, int * buffer) {
    bool result = false;
    if (root && !isEmpty(*root)) {
        *buffer = (*root)->head;
        Node_t * next = (*root)->tail;
        free(*root);
        *root = next;
        result = true;
    }
    return result;
}

int main() {
    Node_t * root = NULL;
    int value = -100;
    bool result;

    // Check empty
    assert(isEmpty(root));
    result = pop(&root, &value);
    assert(!result);
    assert(value == -100);
    assert(isEmpty(root));

    // Add and remove one element
    push(&root, 123);
    assert(!isEmpty(root));
    result = pop(&root, &value);
    assert(result);
    assert(value == 123);
    assert(isEmpty(root));

    // Add two elements and remove one
    push(&root, 1);
    push(&root, 2);
    assert(!isEmpty(root));
    result = pop(&root, &value);
    assert(result);
    assert(value == 1);
    assert(!isEmpty(root));

    return 0;
}*/
