#include <iostream>
using namespace std;
class stack { 
  int s[20],tos,size;
  public:
  void accept();
  void push();
  void pop();
  void display();
};
void stack::accept(){
  
tos=-1;
cout<<"Enter the Size of the stack:" ;
cin>>size;

} 

void stack::push(){ 
 
 char v;
 while(1)
 { 
    tos++;
    if(tos>=size)
    { 
    cout<<"stack overflow\n";
    break;
    }
    else 
    { 
    cout<<"Enter the Element to push:";
    cin>>s[tos];
    cout<<"\nDo you want to push aqain?(y/n):";
    cin>>v;
    }
     if(v=='n'||v=='N')
    break;
}
cout<<"Popping Completed\n";
}
void stack::pop()
{ 
char v;
int item;
while(1)
{
if(tos<0)
{ 
  cout<<"Stack underflow";
  break;
}
else
{ 
item=s[tos];
tos--;
cout<<"Element:"<<s[tos]<<"is poped\n";

cout<<"Do you want pop again(y/n):";
cin>>v;
if(v!='y'&&v!='Y')
break;
}
}
cout<<"poping completed";
}
void stack::display()
{ 
  int i=0;
  if(tos<0)
   {
      cout<<"Stack is Empty";
   }
   else 
   { 
     for(i=0;i<=tos;i++)
      cout<<s[i]<<"\t";
   }
}
int main()
{ 
stack obj;
char h;
int i;
obj.accept();
do
{ 
  cout<<"what Operation you want to perform 1 for PUSH,2 for POP,3 for DISPLAY:";
  cin>>i;
  switch(i)
  { 
  case 1:obj.push();
         break;
  case 2:obj.pop();
         break;
  case 3:obj.display();
         break;
  }
 cout<<"\nDo you want to do any other operation in stack(y/n): ";
 cin>>h;
 }while(h=='y'||h=='Y');
 return 0;
 
 }

