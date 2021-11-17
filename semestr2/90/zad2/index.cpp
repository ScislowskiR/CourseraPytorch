/*
#include <iostream>
using namespace std;
// list node
struct Node {
    int data ;
    Node * next ;
};
// Otrzymujac referencje (wskaznik do wskaznika) do head oraz integera, robi insert notego wezla na poczatek kodu
void push(Node** head_ref, int value)
{
    Node* new_node = new Node();
    new_node->data = value;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
bool pop ( Node ** root , int * buffer ) {
    bool result = false ;
    // Rownowaznie if ( root != NULL && * root != NULL)
    if ( root && * root ) {
        Node * node = * root ;
        * root = (* root )->next ;
        * buffer = node -> data ;
        free ( node ) ;
        // Sukces
        result = true ;
        }
    return result ;
}
bool isEmpty ( Node * root ) {
    // Rownowaznie root == NULL
    return ! root ;
    }

// Otrzymujac referencje (wskaznik do wskaznika) do head oraz indeksu, usuwa wezel w podanym indeksie
void removeByIndex(Node **head_ref, unsigned int index)
{
    // Jesli linkowana lista jest pusta
    if (*head_ref == NULL)
        return;

    // Przechowuje wezel head
    Node* temp = *head_ref;

    // Jesli head ma byc usunieta
    if (index == 0)
    {
        // Zmienia head
        *head_ref = temp->next;

        // Uwalnia stary head
        free(temp);
        return;
    }
    // Znajduje poprzedni wezel wezla jaki musi byc usuniety
    for(int i = 0; temp != NULL && i < index - 1; i++)
        temp = temp->next;

    // Jesli indeks jest wiekszy niz liczba wezlow
    if (temp == NULL || temp->next == NULL)
        return;

    // Wezel temp->next to wezel do usuniecia
    //Przechowuje pointer do nastepnego z wezlow do usuniecia
    Node *next = temp->next->next;

    // Odlinkowuje wezel od podlinkowanej listy
    free(temp->next); // Uwalnia pamiec

    // Odlinkowuje usuniety wezel z listy
    temp->next = next;
}
//Ta funkcja drukuje zawartosc linkow
//Lista zaczynająca się od węzła
void printList( Node *node)
{
    do
    {
        if(node==NULL){
            cout<<"\nLista jest pusta";
            return;
        }
        cout << node->data << " ";
        node = node->next;
    }while (node != NULL);
}

int main()
{

    // Zaczynam z pusta lista
    Node* head = NULL;
    push(&head,321);
    push(&head,43);
    push(&head,543);
    push(&head,7);
    push(&head,3);
    push(&head,2);
    push(&head,23);
    push(&head,8);
    push(&head,54);
    if(head!=NULL){
        cout << "Lista: ";
    }
    printList(head);
    removeByIndex(&head, 0);
    removeByIndex(&head, 0);
    if(head!=NULL){
        cout << "\nLista po usunieciu elementow: ";
    }
    printList(head);
    return 0;
}*/
/*
//
// Created by scisl on 01.05.2021.
//
#include <iostream>

using namespace std;
typedef struct Node {
    int head ;
    struct Node * tail ;
} Node_t ;
Node_t * createNode (int head , Node_t * tail ) {
    // Dynamicznie utworz wezel
    // Rownowaznie : ( Node_t *) malloc ( sizeof ( Node_t ))
    Node_t * node = ( Node_t *) malloc ( sizeof (* node ) );
    // Zainicjalizuj wezel
    node -> head = head ;
    node -> tail = tail ;
    // Zwroc utworzony wezel
    return node ;
}
Node_t * createNode (int head ) {
    return createNode ( head , NULL ) ;
}
void pushBack ( Node_t * root , int value ) {
    Node_t * currentNode = root ;
    if ( currentNode != NULL ) {
        // Przejdz na koniec listy
        while ( currentNode -> tail != NULL )
            currentNode = currentNode -> tail ;
        // Dodaj nowy element na koniec listy
        currentNode -> tail = createNode ( value ) ;
    }
}
void pushFront(Node_t** root, unsigned int value){
    if(root!=NULL){
        Node_t * node = createNode ( value , * root );
        * root = node ;
    }
}
bool popBack ( Node_t ** root , int * buffer ) {
    bool result = false ;
    if ( root != NULL && * root != NULL && buffer !=NULL ) {
        Node_t * currentNode = * root ;
        // Jezeli lista ma jeden element , usun go
        if ( currentNode -> tail == NULL ) {
            // Odczytaj wartosc
            * buffer = currentNode -> head ;
            // Usun element
            free ( currentNode ) ;
            * root = NULL ;
        }
            // W przeciwnym wypadku przejdz do przedostatniego elementu
        else {
            while ( currentNode -> tail -> tail != NULL )
                currentNode = currentNode -> tail ;
            // Odczytaj wartosc ostatniego elementu
            * buffer = currentNode -> tail -> head ;
            // Usun ostatni element
            free ( currentNode -> tail ) ;
            // Ustaw koniec listy na przedostatnim elemencie
            currentNode -> tail = NULL ;
        }
        // Sukces
        result = true ;
    }
    return result ;
}
bool popFront ( Node_t ** root , int * buffer ) {
    bool result = false ;
    if ( root != NULL && * root != NULL && buffer !=NULL ) {
        // Odczytaj wartosc pierwszego elementu
        * buffer = (* root ) -> head ;
        // Wez drugi element z listy
        Node_t * next = (* root ) -> tail ;
        // Usun pierwszy element
        free (* root ) ;
        // Ustaw poczatek listy na drugi element
        * root = next ;
        // Sukces
        result = true ;
    }
    return result ;
}
int main(){
    Node_t * root = createNode (112) ;
    pushBack ( root , 17) ;
    pushFront (& root , 14) ;
    int value ;
    bool result ;
    result = popFront (& root , & value ) ;
    if ( result ) printf (" Popped value : %d\n", value );
    result = popBack (& root , & value ) ;
    if ( result ) printf (" Popped value : %d\n", value );
    result = popFront (& root , & value ) ;
    if ( result ) printf (" Popped value : %d\n", value );
    return 0;
}*/
/*
#include <iostream>
using namespace std;

// list node
struct Node {
    int data ;
    Node * next ;
};


// Otrzymujac referencje (wskaznik do wskaznika) do head oraz integera, robi insert notego wezla na poczatek kodu
void push(Node** head_ref, unsigned int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}

// Otrzymujac referencje (wskaznik do wskaznika) do head oraz indeksu, usuwa wezel w podanym indeksie
void removeByIndex(Node **head_ref, unsigned int index)
{

    // Jesli linkowana lista jest pusta
    if (*head_ref == NULL)
        return;

    // Przechowuje wezel head
    Node* temp = *head_ref;

    // Jesli head ma byc usunieta
    if (index == 0)
    {

        // Zmienia head
        *head_ref = temp->next;

        // Uwalnia stary head
        free(temp);
        return;
    }

    // Znajduje poprzedni wezel wezla jaki musi byc usuniety
    for(int i = 0; temp != NULL && i < index - 1; i++)
        temp = temp->next;

    // Jesli indeks jest wiekszy niz liczba wezlow
    if (temp == NULL || temp->next == NULL)
        return;

    // Wezel temp->next to wezel do usuniecia
    //Przechowuje pointer do nastepnego z wezlow do usuniecia
    Node *next = temp->next->next;

    // Unlink the node from linked list
    // Odlinkowuje wezel od podlinkowanej listy
    free(temp->next); // Uwalnia pamiec

    // Odlinkowuje usuniety wezel z listy
    temp->next = next;
}

//Ta funkcja drukuje zawartosc linkow
//Lista zaczynająca się od węzła
void printList( Node *node)
{
    do
    {
        if(node==NULL){
            cout<<"\nLista jest pusta";
            return;
        }
        cout << node->data << " ";
        node = node->next;
    }while (node != NULL);
}

int main()
{

    // Zaczynam z pusta lista
    Node* head = NULL;
    push(&head,321);
    push(&head,43);
    push(&head,543);
    push(&head,7);
    push(&head,3);
    push(&head,2);
    push(&head,23);
    push(&head,8);
    push(&head,54);
    if(head!=NULL){
        cout << "Lista: ";
    }
    printList(head);
    removeByIndex(&head, 0);
    removeByIndex(&head, 0);
    if(head!=NULL){
        cout << "\nLista po usunieciu elementow: ";
    }
    printList(head);
    return 0;
}
*/
/*
#include <bits/stdc++.h>
using namespace std;

// A linked list node
class Node{
public:
    int data;
    Node* next;
};

// Given a reference (pointer to pointer)
// to the head of a list and an int,
// inserts a new node on the front of the
// list.
void push(Node** root, int new_data)
{
    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*root);
    (*root) = new_node;
}

// Given a reference (pointer to pointer)
// to the head of a list and a key, deletes
// the first occurrence of key in linked list
void deleteNode(Node** root, unsigned int index)
{

    // Store head node
    Node* temp = *root;
    Node* prev = NULL;

    // If head node itself holds
    // the key to be deleted
    if (temp != NULL && temp->data == index)
    {
        *root = temp->next; // Changed head
        delete temp;            // free old head
        return;
    }

        // Else Search for the key to be deleted,
        // keep track of the previous node as we
        // need to change 'prev->next'
    else
    {
        while (temp != NULL && temp->data != index)
        {
            prev = temp;
            temp = temp->next;
        }

        // If key was not present in linked list
        if (temp == NULL)
            return;

        // Unlink the node from linked list
        prev->next = temp->next;

        // Free memory
        delete temp;
    }
}

// This function prints contents of
// linked list starting from the
// given node
void printList(Node* node)
{
    while (node != NULL)
    {
        cout << node->data << " ";
        node = node->next;
    }
}

// Driver code
int main()
{

    // Start with the empty list
    Node* head = NULL;

    // Add elements in linked list
    push(&head, 7);
    push(&head, 1);
    push(&head, 3);
    push(&head, 2);

    puts("Created Linked List: ");
    printList(head);

    deleteNode(&head, 1);
    deleteNode(&head, 2);
    puts("\nLinked List after Deletion of 1: ");

    printList(head);

    return 0;
}*/
/*#include <iostream>
using namespace std;
struct Node{
    int data;
    Node*next;
};
void push(Node**head_ref,unsigned int new_data){
    Node*new_node=new Node();
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}
void removeByIndex(Node**root,unsigned int index){
    if (*root==nullptr){
        return;
    }
    Node*temp=*root;
    if(index==0){
        *root=temp->next;
        free(temp);
        return;
    }
    for(int i=0;temp!=nullptr&&i<index-1;i++) {
        temp=temp->next;
    }
    if(temp==nullptr||temp->next==nullptr) {
        return;
    }
    Node*next=temp->next->next;
    free(temp->next);
    temp->next=next;
}
void printList(Node*node){
    do{
        if(node==nullptr){
            cout<<"\nNie mozna niczego usunac,lista jest pusta!";
            return;
        }
        cout<<node->data<<" ";
        node=node->next;
    }while(node!=nullptr);
}
int main(){
    Node*head=nullptr;
    //push(&head,5);
    push(&head,5);
    push(&head,4);
    push(&head,3);
    push(&head,54);
    push(&head,65);
    push(&head,76);
    push(&head,87);
    push(&head,43);
    push(&head,33);
    if(head!= nullptr){
        cout << "Lista: ";
    }
    printList(head);
    //removeByIndex(&head, 4);
    removeByIndex(&head, 4);
    removeByIndex(&head, 4);
    removeByIndex(&head, 10);
    if(head!=nullptr){
        cout << "\nLista po usunieciu elementow: ";
    }
    if(head==nullptr){
        cout << "\nLista po usunieciu elementow: ";
    }
    printList(head);
    return 0;
}*/
/*
class Queue {
public:
    int front, rear, size;
    unsigned capacity;
    int* array;
};*/
