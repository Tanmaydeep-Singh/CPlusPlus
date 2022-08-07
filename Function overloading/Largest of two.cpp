#include<iostream>
using namespace std;
class set
{
public:
    int a,b;
    input(void);
    display(void);
    largest(void);
};

set :: largest()
{
    if(a>=b)
        return(a);
    else
        return(b);
}
set:: input()
{
    cout<<"Input values of a and b\n";
    cin>>a>>b;
}

set:: display()
{
    cout<<"Largest value = "
        <<largest()<<"\n";
}



main()
{
    set A;
    A.input();
    A.largest();
    A.display();

    return 0;
}
