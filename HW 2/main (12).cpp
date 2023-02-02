#include <iostream>
#include <cmath>
using namespace std;

//Week 2 hw - Prime number program
//Thejaswin Kumaran - TXK210042

int main() {
   
   int in = 0;
   
   cout << "Please enter a number >>> ";
   cin >> in;
   int limit = ceil(sqrt(in));
   //When finding a prime number, I just have to find the square root of the in put number, which is done in the code above,
   //And see if the input number is divisable by that number or any number below it. I also round the square root
   // up to be safe.
   
   for (int q = 2; q < limit + 1; q ++)//This loop will cycle through every 
   {
       if ((in % q) == 0)
       {
           cout << in << " is not a prime number.";
           return 0;
       }
   }
   cout << in << " is a prime number.";
   
   return 0;
}

