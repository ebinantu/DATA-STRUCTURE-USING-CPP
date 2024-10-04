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
  int count;
  NODE *prevx,*curx,*prevy,*cury;
  NODE *head,*first,*current;
  public:
  linkedlist()
  {
    head=nullptr;
    count=0;
prevx=nullptr;
curx=nullptr;
prevy=nullptr;
cury=nullptr;
  }
  void create();
  void display();
  void swap();
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

void linkedlist::swap(){
    int x, y;
    cout << "Enter Positions of nodes to swap: ";
    cin >> x >> y;

    if (x == y) {
        cout << "Both are the same, no need for swapping." << endl;
        return;
    }
    
    NODE* prevx = nullptr;
    NODE* curx = head;
    NODE* prevy = nullptr;
    NODE* cury = head;

    
    for (int i = 0; curx != nullptr && i < x; ++i) {
        prevx = curx;
        curx = curx->ptr;
    }

    for (int i = 0; cury != nullptr && i < y; ++i) {
        prevy = cury;
        cury = cury->ptr;
    }

    
    if (curx == nullptr || cury == nullptr) {
        cout << "One of the positions is out of bounds." << endl;
        return;
    }

 
    if (prevx != nullptr) {
        prevx->ptr = cury; 
    } else {
        head = cury; 
    }

    if (prevy != nullptr) {
        prevy->ptr = curx;
    } else {
        head = curx; 
    }

   
    NODE* temp = cury->ptr;
    cury->ptr = curx->ptr;
    curx->ptr = temp;
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





int main()
{
   char a;
   int i;
  linkedlist b;
  do{
   cout<<"Enter the operation you want to perform\n1-create a linked list\n2-swap to NODEs\n3-Display the nodes in linkedlist::::";
  cin>>i;
  switch(i){ 
    case 1:b.create();
           break;
    case 2:b.swap();
           break;
    case 3:b.display();
           break;
           
   }
   cout<<"\ndo you want do any other operation(y/n):";
   cin>>a;
   
   }while(a=='y'||a=='Y');

}




  
   
  
