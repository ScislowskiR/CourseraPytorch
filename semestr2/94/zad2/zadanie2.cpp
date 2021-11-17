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
