#include<iostream>
using namespace std;
class array
{
     int a[50],n;
     public:
     void accept();
     void insert(int,int);
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
 }
 void array::insert(int pos,int data)
 {
   int i;
   pos--;
   for(i=n-1;i>=pos;i--)
   a[i+1]=a[i];
   a[pos]=data;
   n=n+1;
 }
 int main()
 {
  int pos,data;
  array b;
  b.accept();
  b.display();
  cout<<"\nenter the postion and data to insert into the array:";
  cin>>pos>>data;
  b.insert(pos,data);
  b.display();
  return 0;
  }
  
