#include <iostream>
#include <cmath>
using namespace std;

//Week 3 hw - String Swap program
//Thejaswin Kumaran - TXK210042

int main() {
   
   //Read two numbers
   cout << "Please enter the two strings you would want swapped.\n";
   string str1;
   cin >> str1;
   string str2;
   cin >> str2;
   
   //Compute, and switch the two values
   str1.append(str2);
   //This command gives the locaation of str1 when str1 hold a combination of both str1 and str2 >>> str1.find(str2);
   str2.replace( 0 , str2.length() , str1.substr( 0 , str1.find(str2) )); // This makes str2 the value first placed in str1
   str1.erase( 0 , str2.length() );
   
   //Print commands
   cout << "The values switched >>> " << "\n";
   cout << str1 << "\n";
   cout << str2;
   
   return 0;
}


