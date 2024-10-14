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
  void concatenate(linkedlist b);
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
void linkedlist::concatenate(linkedlist b)
{
   NODE *temp;
   if(head==NULL&&b.head==NULL)
   {
    cout<<"Both LinkedList Are Empty\n";
   }
   else 
   {
     temp=head;
    while(temp->ptr!=NULL)
    { 
      temp=temp->ptr;
    }
    temp->ptr=b.head;
    cout<<"SUCCESSFULL\n";
   }
}
int main()
{
 linkedlist a,b;
 cout<<"CREATE THE FIRST LINKEDLIST\n";
 a.create();
 cout<<"first LINKED LIST\n";
  a.display();
  cout<<"CREATE THE SECOND LINKEDLIST\n";
 b.create();
  cout<<"SECOND LINKED LIST\n";
  b.display();
  a.concatenate(b);
 cout<<"CONCATENATEd linked list\n";
 a.display();
 }
    
     
