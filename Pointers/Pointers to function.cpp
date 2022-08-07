#include<iostream>
using namespace std;
typedef (*funptr)(int,int);
add(int i,int j)
{
    cout<<i+j;
}
sub(int i, int j)
{
    cout<<i-j;
}
main()
{
    funptr ptr;
    int n1,n2,n3,n4;
    cin>>n1>>n2>>n3>>n4;
    ptr=&add;
    ptr(n1,n2);
    cout<<endl;
    ptr=&sub;
    ptr(n3,n4);
}
