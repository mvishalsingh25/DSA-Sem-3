// #include<iostream>
// using namespace std;

// struct node{
//     int data;
//      node*left,*right;
// };

// struct node*create(){
//     int x;
//     node*newnode;
//     newnode=(node*)malloc (sizeof(node));
//     cout<<"enter data(-1 for no node): ";
//     cin>>x;
//     if(x==-1){
//         return 0;
//     }
//     newnode->data=x;
//     cout<<"enter left child of "<<x<<": ";
//     newnode->left=create();
//     cout<<"enter right child of "<<x<<": ";
//     newnode->right=create();
//     return newnode;
// }

// int main(){
// node*root;
// root=0;
// root=create();
//  return 0;
// }


// #include<iostream>
// using namespace std;
// struct node{
//     int data;
//     node*next;
// };
// node*head=0,*temp,*newnode;
// int count=0;


// void displaylist(){
//     if(head==0){
//         cout<<"No data";
//     }
//     else{
//         cout<<"list is: ";
//         temp=head;
//         while(temp!=0){
//             cout<<temp->data<<"->";
//             temp=temp->next;
//             count++;
//         }
//         cout<<"NULL"<<endl;
//         cout<<"length of list : "<<count<<endl<<endl;
//     }
// }

// void InsertDataAtBeg(){
// newnode=new node;
// cout<<"enter data at beginning: ";
// cin>>newnode->data;
// newnode->next=head;
// head=newnode;
// count=0;
// displaylist();
// }

// void InsertDataAtEnd(){
//     newnode=new node;
//     cout<<"enter data at end: ";
//     cin>>newnode->data;
// temp=head;
// while(temp->next!=0){
//     temp=temp->next;
// }
// temp->next=newnode;
// newnode->next=0;
// count=0;
// displaylist();
// }

// void InsertDataAtPos(){
// int pos;
// cout<<"enter position: ";
// cin>>pos;
// if(pos<1 ||  pos>count){
//     cout<<"Invalid position"<<endl;
// }
// else if(pos==1){
    
//     InsertDataAtBeg();
// }
// // else if(pos==count){
// //     InsertDataAtEnd();////at end 
// // }
// else{
//     newnode=new node;
//     cout<<"enter data: ";
//     cin>>newnode->data;
//     int i=1;
//     temp=head;
//     while(i<pos-1){
//     temp=temp->next;
//     i++;
//     }
//     newnode->next=temp->next;
//     temp->next=newnode;
//     count=0;
//     displaylist();
// }
// }

// void  DeleteDataFromBeg(){
//     temp=head;
// head=head->next;
// free(temp);
// count=0;
// displaylist();

// }

// void  DeleteDataFromEnd(){
// temp=head;
// node *prev;
// while(temp->next!=0){
//       prev=temp;
//     temp=temp->next;
// }
// if(temp=head){
//     head=0;//////remember
// }
// else{
// prev->next=0;
// }
// free(temp);
// count=0;
// displaylist();

// }

// void  DeleteDataFromPos(){
// int pos;
// cout<<"enter position: ";
// cin>>pos;
// if(pos<1 || pos>count){
//     cout<<"Invalid position"<<endl;
// }
// else if(pos==1){
    
//     DeleteDataFromBeg();
// }
// else if(pos==count){
//     DeleteDataFromEnd();
// }
// else{
//     int i=1;
//     temp=head;
//     node*prev;
//     while(i<pos){
//         prev=temp;
//         temp=temp->next;
//         i++;
//     }
//     prev->next=temp->next;
//     free(temp);
//     count=0;
//     displaylist();
// }
// }

// int main(){
//     int choice=1;
//     while(choice){
// newnode=new node;
// cout<<"enter data: ";
// cin>>newnode->data;
// newnode->next=0;
// if(head==0){
//     head=temp=newnode;
// }
// else{
//      temp->next=newnode;
//     temp=newnode;
// }
// cout<<"do you want to continue(0/1): ";
// cin>>choice;
//     }
//     displaylist();
//     int option=1;
//     while(option){
//     cout<<"Menu: "<<endl;
//     cout<<"1.Insert data at beginning"<<endl;
//     cout<<"2.Insert data at end"<<endl;
//     cout<<"3.Insert data at position"<<endl;
//     cout<<"4.Delete data from beginning"<<endl;
//     cout<<"5.Delete data from end "<<endl;
//     cout<<"6.Delete data from position"<<endl;
//     cout<<"7.Exit"<<endl;
//     cout<<"enter your choice: ";
//     cin>>option;
//     if(option==7){
//         cout<<"Exiting of program"<<endl;
//         break;
//     }
//     else{
//         switch(option){
//             case 1: InsertDataAtBeg();
//             break;
//             case 2: InsertDataAtEnd();
//             break;
//             case 3: InsertDataAtPos();
//             break;
//             case 4: DeleteDataFromBeg();
//             break;
//             case 5: DeleteDataFromEnd();
//             break;
//             case 6: DeleteDataFromPos();
//             break;
            
//                     }
//     }
//     }
// return 0;
// }


// #include<iostream>
// using namespace std;
// struct node{
//     int data;
//     node*prev;
//     node*next;
// };
// node*head=0,*temp,*newnode;

// int count=0;
// void displaylist2(){
// temp=head;
// cout<<"list is: ";
// while(temp!=0){
//     cout<<temp->data<<"->";
//     temp=temp->next;
//     count++;
// }
// cout<<"Null"<<endl;
// cout<<"length is : "<<count<<endl<<endl;
// }

// void InsertDataAtBeg(){
// newnode=new node;
// cout<<"enter data: ";
// cin>>newnode->data;
// newnode->prev=0;
// newnode->next=0;
// head->prev=newnode;
// newnode->next=head;
// head=newnode;

// count=0;
// displaylist2();
// }

// void InsertDataAtEnd(){
// newnode=new node;
// cout<<"enter data: ";
// cin>>newnode->data;
// newnode->prev=0;
// newnode->next=0;
// temp=head;
// while(temp->next!=0){
//     temp=temp->next;
// }
// temp->next=newnode;
// newnode->prev=temp;
// temp=newnode;
// count=0;
// displaylist2();
// }

// void InsertDataAtPos(){

// int pos;
// cout<<"enter position: ";
// cin>>pos;
// if(pos<1 ||pos>count ){
// cout<<"Invalid position"<<endl;
// }
// else if(pos==1){
//     InsertDataAtBeg();
// }
// // else if(pos==count){
// //     InsertDataAtEnd();
// // }
// else{
//     newnode=new node;
//     cout<<"enter data: ";
//     cin>>newnode->data;
//     newnode->prev=0;
//     newnode->next=0;
//     int i=1;
//     temp=head;
//     node*prevnode;
//     while(i<pos){
//     prevnode=temp;
//       temp=temp->next;
//       i++;
//     }
//     temp->prev=newnode;
//     prevnode->next=newnode;
//     newnode->prev=prevnode;
//     newnode->next=temp;
//     count=0;
//    displaylist2();
// }
// }

// void DeleteDataFromBeg(){
// temp=head;
// temp->next->prev=0;
// head=head->next;
// free(temp);
// count=0;
// displaylist2();
// }

// void DeleteDataFromEnd(){
// temp=head;
// while(temp->next!=0){
//     temp=temp->next;
// }
// temp->prev->next=0;
// free(temp);
// count=0;
// displaylist2();
// }

// void DeleteDataFromPos(){
// int pos;
// cout<<"enter position: ";
// cin>>pos;
// if(pos<1 ||pos>count ){
// cout<<"Invalid position"<<endl;
// }
// else if(pos==1){
//     DeleteDataFromBeg();
// }
// else if(pos==count){
//     DeleteDataFromEnd();
// }
// else{
//     int i=1;
//     temp=head;
//     node*prevnode;
//     while(i<pos){
//         prevnode=temp;
//         temp=temp->next;
//         i++;
//     }
//     node*nextnode=temp->next;
//     nextnode->prev=prevnode;
//     prevnode->next=nextnode;
//     free(temp);
//     count=0;
//     displaylist2();
    
// }

// }
// int main(){
// int choice=1;
// while(choice){
//     newnode=new node;
//     cout<<"enter data: ";
//     cin>>newnode->data;
//     newnode->prev=0;
//     newnode->next=0;
//     if(head==0){
//         head=temp=newnode;
//     }
//     else{
//         newnode->prev=temp;
//         temp->next=newnode;
//         temp=newnode;
//     }
//     cout<<"do you want to continue: ";
//     cin>>choice;
// }
// displaylist2();
//     int option=1;
//     while(option){
//     cout<<"Menu: "<<endl;
//     cout<<"1.Insert data at beginning"<<endl;
//     cout<<"2.Insert data at end"<<endl;
//     cout<<"3.Insert data at position"<<endl;
//     cout<<"4.Delete data from beginning"<<endl;
//     cout<<"5.Delete data from end "<<endl;
//     cout<<"6.Delete data from position"<<endl;
//     cout<<"7.Exit"<<endl;
//     cout<<"enter your choice: ";
//     cin>>option;
//     if(option==7){
//         cout<<"Exiting of program"<<endl;
//         break;
//     }
//     else{
//         switch(option){
//             case 1: InsertDataAtBeg();
//             break;
//             case 2: InsertDataAtEnd();
//             break;
//             case 3: InsertDataAtPos();
//             break;
//             case 4: DeleteDataFromBeg();
//             break;
//             case 5: DeleteDataFromEnd();
//             break;
//             case 6: DeleteDataFromPos();
//             break;
            
//                     }
//     }
//     }
// return 0;
// }


#include<iostream>
using namespace std;

struct node{
int data;
node*next;
};
node*head=0,*temp,*newnode;
int count=0;

void displaylist3(){
    temp=head;
while(temp->next!=head){
    cout<<temp->data<<"->";
    temp=temp->next;
    count++;
}
cout<<temp->data<<"->";
count++;
cout<<"Null"<<endl;
cout<<"length of list: "<<count<<endl<<endl;

}


void InsertDataAtBeg(){
newnode=new node;
cout<<"enter data: ";
cin>>newnode->data;
newnode->next=head;
head=newnode;
temp->next=newnode;

count=0;
displaylist3();

}

void InsertDataAtEnd(){
newnode=new node;
cout<<"enter data: ";
cin>>newnode->data;
temp->next=newnode;
newnode->next=head;
count=0;
displaylist3();
}

void InsertDataAtPos(){
int pos;
cout<<"enter position: ";
cin>>pos;
if(pos<1 ||pos>count ){
cout<<"Invalid position"<<endl;
}
else if(pos==1){
    InsertDataAtBeg();
}
// else if(pos==count){
//     InsertDataAtEnd();
// }
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
   newnode->next=temp->next;
    temp->next=newnode;
    count=0;
    displaylist3();
}
}

void  DeleteDataFromBeg(){
head=head->next;
temp->next=head;

count=0;
displaylist3();
}

void  DeleteDataFromEnd(){

temp=head;
node*prev;
while(temp->next!=head){
    prev=temp;
    temp=temp->next;
}
prev->next=head;
count=0;

displaylist3();

}

void  DeleteDataFromPos(){
int pos;
cout<<"enter position: ";
cin>>pos;
if(pos<1 ||pos>count ){
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
    node*previous;
    while(i<pos){
        previous=temp;
        temp=temp->next;
        i++;
    }
  previous->next=temp->next;
  free(temp);
  count=0;
  displaylist3();
}
}
int main(){
int choice=1;
while(choice){
    newnode=new node;
    cout<<"enter data: ";
    cin>>newnode->data;
    newnode->next=0;
    if(head==0){
        head=temp=newnode;
        newnode->next=head;
    }
    else{
        temp->next=newnode;
        newnode->next=head;
        temp=newnode;
    }
    cout<<"do you want to continue: ";
    cin>>choice;
}
displaylist3();
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