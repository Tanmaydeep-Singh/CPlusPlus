
#include<iostream>
using namespace std;
class demo
    { public:
        int c,f,g;
        fun1(int ,int);
        fun2(int ,int);
        fun3(int ,int);
        fun4(int ,int);



    };
    demo:: fun1(int a, int b)
    {
        c=a+b;
        cout<<c;
    }

     demo:: fun2(int a, int b)
    {
        c=a-b;
        cout<<c;
    }
     demo:: fun3(int a, int b)
    {
        c=a*b;
        cout<<c;
    }
     demo:: fun4(int a, int b)
      {
          c=a/b;
        cout<<c;
    }


    main()
    {
        int a,b,i,t=0;
         demo st[5];
       for(i=0;i<4;i++)
        {
        cout<<"Enter values";
        cin>>a>>b;
        t=t+1;
        if(t==1)
        {
        st[i].fun1(a,b);
        }
        if(t==2)
        {
        st[i].fun2(a,b);
        }
        if(t==3)
        {
        st[i].fun3(a,b);
        }
        if(t==4)
        {
        st[i].fun4(a,b);
        }

        }


    }
