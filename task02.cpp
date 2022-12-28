#include<iostream>
using namespace std;
void ifpass(int marks);

main()
{
int marks;
while(true)
{
cout<< "your marks are:";
cin>>marks;
ifpass(marks);
}
}
void ifpass(int marks)
{
if (marks > 50 )
{ cout<< "you have passed the exams"<<endl;
}

if (marks==50)
{ cout<< "your marks are good"<<endl;
}
if (marks < 50)
{ cout<< "your marks are not good"<<endl;
}
}