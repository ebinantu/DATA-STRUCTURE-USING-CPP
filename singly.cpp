#include <iostream>
using namespace std;


struct NODE
{
 int data;
 struct NODE *ptr;
};
typedef struct NODE node;


class linkedlist
{
 int count = 0;
 node *head,*first,*current;
 public:
 Operation()
 {first = nullptr;}
 void ins_beg();
 void ins_last();
 void ins_spe();
 void del_beg();
 void del_last();
 void del_spe();
 void display();
 void create();

};


void linkedlist::ins_beg()
{
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

void linkedlist::create()
{
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

void linkedlist::ins_last()
{
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


void linkedlist::ins_spe()
{
char choice;
 int pos,dup_count = 1;
 node *temp;
 if(count<1)
  cout<<"Not sufficient nodes to perform this";
 else
 {
  cout<<"Enter the position to be inserted: ";
  cin>>pos;
  if(pos<1||pos>count)
   cout<<"Only "<<count<<" nodes are present enter valid number";
  else
  {
   do
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
    current = current->ptr;
    dup_count = 1;
    while(current->ptr != nullptr)
     current = current->ptr;
    cout<<"Do you want to perform again(y/n): ";
   }while(choice == 'Y' || choice == 'y');
  }
 }
}


void linkedlist::del_beg()
{
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
   if(count == 1)
    first = nullptr;
   count--;
   cout<<"Do you want to perform again(y/n): ";
   cin>>choice;
  }
 }while(choice == 'y' || choice == 'Y');
}


void linkedlist::del_last()
{
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
   current = temp;
   current->ptr = nullptr;
   if(count == 1)
    first = nullptr;
   count--;
   cout<<"Do you want to perform again(y/n): ";
   cin>>choice;
  }
 }while(choice == 'Y' || choice == 'y');
}


void linkedlist::del_spe()
{
 char choice;
 node *temp,*del;
 int pos,dup_count = 2;
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
    while(dup_count <= pos-1)
    {
     temp = temp->ptr;
     dup_count++;
    }
    
    temp->ptr = del->ptr;
    delete del;
    if(count == 1)
     first = nullptr;
    count--;
    cout<<"Do you want to perform again(y/n): ";
    cin>>choice;
   }
  }
 }while(choice == 'Y' || choice == 'y');
}
void linkedlist::display()
{ 
   int dup_count=1;
   NODE *temp;
   if(count<1)
   cout<<"no node is present";
   else
   {
     temp=first;
     while(temp!=NULL)
     {
       cout<<"Node:"<<dup_count<<" data:"<<temp->data;
       temp=temp->ptr;
       dup_count++;
     }
   }
}
int main()
{
   char a;
   int i;
  linkedlist b;
  do{
  cout<<"enter the operation you want to perform\n0-create a linked list\n1-insertion at begining\n2-insertion at last\n3-insertion at specific location\n4-deletion from  begining\n5-deletion from last()\n6-deletion from specficlocation ()\n7-display():\n" ;
  cin>>i;
  switch(i){ 
    case 0:b.create()
           break;
    case 1:b.ins_beg();
           break;
    case 2: b.ins_last();
           break;
    case 3:b.ins_spe();
           break;
    case 4:b.del_beg();
           break;
    case 5:b.del_last();
           break;
    case 6:b.del_spe();
           break;
    case 7:b.display();
           break;
           
           
   }
   
   cout<<"\ndo you want do any other operation(y/n)";
   cin>>a;
   
   }while(a=='y'||a=='Y');
}
  
 
 


  

 
  
 
 
