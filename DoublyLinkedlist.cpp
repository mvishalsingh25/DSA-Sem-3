#include<iostream>
using namespace std;

struct node{
int data;
struct node*next;
struct node*prev;
};

struct node*head,*newnode,*temp;
void create(){
  int choice;
  head=0;
  while(choice){
  newnode=(struct node*)malloc(sizeof(struct node));
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
  cout<<"do yo want to continue(0/1): ";
  cin>>choice;
}
}

void display(struct node*&head,struct node*&temp,struct node*&newnode){
    
    int count=0;
    temp=head;
    while(temp!=0){
        cout<<temp->data<<"->";
        temp=temp->next;
        count++;
    }cout<<"NULL"<<endl;
    cout<<count<<endl;
}

void insertatbeg(struct node*&head,struct node*&temp,struct node*&newnode){
newnode=(struct node*)malloc(sizeof (struct node));
cout<<"enter data at beg: ";
newnode->prev=0;
newnode->next=0;
cin>>newnode->data;
head->prev=newnode;
newnode->next=head;
head=newnode;
cout<<"after insertion at beginning list is : "<<endl;
display(head,temp,newnode);
}

void insertatend(struct node*&head,struct node*&temp,struct node*&newnode){
 newnode=(struct node*)malloc(sizeof (struct node));
cout<<"enter data at end: ";
cin>>newnode->data;
newnode->prev=0;
newnode->next=0;
temp=head;
while(temp->next!=0){
 temp=temp->next;
}
temp->next=newnode;
newnode->prev=temp;
temp=newnode;
cout<<"ater insertion at end list is : "<<endl;
display(head,temp,newnode);
}

void insertatposition(struct node*&head,struct node*&temp,struct node*&newnode){
  int pos,i=1;
  cout<<"enter your position: ";
  cin>>pos;
  if(pos==1){
    insertatbeg(head,temp,newnode);
  }
  else{
 
newnode=(struct node*)malloc(sizeof (struct node));
cout<<"enter data at position: ";
cin>>newnode->data;
temp=head;
while(i<pos-1){
temp=temp->next;
i++;
}
 newnode->prev=temp;
 newnode->next=temp->next;
 temp->next=newnode;
 newnode->next->prev=newnode;
   display(head,temp,newnode);
  }
}

void insertafterposition(struct node*&head,struct node*&temp,struct node*&newnode){
  int pos,i=1;
  cout<<"enter position to insert after : ";
  cin>>pos;
newnode=(struct node*)malloc(sizeof (struct node));
cout<<"enter data at position: ";
cin>>newnode->data;
temp=head;
while(i<pos){
temp=temp->next;
i++;
}
 newnode->prev=temp;
 newnode->next=temp->next;
 temp->next=newnode;
 newnode->next->prev=newnode;
   display(head,temp,newnode);
  
}

int main(){
 create();
 display(head,temp,newnode);
 insertatbeg(head,temp,newnode);
 insertatend(head,temp,newnode);
 insertatposition(head,temp,newnode);
 insertafterposition(head,temp,newnode);
 return 0;
}