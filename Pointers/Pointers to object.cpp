#include<iostream>
using namespace std;
class item
{public:
    int m;
    float n;
    getdata(int a, float b)
    {
        m=a;
        n=b;
    }
    show()
    {
        cout<<m<<endl;
            cout<<n;
    }

};
main()
{
    item *p = new item;
    item *d=p;
    int x,i;
    float y;

    for(i=0;i<2;i++)
    {
        cin>>x>>y;
        p->getdata(x,y);
        p++;
    }

    for(i=0;i<2;i++)
    {
        cout<<  "\n"<<i+1<<endl;
        d->show();
        d++;
    }

}
