

#include<iostream>
using namespace std;
class demo
{ public:
    int i,j;

    fun()
    {
     cout<<"Hello";

    }
};
main()
{
     int a,b,i,j;
         demo st[3][3];
       for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
        cout<<"\nEnter values\n";
        st[i][j].fun();
        }
        }
}
