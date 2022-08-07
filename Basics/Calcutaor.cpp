
#include<iostream>
using namespace std;
class demo
{
    public:
    int a,b,c,d,e,f,g,h;
    add();
    multiply();
    fun();

};

 demo:: add()
 {
     cin>>a>>b;
     c=a+b;
     cout<<c;

 }
 demo:: multiply()
 {
     cin>>d>>e;
     f=d*e;
     cout<<f;
     cout<<"\n";
     g=c-f;
     cout<<"Difference is"<<g;


 }

main()
 {
     demo st;
     printf("Enter");
     int i,j,s;
     for(i=1;i<=3;i++)
        {
            printf("Enter 1 for addition \n Enter 2 for multiplication");

     scanf("%d",&s);
     {

    switch(s)
       {
    case 1:
        st.add();
        break;
    case 2:
        st.multiply();
        break;
     default:
        printf("");
         }
      }
}

 }
