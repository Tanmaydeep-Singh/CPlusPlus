
#include<iostream>
using namespace std;
class demo
{ public:
    int c;
    int fun(int a, int b)
    {
         c=a+b;
        cout<<c;
        return c;
    }
};
int main()
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
