/*#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int head ;
    struct Node * tail ;
    } Node_t ;
Node_t * createNode (int value ) {
    Node_t * node = ( Node_t *) malloc ( sizeof (* node ) );
    node -> head = value ;
    node -> tail = NULL ;
    return node ;
}
bool isEmpty ( Node_t * root ) {
    // Rownowaznie root == NULL
    return ! root ;
}
void push ( Node_t ** root , int value ) {
    if ( root ) {
        // Utworz nowy wezel
        Node_t * node = createNode ( value );
        // Dowiaz element do stosu
        node -> tail = * root ;
        // Ustaw element na wierzcholek stosu
        * root = node ;
        }
}
bool pop ( Node_t ** root , int * buffer ) {
    bool result = false ;
    // Rownowaznie if ( root != NULL && * root != NULL)
    if ( root && * root ) {
        Node_t * node = * root ;
        // Przesun wskaznik wierzcholka stosu
        * root = (* root ) -> tail ;
        * buffer = node -> head ;
        free ( node ) ;
        // Sukces
        result = true ;
        }
    return result ;
}
int main () {
    Node_t * root = NULL ;
    push (& root , 14) ;
    push (& root , 112) ;
    push (& root , 17) ;
    push (& root , 23) ;
    push (& root , 24) ;
    push (& root , 25) ;
    int value ;
    bool result ;
    for(int i=0;i<value!=0;i++){
        result = pop (& root , & value ) ;
        if ( result ) printf (" Popped value : %d\n", value ) ;
    }
    return EXIT_SUCCESS ;
}*/


/*
// CPP program for array
// implementation of queue
// CPP program for array
// implementation of queue
*//*

*/
/*#include <bits/stdc++.h>
using namespace std;

// A structure to represent a queue
class Queue {
public:
    int front, rear, size;
    unsigned capacity;
    int* array;
};

// function to create a queue
// of given capacity.
// It initializes size of queue as 0
Queue* createQueue(unsigned capacity)
{
    Queue* queue = new Queue();
    queue->capacity = capacity;
    queue->front = queue->size = 0;

    // This is important, see the enqueue
    queue->rear = capacity - 1;
    queue->array = new int[queue->capacity];
    return queue;
}

// Queue is full when size
// becomes equal to the capacity
bool isFull(Queue* queue)
{
    return (queue->size == queue->capacity);
}

// Queue is empty when size is 0
bool isEmpty(Queue* queue)
{
    return (queue->size == 0);
}

// Function to add an item to the queue.
// It changes rear and size
void enqueue(Queue* queue, int item)
{
    if (isFull(queue))
        return;
    queue->rear = (queue->rear + 1)% queue->capacity;
    queue->array[queue->rear] = item;
    queue->size = queue->size + 1;
    cout << item << " enqueued to queue\n";
}

// Function to remove an item from queue.
// It changes front and size
int dequeue(Queue* queue)
{
    if (isEmpty(queue))
        return INT_MIN;
    int item = queue->array[queue->front];
    queue->front = (queue->front + 1)
                   % queue->capacity;
    queue->size = queue->size - 1;
    return item;
}

// Function to get front of queue
int frontPop(Queue* queue)
{
    if (isEmpty(queue))
        return INT_MIN;
    return queue->array[queue->front];
}

// Function to get rear of queue
int rearPush(Queue* queue)
{
    if (isEmpty(queue))
        return INT_MIN;
    return queue->array[queue->rear];
}

// Driver code
int main()
{
    Queue* queue = createQueue(1000);

    enqueue(queue, 10);
    enqueue(queue, 20);
    enqueue(queue, 30);
    enqueue(queue, 40);
    dequeue(queue);
    cout << dequeue(queue)
         << " dequeued from queue\n";

    cout << "Front item is "
         << frontPop(queue) << endl;
    cout << "Rear item is "
         << rearPush(queue) << endl;

    return 0;
}*//*
*/
/*


// This code is contributed by rathbhupendra


// This code is contributed by rathbhupendra
*//*

*/
/*

#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 1024

typedef struct Node {
    int head ;
    struct Node * tail ;
} Node_t ;
int arr[MAX_SIZE];
int front=0;
int rear=0;

void push(int x){
    arr[front++]=x;
    cout<<x<<" is enQueued\n";
}

bool isEmpty(){
    if(front==rear)
        return true;
    return false;
}


bool pop(){
    if(isEmpty()){
        cout<<"Empty Queue\n";
        return INT_MIN;
    }
    int val=arr[rear++];
    return val;
}

int queue_front(){
    if(isEmpty()){
        cout<<"Empty Queue\n";
        return INT_MIN;
    }
    return arr[front-1];
}

int main()
{
    cout<<"press 1 for enQueue()\n";//push (with data)
    cout<<"press 2 for deQueue()\n";//pop()
    cout<<"press 3 for front()\n";//front()
    cout<<"press 4 for size()\n";//size()
    cout<<"press 0 for exit\n";//exit()

    int choice;
    cout<<"press your choice\n";
    cin>>choice;
    while(choice){
        if(choice==1){
            int data;
            cout<<"Enter element\n";
            cin>>data;
            push(data);
        }
        else if(choice==2){
            int item=pop();
            if(item==INT_MIN){}
            else
                cout<<"Dequeued element: "<<item<<endl;
        }
        else if(choice==3){
            int item=queue_front();
            if(item==INT_MIN){}
            else
                cout<<"Front element: "<<item<<endl;
        }
        else if(choice==4){
            cout<<"Size is: "<<(front-rear)<<endl;
        }
        else
            cout<<"Invalid number, try again!\n";
        cout<<front<<"     "<<MAX_SIZE<<endl;
        cout<<"press your choice\n";
        cin>>choice;


    }

    cout<<"Exiting...\n";
    return 0;

}*//*

*/
/*
#include "conio.h"
#include "iostream"
#include "malloc.h"

//Node structure
using namespace std;
struct node {

    int data;
    node *link;
};

//Queue Structure

struct q1 {

    node *front;
    node *rear;
    node *link;
};

//Queue Initialization

struct queue {

    q1 q;
    node *t;

public:

    void initialize() {

        q.front = NULL;
        q.rear = NULL;
    }

    void addq();
    void delq();
    void displayq();
};

//Function Add Definition

void queue:: addq() {

    t = new(node);

z    cout << "Enter Item To Add:";
    cin >> t->data;

    cout << "Item Added is:" << t->data;
    t->link = NULL;

    if((q.rear)== NULL)

        q.front = t;

    else

        q.rear->link = t;
    q.rear = t;
}

//Function Definition For delq()

void queue::delq() {

    if(q.front == NULL) {

        cout << "Queue Is Empty";

        q.rear = NULL;
    }
    else {

        t = q.front;
        cout << "Item Deleted Is:" << q.front->data;
        q.front=q.front->link;
        free(t);
    }
}

//Function Definition For displayq()


//MAIN PROGRAM START HERE

int main() {
    int choice;
    queue qu;
    qu.initialize();
    cout <<"\n\t1-ADD";
    cout <<"\n\t2-DELETE";
    cout <<"\n\t3-DISPLAY";
    cout <<"\n\t4-EXIT";
    // Switch-Case for Menu
    while(choice != 4)
    {
        cout << "\nEnter Your Choice:\t";
        cin >> choice;
        switch(choice) {
            case 1:
                qu.addq();
                break;
            case 2:
                qu.delq();
                break;
            case 3:
                break;
            default:
                cout << "Invalid Choice";
        }

    }

}
*/
/*

#include <iostream>
#include <string>
using namespace std;
typedef struct Node{
    int head;
    struct Node*tail;
} Node_t;
Node_t*createNode(int value ) {
    Node*node=(Node_t*)malloc(sizeof(*node));
    node->head=value;
    node->tail=nullptr;
    return node;
}
bool isEmpty(Node_t*root){
    return root==nullptr;
}
void print(Node**queue){
    Node*root=*queue;
    cout<<"Queue: ";
    while(not isEmpty(root)){
        cout<<root->head<< " ";
        root=root->tail;
    }
    cout<<"\n";
}
bool pop(Node_t**root,int*buffer){
    bool prawda;
    if(isEmpty(*root)){
        prawda=false;
        return prawda;
    }
    if(isEmpty((*root)->tail)){
        Node*back=*root;
        *buffer=(*root)->head;
        *root=nullptr;
        delete back;
    }
    else {
        Node*currentNode=(*root);
        while(not isEmpty(currentNode->tail->tail)){
            currentNode=currentNode->tail;
        }
        Node*back=currentNode->tail;
        *buffer=currentNode->tail->head;
        currentNode->tail=nullptr;
        delete back;
    }
    prawda=true;
    return prawda;
}
void push(Node_t**root,int value){
    if(root){Node*node=createNode(value);
    if (*root!=nullptr){
        Node*temp=*root;
        node->tail=temp;
    }
    *root=node;
    }
}
int main(){
    Node_t*root=nullptr;
    int number=5;
    for(int i=0;i<=number;++i){
        push(&root,i);
    }
    print(&root);
    int value;
    for(int i=0;i<=number;i++){
        pop(&root,&value);
        cout<<"Returned to buffer: "<<value<<endl;
        print(&root);
    }
    cout<<endl<<root<<"   "<<&root<<"   "<<&value;
    return EXIT_SUCCESS;
}

*/
//```c++
//kodzik
//```