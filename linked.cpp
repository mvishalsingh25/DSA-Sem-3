#include<iostream>
using namespace std;

struct node{
    int data;
    node*prev;
    node*next;
};
node*head=0,*temp,*newnode;
int count=0;

void displaylist(){
    // if(head==0){
    //     cout<<"list is empty"<<endl;
    // }
    
temp=head;
cout<<"list is: ";
while(temp->next!=head){
    cout<<temp->data<<"->";
    temp=temp->next;
    count++;
}
cout<<temp->data<<"->";
count++;
cout<<"Null"<<endl;
cout<<"length of list is : "<<count<<endl<<endl;
    }


void InsertDataAtBeg(){
newnode=new node;
cout<<"enter data: ";
cin>>newnode->data;
temp->next=newnode;
head->prev=newnode;
newnode->next=head;
head=newnode;
count=0;
displaylist();
}

void InsertDataAtEnd(){
newnode=new node;
cout<<"enter data: ";
cin>>newnode->data;
newnode->next=temp->next;
temp->next=newnode;
newnode->prev=temp;
count=0;
displaylist();
}

void InsertDataAtPos(){
int pos;
cout<<"enter position: ";
cin>>pos;
if(pos<1||pos>count){
    cout<<"Invalid position"<<endl;
}
else if(pos==1){
    InsertDataAtBeg();
}
else{
    newnode=new node;
    cout<<"enter data: ";
    cin>>newnode->data;
    int i=1;
    temp=head;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
    newnode->prev=temp;
    newnode->next=temp->next;
    temp->next->prev=newnode;
    temp->next=newnode;
    count=0;
    displaylist();

}
}

void  DeleteDataFromBeg(){

// if(head->prev=head->next){
//     head=0;
//     count=0;
//     displaylist();
// }
head->next->prev=temp;
temp->next=head->next;
head=head->next;
count=0;
displaylist();

}

void  DeleteDataFromEnd(){
temp->prev->next=head;
head->prev=temp->prev;
count=0;
displaylist();
}

void  DeleteDataFromPos(){
int pos;
cout<<"enter position: ";
cin>>pos;
if(pos<1||pos>count){
    cout<<"Invalid position"<<endl;
}
else if(pos==1){
    DeleteDataFromBeg();
}
else if(pos==count){
    DeleteDataFromEnd();
}
else{
    int i=1;
    temp=head;
    while(i<pos-1){
        temp=temp->next;
        i++;
    }
  temp->next->next->prev=temp;
  temp->next=temp->next->next;
  count=0;
  displaylist();
  


}

}
int main(){
int choice=1;
while(choice){
    newnode=new node;
    cout<<"enter data: ";
    cin>>newnode->data;
    newnode->prev=0;
    newnode->next=0;
    if(head==0){
        head=temp=newnode;
        newnode->prev=head;
        newnode->next=head;
    }
    else{
        head->prev=newnode;
        temp->next=newnode;
        newnode->prev=temp;
        newnode->next=head;
        temp=newnode;

    }
    cout<<"do you want to continue: ";
    cin>>choice;
}
displaylist();
    int option=1;
    while(option){
    cout<<"Menu: "<<endl;
    cout<<"1.Insert data at beginning"<<endl;
    cout<<"2.Insert data at end"<<endl;
    cout<<"3.Insert data at position"<<endl;
    cout<<"4.Delete data from beginning"<<endl;
    cout<<"5.Delete data from end "<<endl;
    cout<<"6.Delete data from position"<<endl;
    cout<<"7.Exit"<<endl;
    cout<<"enter your choice: ";
    cin>>option;
    if(option==7){
        cout<<"Exiting of program"<<endl;
        break;
    }
    else{
        switch(option){
            case 1: InsertDataAtBeg();
            break;
            case 2: InsertDataAtEnd();
            break;
            case 3: InsertDataAtPos();
            break;
            case 4: DeleteDataFromBeg();
            break;
            case 5: DeleteDataFromEnd();
            break;
            case 6: DeleteDataFromPos();
            break;
            
                    }
    }
    }
return 0;
}
