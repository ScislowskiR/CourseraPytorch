#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

#include "list.h"
#include "comparators.h"
#include "dispatcher.h"
#include "parser.h"

static Node_t * createNode(int head) {
	Node_t * node = (Node_t *) malloc(sizeof(node));
	node->head = head;
	node->tail = NULL;
	return node;
}

void push(Node_t * root, int value) {
	Node_t * currentNode = root;
	if (currentNode != NULL) {
		while (currentNode->tail != NULL) {
			currentNode = currentNode->tail;
    }
		currentNode->tail = createNode(value);
	}
}

void printList(Node_t * root) {
	Node_t * currentNode = root;
	while (currentNode != NULL) {
		printf("%d\n", currentNode->head);
		currentNode = currentNode->tail;
	}
}

Node_t * createList(unsigned int nodeCount,...)
{
  va_list arguments;
  va_start(arguments, nodeCount);

  Node_t * root = createNode(va_arg(arguments, int));

	for(int i = 1; i<nodeCount; i++)
	{
    int value =  va_arg(arguments, int);
    push(root, value);
	}

  return root;
}

void removeIf(Node_t ** root, Predicate predicate, int toCompare) {
  Node_t * currentNode = *root;
  Node_t * previousNode = NULL;

	while (currentNode != NULL) {
    if (predicate(currentNode->head, toCompare)) {
      if (previousNode == NULL) {
        *root = currentNode->tail;
      } else {
        previousNode->tail = currentNode->tail;
      }
      //free(currentNode);
    }
    previousNode = currentNode;
    currentNode = currentNode->tail;
  }
}

