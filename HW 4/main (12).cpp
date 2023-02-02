#include <iostream>
#include <cmath>
using namespace std;

//Week 4 hw - String to Hex converter
//Thejaswin Kumaran - TXK210042
string name;

int main() {
   
   //Read input
   cout << "Please enter a string.\n";
   string str;
   cin >> str;
   
   //convert string to char
   int length = str.length();
   int plchldr = 0;//Placeholder int for turning a char into an int
   for (int q = 0; q < length; q++)
   {
       plchldr = str.at(q);
       cout << hex << plchldr << " ";
   }
   
   return 0;
}



