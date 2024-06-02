#include<iostream>
using namespace std;
# define N 5
int deque[N];
int front=-1,rear=-1;


void enqueue_front(){
if((rear+1)%N==front){
    cout<<"full"<<endl;
    return;
}
int x;
cout<<"enter data: ";
cin>>x;
if(front==-1&&rear==-1){
    front=rear=0;
    deque[front]=x;
}
else if(front==0){
    front=N-1;
    deque[front]=x;
}
else{
    front--;
    deque[front]=x;
}

}

void enqueue_rear(){
if((rear+1)%N==front){
    cout<<"full"<<endl;
    return;
}
int x;
cout<<"enter data: ";
cin>>x;
if(front==-1&&rear==-1){
    front=rear=0;
    deque[rear]=x;
}
else if(rear==N-1){
    rear=0;
    deque[rear]=x;
}
else{
    rear++;
    deque[rear]=x;
}
}

void dequeue_front(){
if(front==0 && rear==0)
{
    front=rear=0;
}
else if(front==N-1){
    front=0;
}
else{
    front++;
}
}
void dequeue_rear(){
if(front==0 && rear==0)
{
    front=rear=0;
}
else if(rear==0){
    rear=N-1;
}
else{
    rear--;
}
}
void display(){
int i=front;
while(i!=rear){
    cout<<deque[i]<<" ";
    i=(i+1)%N;
}
cout<<deque[rear]<<endl;
}
int main(){
int choice=1;
while(choice){
    cout<<"\tMENU"<<endl;
    cout<<"Insert from front"<<endl;
    cout<<"2.Insert from rear"<<endl;
    cout<<"3.Delete from front"<<endl;
    cout<<"4.Delete from rear"<<endl;
    cout<<"5.Display"<<endl;
    cout<<"6.Exit"<<endl;
    cout<<"enter choice: ";
    cin>>choice;
    if(choice==6){
break;
    }
    else{
        switch (choice){
            case 1:enqueue_front();
            break;
            case 2: enqueue_rear();
            break;
            case 3: dequeue_front();
            break;
            case 4: dequeue_rear();
            break;
            case 5: display();
            break;
        }
    }
}
return 0;
}