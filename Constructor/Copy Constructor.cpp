

#include<iostream>
using namespace std;
class code
{
    int ID;
public:
    code(){}             //Constructor
    code(int a){ID=a;}   //Constructor again
    code(code &x)        // copy constructor
    {
        ID=x.ID;        // Copy in the vaue
    }
    display()
    {
        cout<<ID;

};
main()
{
    code A(100); // Oblect is created and initialized
    code B(A);  // copy constructor called
    code C=A;   // Copy constructor called again
    code D;     // D is created, not initialized
    D=A;        // Copy constructor not called
    cout<<"id of A";A.display();
     cout<<"id of B";B.display();
      cout<<"id of C";C.display();
       cout<<"id of D";D.display();
}
