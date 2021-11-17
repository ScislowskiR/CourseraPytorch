/*//
// Created by scisl on 01.05.2021.
//
#include <iostream>

using namespace std;
typedef struct Node {
    int data ;
    Node * next ;
} Node_t ;
Node_t * createNode (int data , Node_t * next ) {
    // Dynamicznie utworz wezel
    // Rownowaznie : ( Node_t *) malloc ( sizeof ( Node_t ))
    Node_t * node = ( Node_t *) malloc ( sizeof (* node ) );
    // Zainicjalizuj wezel
    node -> data = data ;
    node -> next = next ;
    // Zwroc utworzony wezel
    return node ;
}
Node_t * createNode (int data ) {
    return createNode ( data , NULL ) ;
}
void pushBack ( Node_t * root , int value ) {
    Node_t * currentNode = root ;
    if ( currentNode != NULL ) {
        // Przejdz na koniec listy
        while ( currentNode -> next != NULL )
            currentNode = currentNode -> next ;
        // Dodaj nowy element na koniec listy
        currentNode -> next = createNode ( value ) ;
    }
}
void addToEnd(Node_t* first, int data)
{
    Node_t* tmp = first;
    while(tmp->next != 0)
    {
        tmp=tmp->next;
    }
    Node_t* new_node = new Node_t;
    new_node->next = 0;
    new_node->data = data;
    tmp->next = new_node;
    return;
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
        if ( currentNode -> next == NULL ) {
            // Odczytaj wartosc
            * buffer = currentNode -> data ;
            // Usun element
            free ( currentNode ) ;
            * root = NULL ;
        }
            // W przeciwnym wypadku przejdz do przedostatniego elementu
        else {
            while ( currentNode -> next -> next != NULL )
                currentNode = currentNode -> next ;
            // Odczytaj wartosc ostatniego elementu
            * buffer = currentNode -> next -> data ;
            // Usun ostatni element
            free ( currentNode -> next ) ;
            // Ustaw koniec listy na przedostatnim elemencie
            currentNode -> next = NULL ;
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
        * buffer = (* root ) -> data ;
        // Wez drugi element z listy
        Node_t * next = (* root ) -> next ;
        // Usun pierwszy element
        free (* root ) ;
        // Ustaw poczatek listy na drugi element
        * root = next ;
        // Sukces
        result = true ;
    }
    return result ;
}
void printList(Node_t* first)
{
    Node_t* tmp = first;
    cout<<tmp->data<<"\n";
    while(tmp->next != 0)
    {
        tmp=tmp->next;
        cout<<tmp->data<<" ";
    }
}
void removeByIndex(Node_t** root, unsigned int index){

}
void deleteNode(Node *root, Node *n)
{
    // When node to be deleted is head node
    if(root == n)
    {
        if(root->next == NULL)
        {
            cout << "There is only one node." <<
                 " The list can't be made empty ";
            return;
        }

        // Copy the data of next node to head
        root->data = root->next->data;

        // store address of next node
        n = root->next;

        // Remove the link of next node
        root->next = root->next->next;

        // free memory
        free(n);

        return;
    }


    // When not first node, follow
    // the normal deletion process

    // find the previous node
    Node *prev = root;
    while(prev->next != NULL && prev->next != n)
        prev = prev->next;

    // Check if node really exists in Linked List
    if(prev->next == NULL)
    {
        cout << "\nGiven node is not present in Linked List";
        return;
    }

    // Remove node from Linked List
    prev->next = prev->next->next;

    // Free memory
    free(n);

    return;
}
int main(){
    Node_t * root = createNode (112) ;
    pushBack (root , 41) ;
    pushBack (root , 42) ;
    pushBack (root , 43) ;
    pushFront (& root , 14) ;
    addToEnd(root,99);
    addToEnd(root,98);
    addToEnd(root,97);
    addToEnd(root,96);
    int value ;
    bool result ;
    removeByIndex(&root,0);
    result = popFront (& root , & value ) ;
    if ( result ) printf (" Popped value : %d\n", value );
    result = popBack (& root , & value ) ;
    if ( result ) printf (" Popped value : %d\n", value );
    result = popFront (& root , & value ) ;
    if ( result ) printf (" Popped value : %d\n", value );
    //printList(value);
    return 0;
}*/
/*
#include <iostream>
#include <cstring>

using namespace std;
typedef struct Towar{
    char Nazwa[20];
    float Cena;
    int Ilosc;
} Element; // definicja typu danych przechowywanych w liście
typedef struct Wezel{
    Element dane;
    Wezel *nastepny;
} Wezel;
Wezel *Poczatek = NULL;
int DodajNaPoczatek(Wezel *&poczatek, Element dane){
    Wezel *tmp;
    tmp = new Wezel; //(Wezel*)malloc(sizeof(Wezel));
    if (tmp==NULL){
        printf("BRAK PAMIECI !");
        return 1;
    }
    tmp->dane = dane;
    tmp->nastepny = poczatek;
    poczatek = tmp;
    return 0;
}
int DodajZaBiazacy(Wezel *biezacy, Element dane){
    Wezel *tmp;
    tmp = new Wezel; // (Wezel*)malloc(sizeof(Wezel));
    if (tmp==NULL){
        printf("BRAK PAMIECI !");
        return 1;
    }
    tmp->dane = dane; // tu powinno być wpisanie danych
    tmp->nastepny = biezacy->nastepny;
    biezacy->nastepny = tmp;
    return 0;
}
void UsunPoczatek(Wezel *&poczatek){
    Wezel *tmp;
    tmp = poczatek;
    poczatek = tmp->nastepny;
    delete tmp; // free(tmp);
}
void UsunNastępny(Wezel *poprzednik) {
    Wezel *tmp;
    tmp = poprzednik->nastepny;
    poprzednik->nastepny = tmp->nastepny;
    delete tmp; // free(tmp);
}
void UsunWszystkie(Wezel *&poczatek){
    Wezel *tmp;
    while (poczatek != NULL){
        tmp = poczatek;
        poczatek = tmp->nastepny;
        delete tmp; // free(tmp);
        }
}
void DrukujListe(Wezel *poczatek){
    Wezel *tmp;
    for(tmp=poczatek; tmp!=NULL; tmp=tmp->nastepny)
    {
        // tu nalezy wykonac operacje na elemencie
        // wskazywanym przez zmienną tmp. Np...
        printf(" Adres elementu: %p\n", tmp);
        printf(" Wartosc elementu: %20s %5.2f %d\n",
        tmp->dane.Nazwa, tmp->dane.Cena,
                tmp->dane.Ilosc);
    }
}
int WyszukajTowar(Wezel *poczatek, char *nazwa,Wezel *&biezacy,Wezel *&poprzednik){
    poprzednik = NULL;
    biezacy = poczatek;
    while(biezacy != NULL){
        if ( strcmp(biezacy->dane.Nazwa, nazwa)==0 ){
            return 0;
        }
        poprzednik = biezacy;
        biezacy = biezacy->nastepny;
    }
    return 1;
}
void OdwracanieListy(Wezel *&poczatek){
    Wezel * nowyPoczatek = NULL;
    Wezel *tmp;
    while(poczatek != NULL)
    { tmp = poczatek->nastepny;
        poczatek->nastepny = nowyPoczatek;
        nowyPoczatek = poczatek;
        poczatek = tmp;
    }
    poczatek = nowyPoczatek;
}
void SortujSelekcja(Wezel *&poczatek){
    Wezel *nowyPoczatek = NULL;
    Wezel *max, *popmax, *tmp;
    // max – wskaźnik na element o maksymalnej cenie towaru
    // popmax – wskaźnik na element poprzedzający max
    // lub NULL, gdy max jest początkowym elementem

    while( poczatek )
    { max = poczatek;
        popmax = NULL;
        tmp = poczatek;
        while(tmp->nastepny)
        { if (tmp->nastepny->dane.Cena>max->dane.Cena)
            { popmax = tmp;
                max = tmp->nastepny;
            }
            tmp = tmp->nastepny;
        }
        if (popmax) popmax->nastepny = max->nastepny;
        else poczatek = max->nastepny;
        max->nastepny = nowyPoczatek;
        nowyPoczatek = max;
    }
    poczatek = nowyPoczatek;
}*/