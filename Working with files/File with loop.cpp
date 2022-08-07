#include<iostream>
#include<fstream>

using namespace std;
int main()
{
    ofstream fout;
    fout.open("Class");
    fout<<"Class 1";
    fout<<"Class 2";
    fout<<"Class 3";

    fout.close();

    fout.open("Name");
    fout<<"alpha";
    fout<<"bita";
    fout<<"gamma";

    fout.close();

 char line[30];
    ifstream fin;

    fin.open("Class");
    cout<<"\n";

    while(fin)
    {
        fin.getline(line,50);
        cout<<line;
    }
    fin.close();

    fin.open("Name");
    cout<<"\n";

    while(fin)
    {
        fin.getline(line,50);
        cout<< line;
    }
    fin.close();
}
