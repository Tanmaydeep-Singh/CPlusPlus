
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
     if(a%2==0)
        cout<<"even";
     else
        cout<<"odd";
 }

main()
 {
     demo st;
     st.fun();
 }
