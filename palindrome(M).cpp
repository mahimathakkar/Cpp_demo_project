
#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int length,i=0,j,temp;
    char word[50],newword[50];
    string in;
    cout<<"enter a word "<<endl;
    cin>>word;
    length=strlen(word);
    j=(length-1);
    cout<<"length of the word is "<<length<<endl;
    while(i<length)
    {
                     newword[i]=word[j];
                     i++;
                     j--;
                     
    }
    
    int cmp=strcmp(newword,word);
    if(cmp==0)
    {
                    cout<<"word is a palindrome"<<endl;
                    }
                    else
                    {
                       cout<<"word is not a palindrome";
                             }
    
return 0;
}
