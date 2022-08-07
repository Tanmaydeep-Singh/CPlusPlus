

#include<iostream>
using namespace std;
    class demo
    {
    public:
        int a,b,c;
        add( int a, int b)
        {
            c=a+b;
            cout<<c;
        }
    };
main()
{
    demo st;
    int a,b,c;
    cin>>a>>b;
    c=st.add(a,b);
}
