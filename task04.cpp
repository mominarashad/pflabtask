#include<iostream>
using namespace std;
void iseven(int number);
void isodd(int number);

main()
{
int number;
while(true)
{
cout<<"enter the number:";
cin>>number;
iseven(number);
isodd(number);
}
}
void iseven(int number)
{
if(number%2==0)
{ cout<< "number is even"<<endl;}
}
void isodd(int number)
{
if(number%2==1)
{cout<<"number is odd "<<endl;}
}
