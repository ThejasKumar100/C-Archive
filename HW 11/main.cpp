#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

#include "Person.h"

//Week11 hw - Reading a binary file - Submission version
//Thejaswin Kumaran - TXK210042

//Filename, # of objects to scan
//person.dat 2
int main(int argc, char* argv[]) {
    
    
    //Open the file in binary mode
    ifstream file;
    if (argc != 3)//check if the command line arguments are correct
    {
        return 1;
    }
    file.open(argv[1],ios::in|ios::binary);//Open the file
    
    
    
    //If the file is found and accessible, rest of the code runs
    if (file)
    {
        int size = stoi(argv[2]);
        
        Person* per = new Person[size];
        for (int q = 0; q < size; q ++)
        {
            file.read((char*)&per[q],sizeof(per[q]));//Parses the data
            cout << per[q] << endl;//Outputs data
        }
        
        //Close the file
        file.close();
    }
    return 0;
}