#include<iostream>
using namespace std;

struct node {
 int data ;
 node*npx;
};

node*head=0;
node*tail=0;

 node*Xor(node*a,node*b){
  return (node*)((unsigned int)(a) ^ (unsigned int )(b));
}
void create(){
node *newnode;
newnode=(node*)malloc (sizeof(node));
cout<<"enter data: ";
cin>>newnode->data;

newnode->npx=Xor(tail,NULL);
if(head==0){
    head=newnode;
}
if(tail!=NULL){
    node*next=Xor(tail->npx,NULL);
    tail->npx=Xor(next,newnode);
}
tail=newnode;
}

void print(){
node *current=head;
node*prev=NULL;
node*next;
cout<<"List is: "<<endl;
while(current!=NULL){
    cout<<current->data<<" ";
    next=Xor(prev,current->npx);
    prev=current;
    current=next;
}
cout<<endl;
}

void print2(){

}
int main(){
 int choice;
 while(1){
    cout<<"1.Create "<<endl;
    cout<<"2.Print in forward "<<endl;
    cout<<"3.Print in backward"<<endl;
    cout<<"4.Exit"<<endl;
    cout<<"enter your choice: "<<endl;
    cin>>choice;
    switch(choice){
        case 1: create();
        break;
        case 2: print();
        break;
        case 3: print2();
        break;
        case 4: exit(0);
        break;
        default: cout<<"Invalid choice"<<endl;
    }
 }
return 0;
}