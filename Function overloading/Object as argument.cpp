
#include<iostream>
using namespace std;
class time
{
public:
    int hours,minutes;
    input(int h, int m)
    {
        hours=h;
        minutes=m;
    }

    sum(time t1, time t2)
    {
     minutes=t1.minutes+t2.minutes;
     hours=minutes/60;
     minutes=minutes%60;
     hours=hours+t1.hours+t2.hours;
     display(hours, minutes);    /* nesting loop*/
    }

    display(int hours,int minutes)
    {
        cout<<"\nsummed time is:"<<endl
            <<hours<<":"<<minutes;
    }


};

main()
{   int h1,h2,m1,m2;
    time t1,t2,t3;
    cout<<"Enter current time\n";
    cin>>h1>>m1;
    t1.input(h1,m1);
    cout<<"Enter your time\n";
    cin>>h2>>m2;

    t2.input(h2,m2);
    t3.sum(t1,t2);  /*function for sum of obj 1 and obj 2*/

}
