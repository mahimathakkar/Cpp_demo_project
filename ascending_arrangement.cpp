//arrange in ascending order
#include<iostream>
using namespace std;
int main()
{
          int a[20],temp,i,j,k,n,l;
          cout<<"how many numbers are to be arranged?"<<endl;
          cin>>n;
          cout<<"enter numbers to be arranged"<<endl;
          for(k=0;k<n;k++)
          cin>>a[k];
          for(i=0;i<n;i++)
          for(j=0;j<(n-1);j++)
          if(a[j]>a[j+1])
          {
                         temp=a[j];
                         a[j]=a[j+1];
                         a[j+1]=temp;
          }
          cout<<"arranged order of numbers is"<<endl;
          for(l=0;l<n;l++)
          cout<<a[l]<<endl;
          system("pause");
          return 0;
          
                              
          
}          
