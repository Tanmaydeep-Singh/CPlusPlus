
///Destructors are usually used to deallocate memory
#include<iostream>
using namespace std;
class set
{

public:
    set(int , int);
    int m,n;
     display()
     {
         cout<<m;
     }
~set()///Using distructor
{

    cout<<"des";
}
};
set:: set(int x, int y)
{
    m=x+y;
}

main()
{ int n1,n2,n3,n4;
 cin>>n1>>n2;
    set add1(n1,n2);
 cin>>n3>>n4;
    set add2(n3,n4);
      add1.display();
      add2.display();
}
