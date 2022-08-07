
#include<iostream>
using namespace std;
class item
{
    static int count;
    int number;

public:
    getdata(int a)
    {
        number =a;///Function being called thrice with different arguments
        count ++;
        cout<<count;
    }
    getcount()
    {
        cout<<"count:"<<count<<"\n";
    }
};
int item:: count;
 int main()
 {
     item a,b,c;
     a.getcount();
     b.getcount();
     c.getcount();

    a.getdata(100);
     b.getdata(100);
    c.getdata(100);

     cout<<"After reading data\n";

      a.getcount();
     b.getcount();
     c.getcount();

     return 0;

 }
