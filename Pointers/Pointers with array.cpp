#include<iostream>
using namespace std;
int main()
{
    int number[50],*ptr,n,i;

    cout<<"Specify count"<<endl;
    cin>>n;

    for(i=0;i<n;i++)
    {
        cin>>number[i];
    }

    int sum=0;

    ptr=number;

    for(i=0;i<n;i++)
    {
        if(*ptr%2==0)
            sum=sum+*ptr;
            ptr++;
    }
    cout<<sum;






}
