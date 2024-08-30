#include<iostream>
using namespace std;
class sparse
{
  int a[20][20],s[20][3],r,c,h=0;
  public:
  void accept()
  {
     int i,j;
     cout<<"Enter the no of rows and columns:";
     cin>>r>>c;
     cout<<"Enter the element of matrix rowise:\n";
     for(i=0;i<r;i++)
     {
        for(j=0;j<c;j++)
        { 
           cin>>a[i][j];
           if(a[i][j]!=0)
           h++;
        }
     }
  }
  void sparseconvert()
  {
   int i,j,m=1;
   s[0][0]=r;
   s[0][1]=c;
   s[0][2]=h;
   for(i=0;i<r;i++)
   {
     for(j=0;j<c;j++)
     {
       if(a[i][j]!=0)
       { 
         s[m][0]=i;
         s[m][1]=j;
         s[m][2]=a[i][j];
         m++;
       }
     }
   }
   cout<<"sparse Matrix"<<endl;
   for(i=0;i<h+1;i++)
    { 
    for(j=0;j<3;j++)
    { 
      cout<<s[i][j]<<"  ";
    }
    cout<<endl;
    }
     
 }
 void display()
 { 
    cout<<"Entered Matrix\n";
    for(int i=0;i<r;i++)
    { 
       for(int j=0;j<c;j++)
       {
          cout<<a[i][j]<<"  ";
       }
     cout<<endl;
    }
}
};
int main()
{
  sparse a;
  a.accept();
  a.display();
  a.sparseconvert();
  
}

  
