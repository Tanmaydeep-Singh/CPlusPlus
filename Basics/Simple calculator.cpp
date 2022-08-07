#include<iostream>
using namespace std;
class demo
{
    public:
    int a=5,b=3,c;
    add();
    multiply();
    divide();
    subtract();
};


 demo:: add()
 {
     cin>>a>>b;
     c=a+b;
     cout<<c;

 }
 demo:: multiply()
 {
     cin>>a>>b;
     c=a*b;
     cout<<c;

 }
 demo:: divide()
 {
     cin>>a>>b;
     c=a/b;
     cout<<c;

 }
 demo:: subtract()
 {
     cin>>a>>b;
     c=a-b;
     cout<<c;

 }

main()
 {
     demo st;
     printf("Enter 1 for addition \n Enter 2 for multiplication \n Enter 3 for Division \n Enter 4 for subtraction\n");
     int no;
     scanf("%d",&no);
     switch(no)
     {

     case 1:
        st.add();
        break;
     case 2:
        st.multiply();
        break;
     case 3:
        st.divide();
        break;
     case 4:
        st.subtract();
        break;
     default:
         printf("NO Input");


     }

 }
