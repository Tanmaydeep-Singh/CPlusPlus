
#include<iostream>
using namespace std;
class demo
{
    public:
    int a;
    fun();
};


 demo:: fun()
 {
     cin>>a;

        return (a);
 }

main()
 { int a;
     demo st;
     a=st.fun();
     if(a%2==0)
        cout<<"even";
     else
        cout<<"odd";
 }
