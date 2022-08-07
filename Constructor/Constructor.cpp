

/*In constructor we use the class name as function which helps saving memory*/
#include<iostream>
using namespace std;
class set
{
public:
    int m,n;
    set(int , int); // Constructor declared


    display()
    {
        cout<<m;
        cout<<n;
    }


};

 set:: set(int x,int y) // constructror defined
    {
        m=x;
        n=y;
    }
main()
{

    set add1(5,10); // Constructor is implicitly
    set add2= set(15,20);// Constructor is expicitly

     add1.display();
     add2.display();
}
