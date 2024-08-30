#include <iostream>
using namespace std;
class sort
{
int a[20];
public:
int n;
void accept()
{
int i;
cout<<"enter n ";
cin>>n;
cout<<"enter array";
for(i=0;i<n;i++)
cin>>a[i];}
void display(){
int i;
cout<<"the sorted array";
for(i=0;i<n;i++)
cout<<a[i]<<"\t";}
void quicksort(int l,int h)
{
int low=l,key=l,high=h,temp,i;
while(low<=high)
{
while(a[low]<=a[key])
low++;
while(a[high]>a[key])
high--;
if(low<high){
temp=a[low];
a[low]=a[high];
a[high]=temp;
low++;
high--;
}}
temp=a[high];
a[high]=a[key];
a[key]=temp;
if(l<high)
quicksort(l,high-1);
if(low<h)
quicksort(low,h);
}
};
int main(){
sort q;
q.accept();
q.quicksort(0,q.n-1);
q.display();
return 0;
}
