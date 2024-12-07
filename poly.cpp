#include <iostream>
using namespace std;
class Poly
{
	int i,size,size2,limit,a[10],b[10],sum[20],flag1,flag2;
public:
	void accept();
	void display();
	void add();
};

void Poly::accept()
{  
          flag1=0;
          flag2=0;
	cout<<"Enter total terms for 1st and 2nd polynomial: ";
	cin>>size>>size2;
	if(size >= size2)
		limit = size;
	else
		limit = size2;
		
for(i=0;i<limit;i++)
{
		  a[i]=0;
		  b[i]=0;
		  sum[i]=0;
  }
	for(i=size-1; i>=0; i--)
	{
		cout<<"Enter term for first having exponent "<<i<<": ";
		cin>>a[i];
		if(a[i]!=0)
			flag1 = 1;
	}
	cout<<"\n----------------------------------------------------\n";
	for(i=size2-1; i>=0; i--)
	{
		cout<<"Enter term for second having exponent "<<i<<": ";
		cin>>b[i];
		if(b[i]!=0)
			flag2 = 1;
	}
}
void Poly::add()
{
	for(i=0; i<limit; i++)
		sum[i] = a[i] + b[i];
}
void Poly::display()
{
	if(flag1 == 1||flag2 == 1)
	{
		cout<<"\nPolynomial sum: ";
		for(i=limit-1; i>0; i--)
		    cout<<sum[i]<<"x^"<<i<<"+";
		cout<<sum[i];
	}
	else
     cout<<"Polynomial sum is: 0";
}
int main()
{
	Poly obj;
	obj.accept();
	obj.add();
	obj.display();
	return 0;
}
