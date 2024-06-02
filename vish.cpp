#include<iostream>
using namespace std;
struct node{
    int data;
    node*prev;
    node*next;
};
node*newnode,*head=0,*temp;
int count=0;
void display(){
node*temp=head;
while(temp!=0){
    cout<<temp->data<<"->";
    temp=temp->next;
    count++;
}
cout<<"NULL"<<endl;
cout<<"Length of list is : "<<count<<endl;
}
void iab(){
newnode=new node;
cout<<"enter data : ";
cin>>newnode->data;
newnode->next=head;
head->prev=newnode;
head=newnode;
count=0;
display();
}
void iae(){
newnode=new node;
cout<<"enter data : ";
cin>>newnode->data;
temp->next=newnode;
newnode->next=0;
newnode->prev=temp;
temp=newnode;
count=0;
display();
}

void iap(){
int pos;
cout<<"enter position: ";
cin>>pos;
int i=1;
newnode=new node;
cout<<"enter data : ";
cin>>newnode->data;
node*nextnode;
node*temp=head;
while(i<pos-1){
    temp=temp->next;
    i++;
}
newnode->next=temp->next;
newnode->prev=temp;
temp->next->prev=newnode;
temp->next=newnode;
count=0;
display();
}

void dfb(){

}

void dfe(){

}
void dfp(){

}
int main(){
int choice=1;
while(choice){
newnode=(node*)malloc(sizeof(node));
cout<<"enter data: ";
cin>>newnode->data;
newnode->prev=0;
newnode->next=0;
if(head==0){
head=temp=newnode;
}
else{
    temp->next=newnode;
    newnode->prev=temp;
    temp=newnode;
}
cout<<"Do you want to continue(0/1): ";
cin>>choice;
}
display();
int option=1;
while(option){
cout<<"MENU: "<<endl;
cout<<"1. Insert at beg"<<endl;
cout<<"2. Insert at end"<<endl;
cout<<"3. Insert at specific position"<<endl;
cout<<"4. Delete from beg"<<endl;
cout<<"5. Delete from end()"<<endl;
cout<<"6. delete from position"<<endl;
cout<<"7. exit"<<endl;
cout<<"enter your option: ";
cin>>option;
if(option==7){
  break;
}
else{
    switch(option){
        case 1: iab();
        break;
        case 2: iae();
        break;
        case 3: iap();
        break;
        case 4: dfb();
        break;
        case 5: dfe();
        break;
        case 6: dfp();
        break;
    }
}
}
return 0;
}