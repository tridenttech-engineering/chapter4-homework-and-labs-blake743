// Introductory11.cpp - displays ending balance
// Created/revised by Blake Smith on 7/9/24

#include <iostream>
using namespace std;

int main() {
  // declare variables
double BB = 0.0;
double TD = 0.0;
double TW = 0.0;
double NB = 0.0;
  //inputs for run screen
cout<<"Enter Your Current Balance: $";
  cin>>BB;
cout<<"Enter Your Total Deposits for the Month: $";
  cin>>TD;
cout<<"Enter Your Total Withdrawals for the Month: $";
  cin>>TW;
  //calculate and display
NB=BB+TD-TW;
cout<<"Your New Balance is: $"<<NB<<endl;
  return 0;
} // end of main function