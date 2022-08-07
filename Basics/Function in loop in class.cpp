

#include<iostream>
using namespace std;
class demo
{ public:
    int c;
    fun(int a, int b)
    {
         c=a+b;
        cout<<c;
    }
};
main()
{
     int a,b,i;
         demo st[5];
       for(i=0;i<5;i++)
        {
        cout<<"\nEnter values\n";
        cin>>a>>b;
        st[i].fun(a,b);
        }
}
