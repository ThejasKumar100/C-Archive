#include <iostream>
#include <vector>
using namespace std;

int main() {

   //This section finds the length of the vector
   cout << "Enter in the number of words >>> ";
   int length;
   cin >> length;
   vector<string> vec(length);
   string str;
   cout << "\n";
   
   //This gets all the inputs for the vector
   for (int q = 0; q < length; q ++)
   {
       cout << "Enter in word " << (q + 1) << " >>> ";
      cin >> str;
      vec[q] = str;
   }
   //Finds the last input, the search parameter
   cout << "Enter in the search parameter >>> ";
   string search;
   cin >> search;
   
   //This finds out what elements of the vector have to be removed from the vector
   //str is now used as a string holder
   int num;
   for (int q = 0; q < length; q ++)//Cycles through each number
   {
      //str = vec[q];
      num = vec[q].find(search);
      if (num == -1)
      {
         vec[q].erase();
         //q --;
      }
   }
   cout << "\n";
   
   
   //output
   for (int q = 0; q < vec.size() - 1; q ++)
   {
       if (vec[q].empty() == false)
       {
        cout << vec[q] << ", ";
       }
   }
    if (vec[vec.size() - 1].empty() == false)
    {
    cout << vec[vec.size() - 1];
    }
   //test data: 4 hello zoo sleep drizzle z
   
   
   //int length = Integer.valueOf(input.substr(0, 1));//Gets the int and the length needed for the vector
   //input = input.substr(2, input.length() - 2);//Removes the digit from the input data.
   
   return 0;
}



