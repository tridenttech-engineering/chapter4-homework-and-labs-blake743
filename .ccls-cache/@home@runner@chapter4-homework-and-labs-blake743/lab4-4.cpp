//Lab4-4.cpp - displays the volume of a cylinder
//Created/revised by Blake Smith on 7/7/24
#include <iostream>
using namespace std;
int main()
{
//declare variables
double height   = 0.0;
 double radius   = 0.0;
double volume   = 0.0;
const double pi = 3.14;
 //inputs to enter info
cout << "Height: ";
cin >> height;
cout << endl;
cout << "Radius: ";
cin >> radius;
cout << endl;
//calculate and display the volume
volume = pi * radius * radius * height;
cout<< "Here is the Volume of your Cylinder: " << volume << endl;
return 0;
}
 //end of main function