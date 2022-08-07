
#include<iostream>
using namespace std;
class demo
{
public:
    int a,b,c,d,e,f,g;
     add1(int a, int b)
     {
         c=a+b;
         return c;
     }
     add2(int d, int e)
     {
         f=d+e;
         return f;
     }
     fun(int c, int f)
     {

         if(c>f)
            g=c;
         else
            g=f;
         return g;
     }

};

main()
{
    demo st;
    int a,b,c,d,e,f,g;
     cout<<"Enter two numbers"<<"\n";
     cin>>a>>b;
     c=st.add1(a,b);
     cout<<"\n";

      cout<<"Enter two numbers"<<"\n";
     cin>>d>>e;
     f=st.add2(d,e);

      cout<<"\n";
     g=st.fun(c,f);

     cout<<g<<"Is Greater";



}
