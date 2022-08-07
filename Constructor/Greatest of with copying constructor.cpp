
#include<iostream>

using namespace std;
class set
{
public:

     int m,n,sum;
    set(){}
    set(int c)
    {
    m=c;;
    }
    set(set &a,set &b)
    {

        if(a.m>b.m)
            cout<<a.m;
        else
            cout<<b.m;
    }
    };

main()
{
    int n1,n2;
    cin>>n1>>n2;
    set a(n1);
    set b(n2);
    set c(a,b);
}
