//Lab4-2.cpp - displays a salesperson's commission
//Blake Smith 7/7/24
#include <iostream>
using namespace std;
int main()
{
//declare variables
  const double COMM_RATE=0.1;
  double SALES=0.0;
  double COMMISSION=0.0;
  //input on run screen
cout<<"Enter Sales Amount:$";
  cin>>SALES;
  //process and display
  COMMISSION=SALES*COMM_RATE;
  cout<<"Your Commission is $"<<COMMISSION<<endl;
  return 0;
} //end of main function
/*
Sales amount: 1328.50
Commission: $132.85
Press any key to continue . . .
*/