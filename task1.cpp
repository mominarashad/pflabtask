#include<iostream>
using namespace std;
void printname(string name);


main()
{
string name= "momina";
printname("ahmad");

string secondname;
cout<<"name is:";
cin>>secondname;
printname(secondname);
}

void printname(string name)
{
cout<< " my name is:"<<name<<endl;
}


