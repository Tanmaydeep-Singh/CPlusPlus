
#include<iostream>
using namespace std;
class set
{
public:
    int s,number1,number2,sum1,sum2;

add(int x,int y)
{
    number1=x;
    number2=y;
}

sum(set a, set b)
{
    sum1=a.number1+b.number1; ///Number1 from object a + number1 from object b
    sum2=a.number2+b.number2;
    cout<<"\n"<<sum1<<"\t"<<sum2;
}

};
main()
{   set a,b,c;
int n1,n2,n3,n4;
cin>>n1>>n2;
    a.add(n1,n2);
cin>>n3>>n4;
    b.add(n3,n4);
    c.sum(a,b);
}
