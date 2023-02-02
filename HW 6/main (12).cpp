#include <iostream>
#include <cmath>
using namespace std;

//Week 5 hw - Program 1 - 3D array index
//Thejaswin Kumaran - TXK210042

int main() {
   
    //Self-notes:
    
    /*There are 2 assumptions, that the sample size is 24 people, and no two people in the sample have identicle attributes.
    Each person, or element has 3 attributes. Gender(M/F), age group(Minor, Adult, Senior), State(California, Texas, Florida, New York).
    
    The input is an index(0-23) that specifies the person, and their respective elements.
    
    Pseado: Make 3 arrays, one for each attribute, that all stores data at the the index of the respective person.
    All 3 arrays should be index-alligned.
    */
    
    
    string names[2][3][4] = 
    {//1st dimension
        {//2nd dimension
            {"Liam", "Noah", "Oliver", "Elijah"},//3rd
            {"William", "James", "Benjamin", "Lucas"},
            {"Henry", "Alexander", "Mason", "Ethan"}
        },
        {
            {"Ava", "Sophia", "Isabella", "Evelyn"},
            {"Olivia", "Emma", "Charlotte", "Amelia"},
            {"Luna", "Camila", "Gianna", "Elizabeth"}
        }
    };
    
    
    
    //input is a user provided array.
    cout << "Please enter an index(0-23): \n";
    int index;
    cin >> index;
    
    cout << names[index / 12][(index % 12) / 4][(index % 4)];
    
    
    
    
    /*
    //Converting the index input to an index for the 3D array.*****************************
    int index1;
    int index2;
    int index3;
    
    if (index >= 12)//Specifies 1st dimension
    {
        index1 = 1;
        index = index - 12;
    }
    
    
    if ((index < 3) && (index > 8))//Specifies 2nd dimension
    {
        index2 = 1;
        index = index - 4;
    }
    else if (index > 7)
    {
        index2 = 2;
        index = index - 8;
    }
    
    if (index > 4)//error detection for debugging
    {
        cout << "Error @line 68. Index calculation issue."
    }
    index3 = index;//Specifies 3rd dimension
    */
    
    
    return 0;
}
