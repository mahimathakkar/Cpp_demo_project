#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int p,n,d,sum=0,m,a,i=0;
	cout<<"enter a no ";
	cin>>p;
	n=p;
	m=n;
	while(m!=0)
	{
	m=m/10;
		i++;
		
	}
	
	while(n!=0)
	{
		d=n%10;
		sum=sum+pow(d,i);
		n=n/10;
	}
	
	if(sum==p)
	cout<<"it is armstrong number";
	if(sum!=p)
	cout<<"it is not armstrong number";
}
