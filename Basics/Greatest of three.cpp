
#include<iostream>
using namespace std;
class demo
{
public:
    int a,b,c;
    fun (int a, int b, int c);
};

demo:: fun (int a, int b, int c)
{
    if(a>b)
        if(a>c)
    cout<<a;
    else
    cout<<c;
   else
        if(b>c)
        cout<<b;
       else
         cout<<c;
}
main()
{
    demo obj;
    int a,b,c;
    cin>>a>>b>>c;
    obj.fun(a,b,c);


}
