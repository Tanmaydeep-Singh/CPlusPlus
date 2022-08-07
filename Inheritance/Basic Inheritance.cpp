// Inheritance; Extending classes
#include "iostream"
#include "conio.h"
using namespace std;
class base1              //base class 1
{
private:
int x,y;
mul(int x,int y);
};
//-----------
class base2               //base class 2
{
private:
add(int x,int y);
};
//----------
class base3             //base class 3
{
private:
greater(int x,int y);
};
//----------------------------
class derive:base1,base2,base3     //private derivation of all 3 base classes
{
public:
//--------------------
void  mul(int x,int y)       //base class  1 function
{
cout<<"\n"<<x*y;
}
//-------------------
void add(int x,int y)      //base class 2 function
{
cout<<"\n"<<x+y;
}
//----------------------
void greater(int x,int y)    //base class 3 function
{
if(x>y)
{
cout<<"\nx look greater";
}
else
{
cout<<"\ny is greater";
}
}
};
///////////
main()
{

derive d;        //object of last class mean derived class
d.mul(5,10);      //accessing function of base classes
d.add(10,5);
d.greater(5,8);
getch();
}
