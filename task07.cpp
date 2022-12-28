#include<iostream>
     using namespace std;
     void totalamount(string day, int amount);

   main()
{
  string day;
  int amount;
  while(true)
{ cout<< "enter the day:";
  cin>>day;
  cout<< "enter the amount:";
  cin>>amount;
  totalamount(day,amount);
}
}
  void totalamount(string day, int amount)
{
  int payableamount;
  
  if(day=="sunday")
{
  payableamount=amount-(amount*0.10);
  cout<< "payable amount is :"<<payableamount<<endl;
}
if(day!="sunday")
{
cout<< "payable amount is :"<<amount<<endl;
}
}