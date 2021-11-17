/*
#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include <stdlib.h>
typedef bool (*Predicate)(int, int);
bool isEqual(int lhs, int rhs);
bool isGreater(int lhs, int rhs);
bool isLess(int lhs, int rhs);
#define MAX_INSTRUCTION_LENGTH 12
typedef struct ParsedCommand {
    char instruction[MAX_INSTRUCTION_LENGTH];
    int argument;
} ParsedCommand_t;
ParsedCommand_t parseCommand(const char * command);
typedef struct Node {
    int head;
    struct Node * tail;
} Node_t;
Node_t * createList(unsigned int nodeCount, ...);
void printList(Node_t * root);
void push(Node_t * root, int value);
void removeIf(Node_t ** root, Predicate predicate, int toCompare);
void dispatch(Node_t ** root, ParsedCommand_t parsedCommand);
bool isEqual(int lhs, int rhs) {
    return lhs == rhs;
}
bool isLess(int lhs, int rhs)
{
    return lhs < rhs;
}
bool isGreater(int lhs, int rhs)
{
    return lhs > rhs;
}
typedef  struct  Zadanie
{
    char  instruction[MAX_INSTRUCTION_LENGTH ];
    bool (* executor)(int, int);
} Zadanie_t;
void dispatch(Node_t ** root, ParsedCommand_t parsedCommand)
{
    int rozmiara = sizeof(Zadanie_t);
    static  const  Zadanie_t  listaZadan[] =
            {
                    (Zadanie_t){"isEqual" , isEqual},
                    (Zadanie_t){"isGreater", isGreater},
                    (Zadanie_t){"isLess", isLess}
            };
    int rozmiarb = sizeof(listaZadan);

    for(unsigned int i =0; i < (rozmiarb/rozmiara);i++)
    {
        if (strncmp(listaZadan[i].instruction, parsedCommand.instruction, MAX_INSTRUCTION_LENGTH) ==0)
        {
            removeIf(root, listaZadan[i].executor, parsedCommand.argument);
            break;
        }
    }
}
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
    while (currentNode != 0) {
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
    return nodes;}
void removeIf(Node_t ** root, Predicate predicate, int toCompare) {
    Node_t * nodes = *root;
    Node_t * nodeBefore = 0;
    if(nodes!=0){
        while (nodes != 0) {
            if (predicate(nodes->head, toCompare)) {
                if (nodeBefore == 0) {
                    *root = nodes->tail;
                } else {
                    nodeBefore->tail = nodes->tail;
                }
            }
            nodeBefore = nodes;
            nodes = nodes->tail;
        }
    }
}
ParsedCommand_t parseCommand(const char * command) {
    ParsedCommand_t parsedCommand;
    unsigned int commandLength = strlen(command) + 1;
    char buffer[commandLength];
    strncpy(buffer, command, commandLength);
    const char * delimiter = " ";
    char * part = strtok(buffer, delimiter);
    strncpy(parsedCommand.instruction, part, sizeof(parsedCommand.instruction));
    part = strtok(0, delimiter);
    parsedCommand.argument = atoi(part);
    return parsedCommand;
}
int main(int argc, char** argv) {
    printf("argc: %d\n",argc);
    printf("argv: %d\n",argc);
    if (argc > 1) {
        // Create list
        const unsigned int nodeCount = 5;
        Node_t * root = createList(nodeCount, 2, 4, 6, 8, 10);
        // Print created list
        printf("\nCreated new list:\n");
        printList(root);
        // For all passed commands
        for (unsigned int i = 1; i < argc; ++i) {
            // Use predicate passed via argv list
            dispatch(&root, parseCommand(argv[i]));
            printf("After removal:\n");
            printList(root);
        }
    }
    printf("Arguments after:\n");
    printf("argc: %d\n",argc);
    printf("argv: %d",argc);
    return 0;
}
//gcc projext.c -o a
//a.exe "isLess 4" "isGreater 8" "isEqual 6" "isEqual 4" "isEqual 8"
*/
