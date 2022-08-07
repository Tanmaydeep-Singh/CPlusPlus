
#include<iostream>
using namespace std;
class demo
{
public:
    int a[10][10],r,c,i,j,n;
    fun();
};
demo :: fun()
{ cout<<"Specify rows and columns";
   cin>>r>>c;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cin>>a[i][j];
        }
    }
    cout<<"your matrix is\n";
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            cout<<a[i][j] ;
        }
        cout<<"\n";
    }
}
main()
{
    demo st;
  st.fun();
}
