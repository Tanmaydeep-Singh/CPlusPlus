#include<iostream>
#include<conio.h>
using namespace std;

class a
{
public:
    int x,y;
    virtual add1(){};
};

class b
{

public:
    int x,y;
    add2();
};

class c: a,b
{
public:
    int x,y;
    add1()
  {
      cin>>x>>y;
    cout<<x+y;
  }
  add2()
  {
       cin>>x>>y;
      cout<<"\n"<<x+y;
  }

};

main()
{
    c x;
    x.add1();
    x.add2();
}
