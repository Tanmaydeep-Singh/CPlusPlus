#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    int roll;
        ofstream outf("Class");  // Connect class file to outf

        cout<<"Enter name";
        char name[30];
       cin.getline(name,30);

        outf<< name<<"\n";

        cout<<"Enter rollno";
        cin>>roll;
        outf<<roll<<"\n";

        outf.close();   //Disconnect class

        ifstream inf("Class");// Connect class file to inf

        cout<<name;
        cout<<roll;

        inf.close();

}
