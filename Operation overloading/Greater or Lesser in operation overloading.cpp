#include<iostream>
using namespace std;
class set
{
public:
    int y;
    set (int x)
    {
        y=x;
    }
    friend operator>( set afun,set bfun)
    {

        if(afun.y>bfun.y)
            cout<<afun.y;
        else
            cout<<bfun.y;
    }
};

main()
{
    int n1,n2;
    cin>>n1>>n2;
    set afun(n1);
    set bfun(n2);

    afun >bfun;
}
