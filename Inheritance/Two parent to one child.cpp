
// a and b to c
#include<iostream>
#include<conio.h>
using namespace std;

class a
{
public:
    int x,y;
    add1(int x,int y);
};

class b
{

public:
    int x,y;
    add2(int x, int y);
};

class c: a,b
{
public:
    add1(int x, int y)
  {
    cout<<x+y;
  }
  add2(int x, int y)
  {
      cout<<"\n"<<x+y;
  }

};

main()
{
    c x;
    x.add1(10,20);
    x.add2(30,40);
}
