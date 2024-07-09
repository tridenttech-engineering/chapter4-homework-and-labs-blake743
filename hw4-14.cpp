// Intermediate14.cpp - displays total sold and percentages of small, medium,
// large, and family sold Created/revised by Blake Smith on 7/9/24

#include <iostream>
using namespace std;

int main() {
  // declare variables
int NSP = 0;
int NMP = 0;
int NLP = 0;
int NFP = 0;
int TP = 0;
double PSP = 0.0;
double PMP = 0.0;
double PLP = 0.0;
double PFP = 0.0;
  // inputs from user
cout << "Number of small pizzas sold: ";
  cin >> NSP;
cout << "Number of medium pizzas sold: ";
  cin >> NMP;
cout << "Number of large pizzas sold: ";
  cin >> NLP;
cout << "Number of family pizzas sold: ";
  cin >> NFP;
  // calculate and display the stuff asked for
TP = NSP + NMP + NLP + NFP;
PSP = (static_cast<double>(NSP) / (TP)) * 100;
PMP = (static_cast<double>(NMP) / (TP)) * 100;
PLP = (static_cast<double>(NLP) / (TP)) * 100;
PFP = (static_cast<double>(NFP) / (TP)) * 100;
cout << "Total Pizzas Sold: " << TP << endl;
cout << "Percentage of Small Pizzas Sold: " << PSP << endl;
cout << "Percentage of Medium Pizzas Sold: " << PMP << endl;
cout << "Percentage of Large Pizzas Sold: " << PLP << endl;
cout << "Percentage of Family Pizzas Sold: " << PFP << endl;
  return 0;
} // end of main function