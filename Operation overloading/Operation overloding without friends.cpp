#include<iostream>
using namespace std;
class set
{
public:
    set(){}
    set (int , int );
    int m,n;
    set operator+( set a)
    {
        set X;
        X.m=a.m+m;
        X.n=a.n+n;
       return X;
    }
    friend show(set c)
      {
         cout<<c.m;
         cout<<c.n;

      }

};
set::set(int x,int y)
{
    m=x;
    n=y;
}

main()
{
    int n1,n2,n3,n4;
    set c;
    cin>>n1>>n2>>n3>>n4;
    set a(n1,n2);
    set b=set(n3,n4);

    c=a+b;
    show(c);
}
