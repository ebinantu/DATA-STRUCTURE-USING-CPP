#include <iostream>
using namespace std;
struct NODE{
 int data;
 struct NODE *ptr;
};
typedef struct NODE node;
class linkedlist{
 int count = 0;
 node *head,*first,*current;
 public:
 linkedlist()
 {first = nullptr;}
 void ins_beg();
 void ins_last();
 void ins_spe();
 void del_beg();
 void del_last();
 void del_spe();
 void display();
 void create();
 void operations();
};
void linkedlist::ins_beg(){
 char choice;
 do
 {
  count++;
  head = new node;
  cout<<"Enter the number: ";
  cin>>head ->data;
  head ->ptr = nullptr;
  if(first == nullptr)
   first = current = head
   ;
  else
  {
   head ->ptr = first;
   first = head ;
  }
  cout<<"Do you want to enter again(y/n): ";
  cin>>choice;
 }while(choice == 'Y' || choice == 'y');
}
void linkedlist::create(){
ins_last();
}
void linkedlist::ins_last(){
 char choice;
 do
 {
  count++;
  head  = new node;
  cout<<"Enter the number: ";
  cin>>head ->data;
  head ->ptr = nullptr;
  if(first == nullptr)
   first = current = head ;
  else
  {
   current->ptr = head ;
   current = head ;
  }
  cout<<"\nDo you want to enter again(y/n): ";
  cin>>choice;
 }while(choice == 'Y' || choice == 'y');
}
void linkedlist::ins_spe(){
char choice;
 int pos,dup_count = 1;
 node *temp,tempc;
 if(count<1)
  cout<<"Not sufficient nodes to perform this";
 else
 {
  do{
  cout<<"Enter the position to be inserted: ";
  cin>>pos;
  if(pos<1||pos>count){
   cout<<"Only "<<count<<" nodes are present enter valid number";
   }
    if(pos == 1)
    {
       ins_beg();
    }
  else
  {
    count++;
    head  = new node;
    cout<<"Enter the data: ";
    cin>>head->data;
    head ->ptr = nullptr;
     tempc = first;
    while(dup_count < pos-1)
    {  
     tempc = tempc->ptr;
     dup_count++;
    }
    temp = tempc->ptr;
    tempc->ptr = head ;
    head ->ptr = temp;
   dup_count=1;
   }
    cout<<"Do you want to perform again(y/n): ";
    cin>>choice;
  
   }while(choice == 'Y' || choice == 'y');
 }
}
void linkedlist::del_beg(){
 char choice;
 node *temp = nullptr;
 do
 {
  if(count<1)
   cout<<"Not enough nodes to perform operation";
  else
  {
   temp = first;
   first = first->ptr;
   delete temp;
   count--;
   if(count < 1)
    first = nullptr;
   cout<<"Do you want to perform again(y/n): ";
   cin>>choice;
  }
 }while(choice == 'y' || choice == 'Y');
}
void linkedlist::del_last(){
 char choice;
 node *temp = nullptr;
 do
 {
  if(count<1)
   cout<<"Not enough nodes to perform operation";
  else
  {
   temp = first;
   while(temp->ptr != current)
    temp = temp->ptr;
   delete current;
   count--;
   current = temp;
   current->ptr = nullptr;
   if(count< 1)
    first = nullptr;
   cout<<"Do you want to perform again(y/n): ";
   cin>>choice;
  }
 }while(choice == 'Y' || choice == 'y');
}
void linkedlist::del_spe(){
 char choice;
 node *temp,*del;
 int pos,dup_count = 2;
  if(count<1)
   cout<<"Not enough nodes to perform operation";
   choice='n';
  else
  {
    do{
   cout<<"Enter the position to delete: ";
   cin>>pos;
   if(pos<1 || pos>count)
    cout<<"Enter valid number";
   else
   {
    temp = first;
    while(dup_count < pos-1)
    {
     temp = temp->ptr;
     dup_count++;
    }
    del=temp->ptr;
    temp->ptr=del->ptr;
    delete del;
    if(count < 1)
     first = nullptr;
     count--;
    dup_count=2;
    cout<<"Do you want to perform again(y/n): ";
    cin>>choice;
   }
  }while(choice == 'Y' || choice == 'y');
}}
void linkedlist::display(){ 
   int dup_count=1;
   NODE *temp;
   if(count<1)
   cout<<"no node is present";
   else
   {
     temp=first;
     while(temp!=NULL)
     {
       cout<<"Node:"<<dup_count<<" data:"<<temp->data<<endl;
       temp=temp->ptr;
       dup_count++;
     }
   }
}
void linkedlist::operations(){
    char a;
   int i;
do{
  cout<<"enter the operation you want to perform\n0-create a linked list\n1-insertion at begining\n2-insertion at last\n3-insertion at specific location\n4-deletion from  begining\n5-deletion from last\n6-deletion from specficlocation \n7-display:" ;
  cin>>i;
  switch(i){ 
    case 0:create();
           break;
    case 1:ins_beg();
           break;
    case 2:ins_last();
           break;
    case 3:ins_spe();
           break;
    case 4:del_beg();
           break;
    case 5:del_last();
           break;
    case 6:del_spe();
           break;
    case 7:display();
           break;
    default:cout<<"wrong input";       
           
   }
   
   cout<<"Do want do any other operation(y/n)";
   cin>>a;
   
   }while(a=='y'||a=='Y');
}
int main(){
   char a;
   int i;
  linkedlist b;
  b.operations();
}#include <iostream>
using namespace std;
struct NODE{
 int data;
 struct NODE *ptr;
};
typedef struct NODE node;
class linkedlist{
 int count = 0;
 node *head,*first,*current;
 public:
 linkedlist()
 {first = nullptr;}
 void ins_beg();
 void ins_last();
 void ins_spe();
 void del_beg();
 void del_last();
 void del_spe();
 void display();
 void create();
 void operations();
};
void linkedlist::ins_beg(){
 char choice;
 do
 {
  count++;
  head = new node;
  cout<<"Enter the number: ";
  cin>>head ->data;
  head ->ptr = nullptr;
  if(first == nullptr)
   first = current = head
   ;
  else
  {
   head ->ptr = first;
   first = head ;
  }
  cout<<"Do you want to enter again(y/n): ";
  cin>>choice;
 }while(choice == 'Y' || choice == 'y');
}
void linkedlist::create(){
ins_last();
}
void linkedlist::ins_last(){
 char choice;
 do
 {
  count++;
  head  = new node;
  cout<<"Enter the number: ";
  cin>>head ->data;
  head ->ptr = nullptr;
  if(first == nullptr)
   first = current = head ;
  else
  {
   current->ptr = head ;
   current = head ;
  }
  cout<<"\nDo you want to enter again(y/n): ";
  cin>>choice;
 }while(choice == 'Y' || choice == 'y');
}
void linkedlist::ins_spe(){
char choice;
 int pos,dup_count = 1;
 node *temp;
 if(count<1)
  cout<<"Not sufficient nodes to perform this";
 else
 {
  do{
  cout<<"Enter the position to be inserted: ";
  cin>>pos;
  if(pos<1||pos>count){
   cout<<"Only "<<count<<" nodes are present enter valid number";
   }
  else
  {
    count++;
    head  = new node;
    cout<<"Enter the data: ";
    cin>>head->data;
    head ->ptr = nullptr;
    current = first;
    while(dup_count < pos-1)
    {  
     current = current->ptr;
     dup_count++;
    }
    temp = current->ptr;
    current->ptr = head ;
    head ->ptr = temp;
   }
    cout<<"Do you want to perform again(y/n): ";
    cin>>choice;
  
   }while(choice == 'Y' || choice == 'y');
 }
}
void linkedlist::del_beg(){
 char choice;
 node *temp = nullptr;
 do
 {
  if(count<1)
   cout<<"Not enough nodes to perform operation";
  else
  {
   temp = first;
   first = first->ptr;
   delete temp;
   count--;
   if(count < 1)
    first = nullptr;
   cout<<"Do you want to perform again(y/n): ";
   cin>>choice;
  }
 }while(choice == 'y' || choice == 'Y');
}
void linkedlist::del_last(){
 char choice;
 node *temp = nullptr;
 do
 {
  if(count<1)
   cout<<"Not enough nodes to perform operation";
  else
  {
   temp = first;
   while(temp->ptr != current)
    temp = temp->ptr;
   delete current;
   count--;
   current = temp;
   current->ptr = nullptr;
   if(count< 1)
    first = nullptr;
   cout<<"Do you want to perform again(y/n): ";
   cin>>choice;
  }
 }while(choice == 'Y' || choice == 'y');
}
void linkedlist::del_spe(){
 char choice;
 node *temp,*del;
 int pos,dup_count = 1;
 do
 {
  if(count<1)
   cout<<"Not enough nodes to perform operation";
  else
  {
   cout<<"Enter the position to delete: ";
   cin>>pos;
   if(pos<1 || pos>count)
    cout<<"Enter valid number";
   else
   {
    temp = first;
    while(dup_count < pos-1)
    {
     temp = temp->ptr;
     dup_count++;
    }
    del=temp->ptr;
    temp->ptr=del->ptr;
    delete del;
     count--;
    if(count < 1)
     first = nullptr;
    cout<<"Do you want to perform again(y/n): ";
    cin>>choice;
   }
  }
 }while(choice == 'Y' || choice == 'y');
}
void linkedlist::display(){ 
   int dup_count=1;
   NODE *temp;
   if(count<1)
   cout<<"no node is present";
   else
   {
     temp=first;
     while(temp!=NULL)
     {
       cout<<"Node:"<<dup_count<<" data:"<<temp->data<<endl;
       temp=temp->ptr;
       dup_count++;
     }
   }
}
void linkedlist::operations(){
    char a;
   int i;
do{
  cout<<"enter the operation you want to perform\n0-create a linked list\n1-insertion at begining\n2-insertion at last\n3-insertion at specific location\n4-deletion from  begining\n5-deletion from last\n6-deletion from specficlocation \n7-display:" ;
  cin>>i;
  switch(i){ 
    case 0:create();
           break;
    case 1:ins_beg();
           break;
    case 2:ins_last();
           break;
    case 3:ins_spe();
           break;
    case 4:del_beg();
           break;
    case 5:del_last();
           break;
    case 6:del_spe();
           break;
    case 7:display();
           break;
    default:cout<<"wrong input";       
           
   }
   
   cout<<"Do want do any other operation(y/n)";
   cin>>a;
   
   }while(a=='y'||a=='Y');
}
int main(){
   char a;
   int i;
  linkedlist b;
  b.operations();
}
