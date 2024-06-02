// #include<iostream>
// #include<string>
// using namespace std;
// #define n 5

// int stack[n];
// int top =-1;

// void display(){
//      cout<<"elements are: ";
//     for(int i=top;i>=0;i--){
//         cout<<stack[i]<<" ";
//     }
// }

// void push(){
//     int x;
//     cout<<"enter data: ";
//     cin>>x;
//     if(top==n-1){
//         cout<<"STACK OVERFLOW"<<endl;
//     }
//     else{
//         top++;
//         stack[top]=x;
//     }
//     display();
// }

// void pop(){
//     int item;
//     if(top==-1){
//         cout<<"STACK UNDERFLOW"<<endl;
//     }
//     else{
//         item=stack[top];
//         top--;
//         cout<<"the deleted item is "<<item<<endl;
//     }
//     display();
// }

// void peek(){
//     if(top==-1){
//         cout<<"stack is empty"<<endl;
//     }
//     else{
//         cout<<"The topmost item is : "<<stack[top]<<endl;
//     }
// }


// int main(){
// int choice;
// while(1){
//     cout<<endl;
// cout<<"\tMENU FOR STACK"<<endl;
// cout<<"1. Insert element"<<endl;
// cout<<"2. Delete element"<<endl;
// cout<<"3. Get topmost element"<<endl;
// cout<<"4. Display stack elements "<<endl;
// cout<<"5. Exit"<<endl;
// cout<<endl;
// cout<<"enter your choice: ";
// cin>>choice;
// if(choice==5) {
//  cout<<"exiting of program";
//         break;
// }
//     switch(choice){
//         case 1: push();
//         break;
//         case 2: pop();
//         break;
//         case 3: peek();
//         break;
//         case 4 : display();
//         break;
        
//         default: "Invalid choice ";
//     }
// }

// return 0;
// }

#include<iostream>
using namespace std;

struct node{
    int data;
    struct node*next;
};
struct node*top=0;


void display(){
    struct node*temp;
    temp=top;
    if(top==0){
        cout<<"list is empty"<<endl;
    }
    else{
        cout<<"elements are: ";
        while(temp!=0){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
    }
}

void pop(){
    struct node*temp;
    temp=top;
    if(top==0){
        cout<<"STACK UNDERFLOW"<<endl;
    }
    else{
        cout<<"delete(pop) element is : "<<top->data<<endl;
        top=top->next;
        free(temp);
    }
    display();
}

void peek(){
    if(top==0){
        cout<<"Stack is empty"<<endl;
    }
    else{
        cout<<"top element is : "<<top->data<<endl;
    }
}
void push(){
    struct node*newnode;
    newnode=(struct node*)malloc(sizeof(struct node));
    cout<<"enter data: ";
    cin>>newnode->data;
    newnode->next=top;
    top=newnode;
  display();
}


int main(){
int choice;
while(1){
    cout<<endl;
cout<<"\tMENU FOR STACK"<<endl;
cout<<"1. Insert element"<<endl;
cout<<"2. Delete(pop) element"<<endl;
cout<<"3. Get topmost element"<<endl;
cout<<"4. Display stack elements "<<endl;
cout<<"5. Exit"<<endl;
cout<<endl;
cout<<"enter your choice: ";
cin>>choice;
if(choice==5) {
 cout<<"exiting of program";
        break;
}
    switch(choice){
        case 1: push();
        break;
        case 2: pop();
        break;
        case 3: peek();
        break;
        case 4 : display();
        break;
        
        default: "Invalid choice ";
    }
}

return 0;
}






