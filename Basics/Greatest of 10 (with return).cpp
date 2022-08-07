
#include<iostream>
using namespace std;
class demo
{
    public:
    int a[10],i,n=0;
    fun();
};


 demo:: fun()
 {
     for(i=0;i<10;i++)
        {
            cin>>a[i];
        }
        for(i=0;i<10;i++)
        {
            if(a[i]>n)
                n=a[i];
        }
        return (n);
 }

main()
 { int n;
     demo st;
     n=st.fun();
     cout<<n;
 }
