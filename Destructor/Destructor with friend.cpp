
#include<iostream>
using namespace std;
class set
{
public:
     set(){}
    int m,n,o,fin;
    set(int ,int ,int);
    set friend sum( set fun)
    {
         set fin;
        fin.m=fun.m+fun.n+fun.o;
        return fin;
    }
    friend show(set display)
      {

          cout<<display.m;
      }
~set()
{

    cout<<" des ";
}


};
set::set(int x,int y,int z)
{
    m=x;
    n=y;
    o=z;
}

main()
{  set fun(10,50,80);
   set display;
display=sum(fun);
show(display);

}
