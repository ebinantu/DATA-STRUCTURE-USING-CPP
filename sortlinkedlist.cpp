#include<iostream>
using namespace std;
struct node
{ 
   int data;
   struct node *ptr;
};
typedef struct node NODE;
class linkedlist
{
   NODE *head,*first,*current;
   int count;
   public:
   linkedlist()
  {
    head=nullptr;
    count=0;
  }
  void create();
  void display();
  void sort();
};
void linkedlist::create()
{
  char choice;
  
  do
   {
      count++;
      first=new node;
      cout<<"Enter the Number:";
      cin>>first->data;
      first->ptr=nullptr;
      if(head==nullptr)
      { 
       head=current=first;
      } 
      else 
      { 
       current->ptr=first;
       current=first;
      }
      cout<<"Do you want to insert again(y/n):";
      cin>>choice;
   }while(choice=='y'||choice=='Y');
}
void linkedlist::display()
{ 
   int dup_count=0;
   NODE *temp;
   if(count<1)
   cout<<"no node is present";
   else
   {
     temp=head;
     while(temp!=NULL)
     {
       cout<<"Node:"<<dup_count<<" data:"<<temp->data<<"\n";
       temp=temp->ptr;
       dup_count++;
     }
   }
}
void linkedlist::sort()
{ 
   NODE *current,*nextnode;
   NODE  *min=nullptr;
   for(current=head;current!=nullptr;current=current->ptr)
   { 
      min=current;
      for(nextnode=current->ptr;nextnode!=nullptr;nextnode=nextnode->ptr)
      {
          if(nextnode->data<min->data)
          { 
             int temp=min->data;
             min->data=nextnode->data;
             nextnode->data=temp;
          }
      }
   }
 display();
}
int main()
{
   char a;
   int i;
  linkedlist b;
  do{
   cout<<"Enter the operation you want to perform\n1-create a linked list\n2-sort linkedlist\n3-Display the nodes in linkedlist::::";
  cin>>i;
  switch(i){ 
    case 1:b.create();
           break;
    case 2:b.sort();
           break;
    case 3:b.display();
           break;
           
   }
   cout<<"\ndo you want do any other operation(y/n):";
   cin>>a;
   
   }while(a=='y'||a=='Y');

}

