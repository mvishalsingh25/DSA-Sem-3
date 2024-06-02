// #include<iostream>
// using namespace std;
// // class node{
// //      public:
// //    int val;
// //    node*next;
  
// //    node(int data){
// //       val=data;
// //       next=NULL;
// //    }
// // };
// // int main(){
// //   node*n=new node(5);
// //   cout<<n->val<<" "<<n->next<<endl;
// // return 0;
// // }

// struct node{
//  int data ;
//  struct node*next;
// };

// void displaynodes(struct node*head , struct node*temp,struct node*newnode){
//   int count=0;
//   temp=head;
// while(temp!=0){
  
//   cout<<temp->data<<"->";
//   temp=temp->next;
//   count++;
// }
// cout<<"NULL";
// cout<<endl;
//   cout<<count<<endl;
// }
// int main(){
//   int choice;
// struct node *head,*newnode,*temp;;
// head=0;  while(choice){
// newnode=(struct node*)malloc(sizeof(struct node));
// cout<<"enter data: ";
// cin>>newnode->data;
// newnode->next=0;
// if(head==0){
// head=temp=newnode;
// }
// else {
//   temp->next=newnode;
//   temp=newnode;
// }
  
// cout<<"do you want to continue(0/1): ";
// cin>>choice;
//   }

// displaynodes(head,temp,newnode);

// newnode=(struct node*)malloc(sizeof(struct node));
//   cout<<"enter data to insert at beginning:";
//   cin>>newnode->data;
//    newnode->next=head;
//    head=newnode;
 

//    displaynodes(head,temp,newnode);
   

// newnode=(struct node*)malloc(sizeof(struct node));
// cout<<"enter data to insert at end:";
//   cin>>newnode->data;
// newnode->next=0;
// temp=head;
// while(temp->next!=0){
//   temp=temp->next;
// }
// temp->next=newnode;

// displaynodes(head,temp,newnode);

// int pos,i=1;
// cout<<"enter position: ";
// cin>>pos;
// if(pos>6){
//   cout<<"invalid position";
// }
// else{
//   temp=head;
//   while(i<pos-1){
//     temp=temp->next;
//     i++;
//   }
//   newnode=(struct node*)malloc(sizeof(struct node));
// cout<<"enter data to insert at position:";
//   cin>>newnode->data;
//   newnode->next=temp->next;
//   temp->next=newnode;
// displaynodes(head,temp,newnode);

// // struct node*temp;///delete from begg
// temp=head;
// head=head->next;
// free(temp);
// displaynodes(head,temp,newnode);

// //delete from emd
// struct node *prevnode;
// temp=head;
// while(temp->next!=0){
//   prevnode=temp;
//   temp=temp->next;
// }
// if(temp==head){
//   head=0;
// }
// else{
//   prevnode->next=0;
// }
// free(temp);
// displaynodes(head,temp,newnode);
// }
// //delete from particular position
// struct node*nextnode;
// int position,j=1;
// temp=head;
// cout<<"enter position to delete: ";
// cin>>position;
// while(j<position-1){
//   temp=temp->next;
//   j++;
// }
// nextnode=temp->next;
// temp->next=nextnode->next;
// free(nextnode);
// displaynodes(head,temp,newnode);
// return 0;
// }

#include<iostream>
using namespace std;
struct node{
   int data;
   struct node*next; 
};

void displaylist(struct node*&head,struct node*&temp,struct node*&newnode){
    temp=head;
  int count=0;
  while(temp!=0){
     cout<<temp->data<<"->";
     temp=temp->next;
    count ++;
  }
  cout<<"NULL"<<endl;
  cout<<count<<endl;
}

void insertnodeatbegg( node *&head,struct node*&temp,struct node*&newnode){
    newnode=(struct node*)malloc(sizeof(struct node));   
    cout<<"enter data at beginning:  ";
    cin>>newnode->data;
    newnode->next=head;
    head=newnode;
    cout<<"after insert at beggining list is : ";
    displaylist(head,temp,newnode);
}

void insertnodeatend( node *&head,struct node*&temp,struct node*&newnode){
    newnode=(struct node*)malloc(sizeof(struct node));
   cout<<"enter data at end : ";
   cin>>newnode->data;
    newnode->next=0;
    temp=head;
    while(temp->next!=0){
      temp=temp->next;
    }
    temp->next=newnode;
    cout<<" after insert at end list is : ";
    displaylist(head,temp,newnode);
}

void insertatposition( node *&head,struct node*&temp,struct node*&newnode){
    int pos,i=1;
    cout<<"enter position to insert data : ";
    cin>>pos;
    temp=head;
    while(i<pos-1){////////vvvvvvvvvvvvvvvv
     temp=temp->next;
        i++;
    }
     newnode=(struct node*)malloc(sizeof(struct node));
   
   cout<<"enter data at position : ";
   cin>>newnode->data;
   newnode->next=temp->next;
   temp->next=newnode;
   cout<<"after insert at position list is : ";
   displaylist(head,temp,newnode);
}

void deletenodeatbegg( node *&head,struct node*&temp,struct node*&newnode){
    temp=head;
    head=head->next;
    free(temp);
    cout<<" after delete at beginning list is : ";
    displaylist(head,temp,newnode);
}

void deletenodeatend( node *&head,struct node*&temp,struct node*&newnode){
  struct node*prevnode;
  temp=head;
  while(temp->next!=0){
    prevnode=temp;
    temp=temp->next;
  }
  if(temp==head){
    head=0;

  }
  else{
    prevnode->next=0;
  }
  free(temp);
  cout<<"after delete at end list is : ";
  displaylist(head,temp,newnode);
}

void deleteatposition(node *&head,struct node*&temp,struct node*&newnode){
  struct node*nextnode;
 int pos,i=1;
 cout<<"enter position to delete: ";
 cin>>pos;
 temp=head;
 while(i<pos-1){
    temp=temp->next;
    i++;
 }
nextnode= temp->next;
temp->next=nextnode->next;
free(nextnode);
cout<<"after deleting at position list is : ";
displaylist(head,temp,newnode);
}

void displayreverselist(struct node*&head,struct node *&currentnode,struct node* & nextnode){
  currentnode=head;
  int count=0;
  while(currentnode!=0){
     cout<<currentnode->data<<"->";
     currentnode=currentnode->next;
    count ++;
  }
  cout<<"NULL"<<endl;
  cout<<count<<endl;
}
void reversenode(node *&head,struct node*&temp,struct node*&newnode){
struct node *prevnode,*currentnode,*nextnode;
    prevnode=0;
    currentnode=nextnode=head;
    while(nextnode!=0){
      nextnode=nextnode->next;
      currentnode->next=prevnode;
      prevnode=currentnode;
      currentnode=nextnode;
    }
    head =prevnode;
    cout<<"reverse list is : ";
    displayreverselist(head,currentnode,nextnode);
}

int main(){
struct node*head,*temp,*newnode;
int choice;
head=0;
while(choice){
newnode=(struct node*)malloc(sizeof(struct node));
cout<<"enter data: ";
cin>>newnode->data;
newnode->next=0;
if(head==0){
  head=temp=newnode;
}
else{
  temp->next=newnode;
  temp=newnode;
}
cout<<"do you want to continue(0/1): ";
cin>>choice;
}

displaylist(head,temp,newnode);
insertnodeatbegg(head,temp,newnode);
insertnodeatend(head,temp,newnode);
insertatposition(head,temp,newnode);
deletenodeatbegg(head,temp,newnode);
deletenodeatend(head,temp,newnode);
deleteatposition(head,temp,newnode);
reversenode(head,temp,newnode);
return 0;
}

// #include<iostream>
// using namespace std;
// struct node{
//     int data;
//     node*next;
// };
// node*head=0,*newnode,*temp;

// void displaylist(){
// node*temp=head;
// int count=0;
// while(temp!=0){
//     cout<<temp->data<<" ";
//     temp=temp->next;
//     count++;
// }
// cout<<endl;
// cout<<count<<endl;

// }

// void insertnodeatbeg(){
// int x;
//  cout<<"enter data: ";
//  cin>>x;
// newnode=(node*)malloc(sizeof(node));
// newnode->data=x;
// newnode->next=head;
// head=newnode;
// displaylist();
// }

// void insertnodeatend(){
//   newnode=(node*)malloc(sizeof(node));
//    cout<<"enter data at end : ";
//    cin>>newnode->data;
//     newnode->next=0;
//     temp=head;
//     while(temp->next!=0){
//       temp=temp->next;
//     }
//     temp->next=newnode;
//     cout<<" after insert at end list is : ";
//     displaylist();

// }

// void insertnodeatpos(){

// }

// void deletenodefrombeg(){

// }

// void deletenodefromend(){

// }

// void deletenodefrompos(){

// }
// int main(){

// int choice=1;
// while(choice!=7){
//     cout<<"Menu"<<endl;
//     cout<<"1. insert data at beg"<<endl;
//     cout<<"2. insert data at end"<<endl;
//     cout<<"3. insert data at position"<<endl;
//     cout<<"4. delete data from beg"<<endl;
//     cout<<"5. delete data from end"<<endl;
//     cout<<"6. delete data from position"<<endl;
//     cout<<"7. Exit"<<endl;
//     cout<<endl;
//     cout<<"enter your choice: ";
//     cin>>choice;
//    switch(choice){
//     case 1 : insertnodeatbeg();
//     break;
//     case 2: insertnodeatend();
//     break;
//     case 3: insertnodeatpos();
//     break;
//     case 4: deletenodefrombeg();
//     break;
//     case 5: deletenodefromend();
//     break;
//     case 6: deletenodefrompos();
//     break;

//    }
// }
// return 0;
// }