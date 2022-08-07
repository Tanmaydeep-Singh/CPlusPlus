// string to pointer
#include<iostream>
using namespace std;
int main()
{
    int num[]={20,40,50,60,70};
    int i,*ptr;

    for(i=0;i<5;i++)
    {
        cout<<num[i]<<"\t";
    }

    ptr=num;
     for(i=0;i<5;i++)
    {

        cout<<*ptr<<"\t";
        ptr+=1;
    }




}
