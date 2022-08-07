
#include<iostream>
using namespace std;
class item
{
    static int i; ///Defining i as static;
    public:
    loop(int a)
    {
        for(;i<=a;i++)
        {
            cout<<i;
        }
    }
    };

int item::i;
    int main()
   {
       int a;
     item A;
     cin>>a;
     A.loop(a);
     return 0;
   }
