

#include<iostream>
using namespace std;
class demo
{ public:
    int a,b,c,d,e,f;

    fun()
    {
      cout<<"Enter two numbers";
      cin>>a>>b;
      c=a+b;
      cout<<"Sum of these two numbers is"<<c<<"\n";
    }

    fun1()
    {
    cout<<"Enter two numbers";
      cin>>a>>b;
      d=a*b;
      return d;
    }

    fun2( int a,int b)
    {
        e=a-b;
        cout<<"\nDifference of two numbers is"<<e<<"\n";
    }
   fun3( int a, int b)
        {
            f=a+b;
            return f;
        }

};

main()
{   demo st;
    int a,b,c,d,e,f;
    st.fun();

    d=st.fun1();
    cout<<"Product of these two numbers is"<<d;


        cin>>a>>b;
        e=st.fun2(a,b);


         cin>>a>>b;
    f=st.fun3(a,b);
    cout<<f;

}
