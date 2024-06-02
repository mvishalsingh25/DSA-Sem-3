// #include<iostream>
// using namespace std;

// # define N 5
// int queue[N];
// int front =-1;
// int rear =-1;
 

//   void display(){
//  cout<<"Queue : "<<endl;
//  for(int i=front;i<(rear+1);i++){
//     cout<<queue[i]<<" ";
//  }
//  cout<<endl;
//  }

//  void enqueue(){
// int x;
// cout<<"enter element: ";
// cin>>x;
// if(rear==N-1){
//     cout<<"QUEUE OVERFLOW"<<endl;
// }
// else if(front==-1 && rear ==-1){
//     front = rear =0;
//     queue[rear]=x;
//     display();
// }
// else{
//     rear++;
//     queue[rear]=x;
//     display();
// }
//  }

//  void dequeue(){
// if(front==-1 && rear==-1){
//     cout<<"QUEUE UNDERFLOW"<<endl;
// }
// else if(front==rear){
//     front=rear=-1;
// }
// else {
//     cout<<"deleted element : "<<queue[front]<<endl;
//     front++;
// }
//  }

//  void peek(){
//   cout<<"Top element : "<<queue[front];
//   cout<<endl;
//  }

// int main(){
// int choice=1;
// while(choice!=5){
//     cout<<"Menu"<<endl;
//     cout<<"1. enqueue"<<endl;
//     cout<<"2. dequeue"<<endl;
//     cout<<"3. display"<<endl;
//     cout<<"4. peek"<<endl;
//     cout<<"5. exit"<<endl;
//     cout<<endl;
//     cout<<"enter your choice: ";
//     cin>>choice;
//     switch(choice){
//       case 1 : enqueue();
//       break;
//       case 2: dequeue();
//       break;
//       case 3: display();
//       break;
//       case 4: peek();
//       break;
//       case 5: cout<<"exit of program"<<endl;
//       default: cout<<"Invalid choice"<<endl;
//     }
// }
// return 0;
// }




// #include<iostream>
// using namespace std;

// #define N 5
// int queue[N];
// int front=-1;
// int rear=-1;

// void display(){
// if(front==-1 && rear==-1){
//     cout<<"no data"<<endl;
// }
// else{
//     cout<<"Queue is : ";
//     int i=front;
//     while(i!=rear){
//         cout<<queue[i]<<" ";
//         i=(i+1)%N;
//     }
//     cout<<queue[rear]<<endl;
// }
// }
// void enqueue(){6
// int element;
// cout<<"enter element: ";
// cin>>element;
// if((rear+1)%N==front){
//     cout<<"QUEUE OVERFLOW"<<endl;
//     return;
// }
// else if(front==-1 && rear==-1){
//     front=rear=0;
//     queue[rear]=element;
// }
// else{
//     rear=(rear+1)%N;
//     queue[rear]=element;
// }
// display();
// }

// void dequeue(){
//     cout<<"the deleted element is : ";
// if(front==-1 && rear==-1){
//     cout<<"QUEUE UNDERFLOW"<<endl;
// }
// else if(front==rear){
//     cout<<queue[front]<<endl;
//     front=rear=-1;
// }
// else{
//     cout<<queue[front]<<endl;
//     front=(front+1)%N;
// }
// display();
// }

// void peek(){
// if(front==-1 && rear==-1){
//     cout<<"no element in queue"<<endl;
// }
// else{
//     cout<<"the topmost element : "<<queue[front]<<endl;
// }
// display();
// }

// void emptyorfull(){
// if((rear+1)%N==front){
//     cout<<"QUEUE IS FULL"<<endl;
// }
// else if(front ==-1 && rear==-1){
//     cout<<"QUEUE IS EMPTY"<<endl;
// }
// else{
//     cout<<"neither empty nor full"<<endl;
// }
// }

// #include<iostream>
// using namespace std;
// struct node {
//     int data;
//     struct node*next;
// };

// struct node*front=0;
// struct node*rear=0;
// struct node *newnode;

// void display(){
// node*temp;
// temp=front;
// cout<<"queue is : ";
// while(temp->next!=front){
//     cout<<temp->data<<" ";
//     temp=temp->next;
// }
// cout<<temp->data<<endl;
// }

// void enqueue(){
// int element;
// cout<<"enter element: ";
// cin>>element;
// newnode=(struct node*)malloc(sizeof (struct node));
// newnode->data=element;
// newnode->next=0;
// if(front==0 && rear==0){
//     front=rear=newnode;
//     newnode->next=front;
// }
// else {
//     rear->next=newnode;
//     rear=newnode;
//     newnode->next=front;
// }
// display();
// }

// void dequeue(){
//     node*temp=front;
// if(front==0 && rear==0){
//     cout<<"no data"<<endl;
// }
// else if(front==rear){
//  front=rear=0;
//  free(temp);
// }
// else{
//     front=front->next;
//     rear->next=front;
//     free(temp);
    
// }
// display();
// }

// void peek(){
// cout<<"top element is: "<<front->data<<endl;
// }

// void emptyorfull(){

// }

// int main(){
// int choice=1;
// while(choice!=5){
//     cout<<"Menu"<<endl;
//     cout<<"1. enqueue"<<endl;
//     cout<<"2. dequeue"<<endl;
//     cout<<"3. empty or full"<<endl;
//     cout<<"4. peek"<<endl;
//     cout<<"5. exit"<<endl;
//     cout<<endl;
//     cout<<"enter your choice: ";
//     cin>>choice;
//     switch(choice){
//       case 1 : enqueue();
//       break;
//       case 2: dequeue();
//       break;
//       case 3: emptyorfull();
//       break;
//       case 4: peek();
//       break;
//       case 5: cout<<"exit of program"<<endl;
//       default: cout<<"Invalid choice"<<endl;
//     }
// }
// return 0;
// }


#include<iostream>
using namespace std;
#define N 5
int s1[N],s2[N];
int top1=-1,top2=-1;
int count=0;

void display(){
    cout<<"Queue is : ";
 for(int i=0;i<=top1;i++){
    cout<<s1[i]<<" ";
 }
 cout<<endl;
}

void push1(int data){
  top1++;
  s1[top1]=data;
}

int pop1(){
    return s1[top1--];
}

int pop2(){
    return s2[top2--];
}

void push2(int data){
 if(top2==N-1){
    cout<<"overflow"<<endl;
 }
 else{
    top2++;
    s2[top2]=data;
 }
}
void enqueue(){
if(top1==N-1){
    cout<<"STACK OVERFLOW.can't insert more elements."<<endl;
}
else{ 
   
    int x;
    cout<<"enter data: "<<endl;
    cin>>x;
    push1(x);
    count++;
    display();
}
}

void dequeue(){
    int a,b;
if(top1==-1 && top2==-1){
    cout<<"no data"<<endl;
}
else{
    for(int i=0;i<count;i++){
      a=pop1();
      push2(a);
    }
    b=pop2();
    cout<<"deleted element is : "<<b<<endl;
    count--;
    for(int i=0;i<count;i++){
        a=pop2();
        push1(a);
    }
}
display();
}

void peek(){

}
void emptyorfull(){

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