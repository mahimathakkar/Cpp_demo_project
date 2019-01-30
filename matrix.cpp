#include<iostream>
using namespace std;
int main()
{
    int matrix[10][10],n,i,j,sum=0;
    cout<<"enter order of matrix\n";
    cin>>n;
    cout<<"enter elements of matrix row wise\n";
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    cin>>matrix[i][j];
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    sum=sum+matrix[i][j];
    cout<<"sum of elements of matrix is "<<sum<<endl;
    system("pause");
    return 0;
}
