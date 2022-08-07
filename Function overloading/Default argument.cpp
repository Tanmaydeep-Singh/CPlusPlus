
#include<iostream>
using namespace std;
class demo
{
public:
    int a,b,c,d;
    fun(int a,int b, int c=5);
};
demo:: fun(int a,int b, int c)
{
    d=5+10+c;
    cout<<d;
}

main()
{
    demo st;
    st.fun(5,10);
}
