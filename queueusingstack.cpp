#include<iostream>
using namespace std;

struct node{
    int data;
    node*next;
};
node*front=0,*rear=0,*newnode;

void display(){
node*temp=front;
while(temp->next!=front){
    cout<<temp->data<<" ";
    temp=temp->next;
}
cout<<temp->data<<endl;
}

void enqueue(){
newnode=(node*)malloc(sizeof(node));
int x;
cout<<"enter data: ";
cin>>x;
newnode->data=x;
newnode->next=0;
if(front==0 && rear==0){
    front=rear=newnode;
    rear->next=front;
}
else{
    rear->next=newnode;
    newnode->next=front;
    rear=newnode;
}
display();
}

void dequeue(){
if(front==0){
    cout<<"no data"<<endl;
}
else if(front==rear){
    
    front=rear=0;
    
}
else{
    node*temp=front;
    front=front->next;
    rear->next=front;
    free(temp);
}
display();
}

void peek(){
cout<<front->data<<endl;
}

void emptyorfull(){
if(front==0){
    cout<<"empty"<<endl;
}
}

int main(){
int choice=1;
while(choice!=5){
    cout<<"Menu"<<endl;
    cout<<"1. enqueue"<<endl;
    cout<<"2. dequeue"<<endl;
    cout<<"3. empty or full"<<endl;
    cout<<"4. peek"<<endl;
    cout<<"5. exit"<<endl;
    cout<<endl;
    cout<<"enter your choice: ";
    cin>>choice;
    switch(choice){
      case 1 : enqueue();
      break;
      case 2: dequeue();
      break;
      case 3: emptyorfull();
      break;
      case 4: peek();
      break;
      case 5: cout<<"exit of program"<<endl;
      default: cout<<"Invalid choice"<<endl;
    }
}
return 0;
}