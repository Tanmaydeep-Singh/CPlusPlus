
#include<iostream>

using namespace std;
class demo
{
 public:
     int a,b,c;
     fun();
};

demo :: fun()
{
    cin>>a>>b>>c;
     if(a>b)
        if(a>c)
    cout<<a;
    else
    cout<<c;
   else
        if(b>c)
        cout<<b;
       else
         cout<<c;

}
main()
{
    demo st;
    st.fun();
}
