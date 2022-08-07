

#include<iostream>
using namespace std;
class demo
{
public:
    int a,b,c,d,h;
    fun(int,int);
    fun(int);
    fun(int,int,int);
};

  demo:: fun(int a, int b)
{   cout<<"\nEnter two numbers\n";
    cin>>a>>b;
    c=a+b;
    cout<<"Sum of two numbers is:";
    cout<<c;

}
  demo:: fun(int d)
{  cout<<"\nEnter a numbers\n";
      cin>>d;
      cout<<"\nEntered number is:";
    cout<<d;
}


 demo::fun(int e, int f, int g)
 { cout<<"\nEnter three numbers\n";
     cin>>e>>f>>g;
     h=e+f+g;
     cout<<"\nSum of three numbers is:";
     cout<<"\n"<<h;
 }


main()
{///With the help of different objects, we can overload function
    int a,b,d,e,f,g;
    demo obj,obj1,obj2,obj3;
    obj.fun(a,b);
    obj1.fun(30,40);
    obj2.fun(d);
    obj3.fun(e,f,g);
}
