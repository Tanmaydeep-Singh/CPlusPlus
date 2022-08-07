
#include<iostream>
using namespace std;
class set
{
public:
    int sum,loop,n=0,i;

    add(int N1, int N2)
    {
        sum=N1+N2;
        return(sum);
    }

    fun(int sum,int N3)
    {
        loop=sum+N3;
        fun(loop);
    }

    fun(int loop)
    {
        for(i=0;i<=loop;i++)
            {n=n+i;
            }
            cout<<n;
    }
};



main()
{
    set A;
    int N1,N2,N3,sum,n;
    cout<<"Enter Two Numbers:";
    cin>>N1>>N2;
    sum=A.add(N1,N2);
    cout<<"\n"<<"Enter another number";
    cin>>N3;
    A.fun(sum,N3);



}

