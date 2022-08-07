#include<iostream>
using namespace std;
class demo
{
public:
    int c,f;
    add(int a, int b);
    mult(int d, int e);
    float div( int ,int);

};
demo:: add(int a, int b)
{
    c=a+b;
    return c;
}
demo:: mult(int d, int e)
    {
        f=d*e;
        return f;
    }
float demo:: div(int c, int f)
{
 f=c/f;
 return f;
}

main()
{
     int a,b,c,d,e,f;
     float g;
     demo st;
     cout<<"Enter 4 digits";
     cin>>a>>b>>d>>e;
     c=st.add(a,b);
     cout<<"Sum of first 2 digits is ="<<c<<"\n";
     f=st.mult(d,e);
     cout<<"Product of second 2 digits is ="<<f<<"\n";

     g=st.div(c,f);
     cout<<"Division of the sum and the product is="<<g;


}
