#include<iostream>
using namespace std;
class set
{

  public:
     set(){}
     set(int ,int);
      int m,n,sum1,sum2;

      set friend sum(set add1,set add2 )
      {
          set sum1;
          sum1.m=add1.m+add2.m;
          sum1.n=add1.n+add2.n;
          return(sum1);
      }

      friend show(set add3)
      {

          cout<<add3.m;
          cout<<add3.n;
      }
};
 set:: set(int x,int y)
      {
          m=x;
          n=y;
          cout<<m<<"\t"<<n<<endl;
      }


main()
{
 int n1,n2,n3,n4;
set add3;
 set add1(5,10);
 set add2(15,20);
 add3=sum(add1, add2);
show(add3);
}

