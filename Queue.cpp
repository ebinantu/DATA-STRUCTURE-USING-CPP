#include <iostream>
using namespace std;
class queue{ 
  int s[20],size,front,rear;
  public:
  queue()
  { 
      front=0;
      rear=-1;
  }
  void accept();
  void insertion();
  void deletion();
  void display();
};
void queue::accept(){
  rear=-1;
  front=0;
cout<<"Enter the Size of the Queue:" ;
cin>>size;

} 

void queue::insertion(){ 
 
 char v;
 while(1)
 { 
    rear++;
    if(rear>=size)
    { 
    cout<<"Queue overflow\n";
    break;
    }
    else 
    { 
    cout<<"Enter the Element to push:";
    cin>>s[rear];
    cout<<"\nDo you want to push aqain?(y/n):";
    cin>>v;
    }
     if(v=='n'||v=='N')
    break;
}
cout<<"Popping Completed\n";
}
void queue::deletion()
{ 
char v;
int item;
while(1)
{
if(front>rear-1)
{ 
  cout<<"Queue underflow";
  break;
}
else
{ 
item=s[front];
cout<<"Element:"<<s[front]<<"is poped\n";
  if(front==rear)
  {
    rear=-1;
    front=0;
  } else{
front++;
  }
cout<<"Do you want pop again(y/n):";
cin>>v;
if(v!='y'&&v!='Y')
break;
}
}
cout<<"poping completed";
}
void queue::display()
{ 
  int i=0;
  if(rear=-1)
   {
      cout<<"Queue is Empty";
   }
   else 
   { 
     for(i=front;i<rear;i++)
      cout<<s[i]<<"\t";
   }
}
int main()
{ 
queue obj;
char h;
int i;
obj.accept();
do
{ 
  cout<<"what Operation you want to perform 1 for PUSH,2 for POP,3 for DISPLAY:";
  cin>>i;
  switch(i)
  { 
  case 1:obj.insertion();
         break;
  case 2:obj.deletion();
         break;
  case 3:obj.display();
         break;
  }
 cout<<"\nDo you want to do any other operation in Queue(y/n): ";
 cin>>h;
 }while(h=='y'||h=='Y');
 return 0;
 
 }
