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
  int payableamount1;
  int payableamount2;
  if(day=="sunday")
{
  payableamount1=amount-(amount*0.10);
  cout<< "payable amount is :"<<payableamount1<<endl;
}
  if(day!="sunday")
{
  payableamount2=amount-((5*amount)/100);
  cout<< "payable amount is :"<<payableamount2<<endl;
}
}

