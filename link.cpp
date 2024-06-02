// ///////////////////////////////////////////////////////////////////
// #include<iostream>
// using namespace std;
// struct node{
//   int data;
//   node*next;
// };
// node*head=0,*temp,*newnode;

// void displaylist(){
// if(head==0){
//   cout<<"No data.No list"<<endl;
// }
// else{
//   temp=head;
//   cout<<"list is: ";
//   while(temp!=0){
//     cout<<temp->data<<"->";
//     temp=temp->next;
//   }
//   cout<<"NULL";
//   cout<<endl;
// }
// }

// void reverselist(){
// node*prevnode,*currentnode,*nextnode;
// prevnode=0;
// currentnode=nextnode=head;
// while(nextnode!=0){
// nextnode=nextnode->next;
// currentnode->next=prevnode;
// prevnode=currentnode;
// currentnode=nextnode;
// }
// head=prevnode;
// displaylist();
// }

// void createlist(){
//   int choice=1;
//   while(choice){
// newnode=new node;
// cout<<"enter data: ";
// cin>>newnode->data;
// newnode->next=0;
// if(head==0){
//   head=temp=newnode;
// }
// else{
//   temp->next=newnode;
//   temp=newnode;
// }
//   cout<<"do you want to continue(0/1): ";
//   cin>>choice;
//   }
// displaylist();


// }
// void insertnodeatbeg(){
// newnode=new node;
// cout<<"enter data: ";
// cin>>newnode->data;
// newnode->next=head;
// head=newnode;
// displaylist();
// }

// void insertnodeatend(){
//   newnode=new node;
//   cout<<"enter data: ";
//   cin>>newnode->data;
//   temp=head;
//   while(temp->next!=0){
// temp=temp->next;
//   }
//  temp->next=newnode;
// newnode->next=0;
// temp=newnode;
// displaylist();

// }
// void insertnodeatpos(){
// int pos,i=1;
// cout<<"enter position: ";
// cin>>pos;
// if(pos==1){
//   insertnodeatbeg();
// }
// else{
//   newnode=new node;
//   cout<<"enter data: ";
//   cin>>newnode->data;
//   temp=head;
//   while(i<pos-1){
//     temp=temp->next;
//     i++;
//   }
//   newnode->next=temp->next;
//   temp->next=newnode;
  
//   displaylist();
  
// }
// }
// void deletenodefrombeg(){
// temp=head;
// head=temp->next;
// free(temp);
// displaylist();

// }

// void deletenodefromend(){
//   node*prevnode;
// temp=head;
// while(temp->next!=0){
//   prevnode=temp;
//   temp=temp->next;
// }
// if(temp==head){
// head=0;
// }
// else{
//   prevnode->next=0;
// }
// free(temp);
// displaylist();
// }

// void deletenodefrompos(){
// int pos;
// cout<<"enter position: ";
// cin>>pos;
// if(pos==1){
//   deletenodefrombeg();
// }
// else{
//   node*nextnode;
//   int i=1;
//   temp=head;
//   while(i<pos-1){
//    temp=temp->next;
//    i++;
//   }
//   nextnode=temp->next;
//   temp->next=nextnode->next;
//   free(nextnode);
//   displaylist();
  
// }
// }
// void lengthoflist(){
// temp=head;
// int count=0;
// while(temp!=0){
//   temp=temp->next;
//   count++;
// }
// cout<<"length of list: "<<count<<endl;
// }
// int main(){
// int choic=1;
// while(1){
// cout<<endl<<"\tMENU"<<endl;
// cout<<"1.Create singly linked list"<<endl;
// cout<<"2.Insert data at beginning"<<endl;
// cout<<"3.Insert data at end"<<endl;
// cout<<"4.Insert data at position"<<endl;
// cout<<"5.Delete data from beginning"<<endl;
// cout<<"6.Delete data from end"<<endl;
// cout<<"7.Delete data from position"<<endl;
// cout<<"8.length of list"<<endl;
// cout<<"9.Reverse list "<<endl;
// cout<<"10.Exit"<<endl;
// cout<<endl<<"enter your choice: ";
// cin>>choic;
// if(choic==10){
//   cout<<"exiting of program"<<endl;
//   break;
// }
// else{
//   switch(choic){
//     case 1: createlist();
//     break;
//     case 2: insertnodeatbeg();
//     break;
//     case 3: insertnodeatend();
//     break;
//     case 4: insertnodeatpos();
//     break;
//     case 5: deletenodefrombeg();
//     break;
//     case 6: deletenodefromend();
//     break;
//     case 7: deletenodefrompos();
//     break;
//     case 8: lengthoflist();
//     break;
//     case 9: reverselist();
//     break;
//     default:cout<<"Invalid choice"<<endl;
//   }
// }
// }
// return 0;
// }////////////////////////////////////////////////////////////////////////



// #include<iostream>
// using namespace std;
// struct node{
//   int data;
//   node*prev;
//   node*next;
// };
// node*head=0,*temp,*newnode;

// void displaylist(){
//   if(head==0){
//     cout<<"No data,No list"<<endl;
//   }
//   else{
// temp=head;
// cout<<"list is: ";
// while(temp!=0){
//   cout<<temp->data<<"->";
//   temp=temp->next;
// }
// cout<<"NULL";
// cout<<endl;
//   }
// }

// void reverselist(){
// node *currentnode,*nextnode;
// currentnode=head;
// while(currentnode!=0){
//  nextnode=currentnode->next;
//  currentnode->next=currentnode->prev;
// currentnode->prev=nextnode;
// currentnode=nextnode;
// }
// currentnode=head;
// head=temp;
// temp=currentnode;
// displaylist();
// }

// void createlist(){
//   int choice=1;
//   while(choice){
// newnode= new node;
// cout<<"enter data: ";
// cin>>newnode->data;
// newnode->prev=0;
// newnode->next=0;
// if(head==0){
//   head=temp=newnode;
// }
// else{
//   temp->next=newnode;
//   newnode->prev=temp;
//   temp=newnode;
// }
// cout<<"do you want to continue(0/1): ";
// cin>>choice;
// }
// displaylist();
// }
// void insertnodeatbeg(){
//   newnode=new node;
// cout<<"enter data: ";
// cin>>newnode->data;
// newnode->prev=0;
// newnode->next=head;
// head->prev=newnode;
// head=newnode;
// displaylist();

// }

// void insertnodeatend(){
// temp=head;
// while(temp->next!=0){
//   temp=temp->next;
// }
// newnode=new node;
// cout<<"enter data: ";
// cin>>newnode->data;
// temp->next=newnode;
// newnode->prev=temp;
// newnode->next=0;
// temp=newnode;
// displaylist();
// }

// void insertnodeatpos(){
// int pos,i=1;
// cout<<"enter position: ";
// cin>>pos;
// if(pos==1){
//   insertnodeatbeg();
// }
// else{
//   temp=head;
//   while(i<pos-1){
//    temp=temp->next;
//    i++;
//   }
//   newnode=new node;
//   cout<<"enter data: ";
//   cin>>newnode->data;
//   temp->next->prev=newnode;
//   newnode->next=temp->next;
//   newnode->prev=temp;
//   temp->next=newnode;
//   displaylist();
// }
// }

// void deletenodefromend(){
// temp=head;
// while(temp->next!=0){
//   temp=temp->next;
// }
// temp->next->prev=0;
// temp->next=0;
// free(temp);
// displaylist();
// }

// void deletenodefrombeg(){
// temp=head;
// temp->next->prev=0;
// head=head->next;
// free(temp);
// displaylist();
// }

// void deletenodefrompos(){
// int pos,i=1;
// cout<<"enter position: ";
// cin>>pos;
// if(pos==1){
//   deletenodefrombeg();
// }
// else{
//   temp=head;
//   while(i<pos-1){
//    temp=temp->next;
//    i++;
//   }
// temp->prev->next=temp->next;
// temp->next->prev=temp->prev;
// free(temp);
// displaylist();
// }
// }

// void lengthoflist(){
// temp=head;
// int count=0;
// while(temp!=0){
//   temp=temp->next;
//   count++;
// }
// cout<<"length of list: "<<count<<endl;
// }
// int main(){
// int choic=1;
// while(1){
// cout<<endl<<"\tMENU"<<endl;
// cout<<"1.Create Doubly linked list"<<endl;
// cout<<"2.Insert data at beginning"<<endl;
// cout<<"3.Insert data at end"<<endl;
// cout<<"4.Insert data at position"<<endl;
// cout<<"5.Delete data from beginning"<<endl;
// cout<<"6.Delete data from end"<<endl;
// cout<<"7.Delete data from position"<<endl;
// cout<<"8.length of list"<<endl;
// cout<<"9.Reverse list "<<endl;
// cout<<"10.Exit"<<endl;
// cout<<endl<<"enter your choice: ";
// cin>>choic;
// if(choic==10){
//   cout<<"exiting of program"<<endl;
//   break;
// }
// else{
//   switch(choic){
//     case 1: createlist();
//     break;
//     case 2: insertnodeatbeg();
//     break;
//     case 3: insertnodeatend();
//     break;
//     case 4: insertnodeatpos();
//     break;
//     case 5: deletenodefrombeg();
//     break;
//     case 6: deletenodefromend();
//     break;
//     case 7: deletenodefrompos();
//     break;
//     case 8: lengthoflist();
//     break;
//     case 9: reverselist();
//     break;
//     default:cout<<"Invalid choice"<<endl;
//   }
// }
// }
// return 0;
// }////////////////////////////////////////////////////////////////////////



#include<iostream>
using namespace std;
struct node{
  int data;
  node*next;
};
node*head=0,*tail,*newnode;
void display(){
 node*temp;
 if(head==0) cout<<"empty";
 else{
  temp=head;
  while(temp->next!=head){
    cout<<temp->data<<"->";
    temp=temp->next;
  }
  cout<<temp->data<<endl;
 }
}
void create(){
  int choice=1;
  while(choice){
newnode=new node;
cout<<"enter data: ";
cin>>newnode->data;
newnode->next=0;
if(head==0){
  head=tail=newnode;
}
else{
  tail->next=newnode;
  tail=newnode;
}
tail->next=head;
cout<<"do you want to ontinue: ";
cin>>choice;
  }
  display();
}
int main(){
create();
return 0;
}