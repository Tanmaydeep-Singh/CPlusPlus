
#include<iostream>
using namespace std;
class demo
    { public:
        int c,f,g;
        add(int ,int);
    };
    demo:: add(int a, int b)
    {
        c=a+b;
        cout<<c;
    }




    main()
    {
        int a,b,i;
         demo st[5];
       for(i=0;i<5;i++)
        {
        cout<<"Enter values";
        cin>>a>>b;
        st[i].add(a,b);
        }


    }
