//Alice and Bob are playing a game. Alice initially has the number A and Bob has the number B. There are a total of N turns in the game, and Alice and Bob alternatively take turns. In each turn the player whose turn it is, multiplies his or her number by 2. Alice has the first turn.

//Suppose after all the N turns, Alice's number has become C and Bob's number has become D. You want to calculate the integer division of the maximum number among C and D by the minimum number among C and D.

#include<iostream>
using namespace std;
int main()
{
    float a,b,n,c;
    cout<<"enter the number with Alice\n";
    cin>>a;
    cout<<"enter number with Bob\n";
    cin>>b;
    cout<<"enter number of turns\n";
    cin>>n;
    a=a*n;
    b=b*n;
    if(a>=b)
    {
       c=a/b;
       cout<<"The integer division of the greater number by smaller number is "<<c;
    }
       else
       {
           c=b/a;
           cout<<"the integer division of the two numbers is "<<c<<endl;
           }
           system("pause");
}
            
