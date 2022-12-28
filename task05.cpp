#include<iostream>
using namespace std;
void greaternumber(int number1,int number2);

main()
{
int number1;
int number2;
cout<< "enter the number1 :";
cin>>number1;
cout<<"enter the number2 :";
cin>>number2;
greaternumber(number1,number2);
  

}
void greaternumber(int number1,int number2)
{
if (number1>number2)
{ cout<<"enter the number1"<<endl;}
if (number2>number1)
{ cout<<"enter the number2"<<endl;}
}
