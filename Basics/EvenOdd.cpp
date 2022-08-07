#include<iostream>
using namespace std;
class demo
{
public:
    int a;
    even(int a);
};

demo:: even (int a)
{
    if(a%2==0)
    cout<<a<<"is even";
    else
    cout<<a<<"is odd";
}
main()
{
    demo obj;
    int a;
    cin>>a;
    obj.even(a);


}
