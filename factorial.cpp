
//to find no of trailing zeroes in the factorial of a number

#include<iostream>
using namespace std;
int main()
{
int n,i,count=0;
string in;
cout<<"enter a no";
cin>>n;
for(i=5;n/i>=1;i=i*5)
{
                    count=count+n/i;
}
cout<<"No of trailing zeroes in the factorial of "<<n<<"is "<<count;
cin>>in;
while(in!="exit")
{
                 }
return 0;

}                   
