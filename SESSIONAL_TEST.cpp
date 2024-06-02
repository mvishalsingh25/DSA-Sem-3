// #include <iostream>
// using namespace std;

// struct node
// {
//     int data;
//     struct node *next;
// };

// struct node *head, *newnode;

// void display()
// {
//     if (head == 0)
//     {
//         cout << "no element to display" << endl;
//     }
//     else
//     {
//         struct node *temp;
//         temp = head;
//         while (temp != 0)
//         {
//             cout << temp->data << " ";
//             temp = temp->next;
//         }
//         cout << endl;
//     }
// }

// void push()
// {
//     int element;
//     cout << "enter data: ";
//     cin >> element;
//     newnode = (struct node *)malloc(sizeof(struct node));
//     newnode->data = element;
//     newnode->next = head;
//     head = newnode;
//     display();
// }

// void pop()
// {
//     if (head == 0)
//     {
//         cout << "stack underflow" << endl;
//     }
//     else
//     {
//         struct node *temp;
//         temp = head;
//         cout << "poped element is : " << temp->data << endl;
//         head=head->next;
//         free(temp);
//         display();
//     }
// }

// void peek()
// {
//     if (head == 0)
//     {
//         cout << "stack is empty" << endl;
//     }
//     else
//     {
//         cout << "top element is : " << head->data << endl;
//         display();
//     }
// }

// void empty()
// {
//     if (head == 0)
//         cout << "empty" << endl;
// }
// int main()
// {
//     head = 0;
//     int choice ;
//     while (1)
//     {
//         cout << endl;
//         cout << "\t\tMENU" << endl;
//         cout << "1.push" << endl;
//         cout << "2.pop" << endl;
//         cout << "3.peek" << endl;
//         cout << "4.empty" << endl;
//         cout << "5.exit" << endl;
//         cout << endl
//              << "enter your choice: ";
//         cin >> choice;
//         display();
//         if (choice == 5)
//             break;

//         else
//         {
//             switch (choice)
//             {

//             case 1:
//                 push();
//                 break;
//             case 2:
//                 pop();
//                 break;
//             case 3:
//                 peek();
//                 break;
//             case 4:
//                 empty();
//                 break;
//             }
//         }
//     }
//         return 0;
    
// }

// #include<iostream>
// using namespace std;
// int main(){
// int arr[2][3]={
//     {1,2,3},
//     {4,5,6}
// };
// for(int i=0;i<2;i++){
//     for(int j=0;j<3;j++){
//         cout<<*(arr+i)+j<<endl;
//     }
// }
// return 0;
// }

// #include<iostream>
// using namespace std;
// #include<string>
// struct student{
//     int roll;
//     string name;
    
// };

// void addrecord(int &n){


// }

// void name(int &n){

// }

// void topper(int &n){

// }

// void display(int &n){

// }
// struct student*ptr;
// int main(){
// int n=0;
// ptr=(struct student*)malloc(100*sizeof(struct student));

// int choice;
// while(1){

//     cout<<"\t\tMENU"<<endl;
//     cout<<"1. add one record"<<endl;
//     cout<<"2. display record"<<endl;
//     cout<<"3.search by name"<<endl;
//     cout<<"4.topper detail"<<endl;
//     cout<<"5. exit"<<endl;
//     cout<<endl<<"enter your choice: ";
//     cin>>choice;
//     if(choice==5) break;
//     else{
//         switch (choice){
//             case 1: addrecord(n);
//             break;
//             case 2 : display(n);
//             break;
//             case 3: name(n);
//             break;
//             case 4: topper(n);
//             break;
//         }
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
//     if(front==rear==-1) cout<<"no data"<<endl;
//     else{
//   for(int i=front;i<rear+1;i++){
//     cout<<queue[i]<<" ";
//   }
//   cout<<endl;
// }
// }

// void enqueue(){
//     if(rear==N-1) {
//         cout<<"overflow"<<endl;
//         return;
//         }
// int element;
// cout<<" enter element: "<<endl;
// cin>>element;
// if(front==rear==-1){
//     front=rear=0;
//     queue[rear]=element;
// }
// else{
//     rear++;
//     queue[rear]=element;
// }
// }
// void dequeue(){
//  if(front==rear==-1){
//     cout<<"no data"<<endl;
//  }
//  else if(front==rear){
//     front=rear=-1;
//  }
//  else{
//     front++;
//  }
//  display();
// }
// void peek(){
//   if(front==rear==-1){
//     cout<<"no data"<<endl;
//  }
//  else{
//     cout<<queue[front]<<endl;

//  }
//  display();
// }
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
// int main(){
// int arr[]={1,19,34,33,32,21};
// int *ptr=&arr[0];
// cout<<ptr<<" "<<*ptr<<" ";
// *ptr++;
// cout<<" " <<*ptr<<" "<<arr[0];
// int *pt=&arr[0];
// int n=sizeof(arr)/sizeof(arr[0]);
// cout<<endl<<endl;
// for(int i=0;i<n;i++){
//     cout<<arr+i<<endl;
//     cout<<*(arr+i)<<endl;
// }
// int x=28;
// int *ty=&x;
// int *pointer=(int *)ty;
// cout<<endl<<*ty<<" "<<*pointer;

// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int a=2; 
// int y[5]={1,2,3,4,5};
// void *ptr;
// ptr=&a;
// cout<<*(int*)ptr<<" "<<(int *)ptr<<" "<<ptr;
// ptr=y;
// cout<<endl;
// for(int i=0;i<5;i++){
// cout<<*((int*)ptr+i)<<" ";
// }
// int p=64;
// char t=(int)p;
// cout<<t;
// return 0;
// }

// #include<iostream>
// using namespace std;

// int main(){
// int *ptr;

// int size=5;
// ptr=(int*)malloc(size*sizeof(int));
// cout<<ptr;
// cout<<"enter elements: ";
// for(int i=0;i<size;i++){
//     cin>>*(ptr+i);
// }
// for(int i=0;i<size;i++){
//   cout<<(ptr+i)<<" ";
// }   
// // int ee;
// // cout<<"enter the no. of eleets you want to add: ";
// // cin>>ee;
// // ptr=(int *)realloc(ptr,ee*sizeof(int));

// // cout<<"enter elements: ";
// // for(int i=size;i<(size+ee);i++){
// //     cin>>*(ptr+i);
// // }
// // for(int i=0;i<(size+ee);i++){
// //   cout<<*(ptr+i)<<" ";
// // }
// return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
// int *p;
// p=(int*)malloc(20);
// cout<<sizeof(p);
// return 0;
// }


///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
#include<iostream>
using namespace std;

struct node{
    int data;
    struct node*next;
};

node*newnode;
node*front=0;
node*rear=0;


void display(){
    if(front==0&&rear==0){
        cout<<"no data to display"<<endl;
    }
    else{
        node*temp;
        temp=front;
        while(temp!=0){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        
    }
    cout<<endl;
}
void enqueue(){
int element;
cout<<"enter element: ";
cin>>element;
newnode=(struct node*)malloc(sizeof(struct node));

newnode->data=element;
newnode->next=0;
newnode->data=element;


if(front==0&&rear==0){
    front=rear=newnode;
}
else{
   rear->next=newnode;
   rear=newnode;
}

display();
}

void dequeue(){
    struct node *temp;
    temp=front;
if(front==0&&rear==0){
    cout<<"no data to delete"<<endl;
}
else{
    front=front->next;
    free(temp);
    
}
}

void peek(){
if(front==0&&rear==0){
    cout<<"no data"<<endl;
}
else{
    cout<<"topmost element is: "<<front->data<<endl;
    display();
}
}
void emptyorfull(){
if(front==0&&rear==0){
    cout<<"empty"<<endl;
}
}
int main(){
int choice;
while(1){
    cout<<"\tMENU FOR  QUEUE: "<<endl;
    cout<<"1.enqueue"<<endl;
    cout<<"2.dequeue"<<endl;
    cout<<"3.Peek"<<endl;
    cout<<"4.Empty or Full"<<endl;
    cout<<"5.Exit"<<endl;
    cout<<endl<<"enter your choice: ";
    cin>>choice;
    if(choice==5) break;
    else{
        switch(choice){
            case 1: enqueue();
            break;
            case 2: dequeue();
            break;
            case 3: peek();
            break;
            case 4: emptyorfull();
            break;
            default:cout<<"invalid choice"<<endl;
        }
    }
}
return 0;
}