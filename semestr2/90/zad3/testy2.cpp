/*
#include<bits/stdc++.h>
using namespace std;
#define MAX_SIZE 1024
int arr[MAX_SIZE];
int front=0;
int rear=0;
bool isEmpty(){
    if(front==rear)
        return true;
    return false;
}
int deQueue(){
    if(isEmpty()){
        cout<<"Empty Queue\n";
        return INT_MIN;
    }
    int val=arr[rear++];
    return val;
}
int push(){
    return arr[front-1];
}
bool enQueue(int x){
    arr[front++]=x;
    cout<<x<<" is enQueued\n";
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
            int item=deQueue();
            if(item==INT_MAX){cout<<"elo";}
            int data;
            cout<<"Enter element\n";
            cin>>data;
            enQueue(data);
        }
        else if(choice==2){
            int item=deQueue();
            if(item==INT_MIN){cout<<"siema";}
            else
                cout<<"Dequeued element: "<<item<<endl;
        }
        else if(choice==3){
            int item=push();
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
}
*/
