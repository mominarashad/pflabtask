#include<iostream>
using namespace std;

void add(int number1,int number2);
void multiply(int number1,int number2);
void subtraction(int number1,int number2);
main()
{ 

int number1;
int number2;
char operation;
while(true)
{cout<<"enter the number 1:";
cin>>number1;
cout<<"enter the number 2:";
cin>>number2;
cout<<"operation(+,-,*,):";
cin>>operation;
if ( operation=='+')
{add(number1,number2);}
if (operation=='*')
{multiply(number1,number2);}
if (operation=='-')
{subtraction(number1,number2);}
}
}
void add(int number1,int number2)
{

int sum;
sum=number1+number2;
cout<<"sum is :"<<sum<<endl;
}
void multiply(int number1,int number2)
{
int product;
product=number1*number2;
cout<< "the product is :"<<product<<endl;

}
void subtraction(int number1,int number2)
{
int minus;
minus=number1-number2;
cout<<" the subtraction is:"<<minus<<endl;
}
