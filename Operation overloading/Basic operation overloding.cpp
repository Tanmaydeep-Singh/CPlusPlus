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
    friend operator+( set afun,set bfun)
    {
        cout<<afun.y+bfun.y;
    }
};

main()
{
    set afun(10);
    set bfun(20);

    afun +bfun;
}
