#include<iostream>
using namespace std;
class a
{public:
    int x,y;
    fun(int x,int y);
};

class b: a
{
public:
    fun(int n1,int n2)
{
    if(n1>n2)
            cout<<n1;
      else
            cout<<n2;
}
};

main()
{   b q;
    int n1,n2;
    cin>>n1>>n2;
    q.fun(n1,n2);
}
