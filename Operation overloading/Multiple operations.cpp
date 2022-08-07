
#include<iostream>
using namespace std;
class set
{
public:
    set(){}
    set (int , int );
    int m,n;
    set friend operator+( set a, set b) // First operator execution
    {
        set X;
        X.m=a.m+a.n;
        X.n=b.m+b.n;
       return X;
    }
    set friend operator *( set d, set c) // Second operator execution
    {
        set Y;
        Y.m=d.m*c.m;
        Y.n=d.n*c.n;
        return Y;
    }

    friend show1(set fin)
      {
         cout<<fin.m;
         cout<<fin.n;

      }

};
set::set(int x,int y)
{
    m=x;
    n=y;
}

main()
{
    int n1,n2,n3,n4,n5,n6;
    set d;
    set fin;
    cin>>n1>>n2>>n3>>n4>>n5>>n6;
    set a(n1,n2);
    set b=set(n3,n4);
    set c(n5,n6);

    d=(a+b);  // First operator overloading
    fin=d*c;  // Second operator overloding
    show1(fin);
}
