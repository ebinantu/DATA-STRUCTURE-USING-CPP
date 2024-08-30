#include<iostream>
using namespace std;
class array
{
  int a[100],n,i,loc=0,p=0;
  public:
  void accept();
  void linearsearch(int );
};
void array::accept()
{
  cout<<"enter number of elements in array:";
  cin>>n;
  cout<<"Enter array:";
  for(i=0;i<n;i++)
   cin>>a[i];
}
void array::linearsearch(int item)
{
loc=0;
   while(loc<n)
   {
      if(a[loc]==item)
      {
         cout<<"element found at position "<<loc+1<<endl;
         p=1;
      }
         loc++;
    }
     if(p!=1)
        cout<<"element not found";
        
     
}
int main()
{
 int item;
 array a;
 a.accept();
 cout<<"enter the element to be searched:";
 cin>>item;
 a.linearsearch(item);
return 0;

}
