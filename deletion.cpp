#include<iostream>
using namespace std;
class array
{
     int a[50],n,item;
     public:
     void accept();
     void delet(int);
     void display();
 };
 void array::accept()
 {
     int i;
     cout<<"enter no of elements :";
     cin>>n;
     cout<<"Enter the elements;";
     for(i=0;i<n;i++)
     cin>>a[i];
 }
 void array::display()
 {
    int i;
    cout<<"Entered elements are:";
    for(i=0;i<n;i++)
    cout<<a[i]<<"  ";
    cout<<"\n";
 }
void array::delet(int pos)
{
  int i;
  pos--;
  item=a[pos];
  for(i=pos;i<=n-1;i++)
   a[i]=a[i+1];
  n--;
  }
 int main()
 {
   int pos;
   array b;
   b.accept();
   b.display();
   cout<<"Enter the postion of element to delete:";
   cin>>pos;
   b.delet(pos);
   b.display();
   return 0;
}
