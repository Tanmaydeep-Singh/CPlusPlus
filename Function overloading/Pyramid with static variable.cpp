

#include<iostream>
using namespace std;
class item
{
    static int i,j;
    public:
    loop(int a)
    {

        for(;i<=a;i++)
        {
            j++;
            for(;j<=i;j++)
            {
            cout<<"*"<<j;
            }
j=0;
            cout<<"\n";
        }
    }
    };

int item::i;
int item::j;
    int main()
   {
       int number;
     item A;
     cin>>number;
     A.loop(number);
     return 0;
   }

