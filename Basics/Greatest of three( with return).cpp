
#include<iostream>

using namespace std;
class demo
{
 public:
     int a,b,c,d;
     fun();
};

demo :: fun()
{
    cin>>a>>b>>c;
     if(a>b)
        if(a>c)
    d=a;
    else
    d=c;
   else
        if(b>c)
        d=b;
       else
         d=c;
         return (d);

}
main()
{   int d;
    demo st;
    d=st.fun();
    cout<<d;
}
