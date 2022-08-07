///We cannot call a function more than once
#include<iostream>
using namespace std;
class demo
    { public:
        int c,f,g;
        add( int ,int);
        add2(int, int);
        fun(int,int);
    };
    demo:: add(int a , int b)
    {
        c=a+b;
        return c;
    }
    demo:: add2(int d, int e)
    {
        f=d+e;
        return f;
    }
    demo:: fun(int, int)
    {
        if(c>f)
            g=c;
           else
           g=f;
        return g;
    }



    main()
    {
        int a,b,c,d,e,f,g;
         demo st;
        cout<<"Enter values";
        cin>>a>>b;
        c=st.add(a,b);
        cout<<c<<"\n";
        cout<<"Enter values";
        cin>>d>>e;
        f=st.add2(d,e);
        cout<<f<<"\n";
        g=st.fun(c,f);
        cout<<"\n"<<g<<" is greater";



    }
