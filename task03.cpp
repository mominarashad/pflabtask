#include<iostream>
using namespace std;
void iseligible(int age);

main()
{
int age;
while(true)
{cout<< "your age is:";
 cin>>age;
iseligible(age);
}
}
void iseligible(int age)
{ 
if (age>18)
{cout<<"you are eligible"<<endl;}
if (age<18)
{cout<<"you are not eligible"<<endl;}
}

