#include<iostream>
using namespace std;
int main()
{
    int a,*ptr1,**ptr2;
    cin>>a;

    ptr1=&a;
    ptr2=&ptr1;
     cout<<a <<"\n" << *ptr1+2 <<"\n"<< **ptr2<<" \n";


}
