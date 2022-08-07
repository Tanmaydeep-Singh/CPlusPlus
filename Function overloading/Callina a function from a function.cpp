
#include<iostream>
using namespace std;
class set
{
    pvt();
public:
int sum,L1,L2;

    add(int N1, int N2)
    {
        sum=N1+N2;
        pvt(sum);///Calling a function
    }

    pvt(int sum)
    {
         for(L1=1;L1<=sum;L1++)
        {
            for(L2=1;L2<=L1;L2++)
            {
            cout<<L2;
            }
            cout<<"\n";

        }
    }

};
main()
{
    set A;
    int N1,N2;
    cout<<"Enter two numbers\n";
    cin>>N1>>N2;
    A.add(N1,N2);
}



