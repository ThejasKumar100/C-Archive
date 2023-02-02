#include <iostream>
using namespace std;

int main() {
   int highwayNumber;
   
   cin >> highwayNumber;
   

   if((highwayNumber % 100) == 0)
   {
      cout << highwayNumber << " is not a valid interstate highway number";
      return 0;
   }
   
   
   //Stating whether the highway is promary or auxilary
   if (highwayNumber < 100)
   {
      cout << "I-" << highwayNumber << " is primary, ";
   }
   else
   {
      cout << "I-" << highwayNumber << " is auxiliary, serving I-" << (highwayNumber % 100) << ", ";
   }
   
   
   //Adding the direction of the highway
   if((highwayNumber % 2) == 0)
   {
      cout << "going east/west.";
   }
   else
   {
      cout << "going north/south.";
   }
   
   
   return 0;
}

