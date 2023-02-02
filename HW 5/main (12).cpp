#include <iostream>
#include <cmath>
using namespace std;

//Week 5 hw - Program 2 - Astriks pyramid
//Thejaswin Kumaran - TXK210042

int main() {
   
    //Read input
    cout << "Please enter a string.\n";
    int num;
    cin >> num;
    cout << "\n";
    
    
    //Print section
    
    string str = " ";
    string str2 = "*";
    //Outer loop will be associated with the line being printed
    //Inner loop 1 will be associated with how many spaces are going to be printed
    //Inner loop 2 will be associated with how many astriks are going to be printed
    
    for (int q = 1; q <= num; q ++)//Outer loop
    {
        for (int w = (num - q); w > 0; w --)//Inner loop 1
        {
            cout << str;
        }
        
        for (int w = num; w > (num - q); w --)//Inner loop 1
        {
            cout << str2;
        }
        
        cout << "\n";
    }
    
    
    
    return 0;
}







