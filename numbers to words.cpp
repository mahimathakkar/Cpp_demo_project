#include<iostream>
using namespace std;
int main()
{
          string units[]={"","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
          string tens[]={"","","twenty","thirty","forty","fifty","sixty","seventy","eighty","ninety"};
          int n,q1,q2,q3,q4,r1,r2,r3;
          cout<<"enter a number"<<endl;
          cin>>n;
          q1=n/10;
          q2=n/100;
          q3=n/1000;
          q4=n/10000;
          r1=(n%100)/10;
          r2=(n%1000)/100;
          r3=((n%1000)%100)/10;
          if(n/10==0||n/10==1)
          {
                 cout<<"the number in words is "<<units[n]<<endl;
          }
          if(n/10>1&&n/100==0)
          {
                    cout<<"the number in words is "<<tens[q1]<<" "<<units[n%10]<<endl;
          }
          if(n/100>0&&n/1000==0)
          {
                     cout<<"the number in words is "<<units[q2]<<" hundred "<<tens[r1]<<" "<<units[n%10]<<endl;
          }
          if(n/1000>0&&n/20000==0)
          {
                                 cout<<"the number in words is "<<units[q3]<<" "<<"thousand "<<units[r2]<<" "<<"hundred "<<tens[r3]<<" "<<units[n%10]<<endl;
          }
          system("pause");
          return 0;
          } 
