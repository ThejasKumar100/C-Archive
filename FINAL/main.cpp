#include <iostream>
#include <cmath>
#include <fstream>
#include <string.h>
using namespace std;

#include "BaseSorter.h"

#include "BubbleSorter.h"
#include "InsertionSorter.h"
#include "QuickSorter.h"

//Final project - Sorting program - Draft version
//Thejaswin Kumaran - TXK210042

//Test File name: test
//Number of elements: 7


int main(int argc, char* argv[]) {
    
    //Add a before-change print
    ifstream file;
    if (argc != 3)
    {
        return 1;
    }
    file.open(argv[1]);
    
    
    
    int count = 0;
    int temp = 0;
    if (file)
    {
        while (file >> temp)
        {
            count ++;
        }
        
        
        if (strcmp(argv[2], "bubble") == 0)
        {
            BaseSorter* obj = new BubbleSorter(file, count);
            cout << "List before being bubble sorted: \n";
            obj->print();
            obj->sort();
            cout << "List after being bubble sorted: \n";
            obj->print();
        }
        else if (strcmp(argv[2], "insertion") == 0)
        {
            BaseSorter* obj = new InsertionSorter(file, count);
            cout << "List before being insertion sorted: \n";
            obj->print();
            obj->sort();
            cout << "List after being insertion sorted: \n";
            obj->print();
        }
        else if (strcmp(argv[2], "quick") == 0)
        {
            BaseSorter* obj = new QuickSorter(file, count);
            cout << "List before being quick sorted: \n";
            obj->print();
            obj->sort();
            cout << "List after being quick sorted: \n";
            obj->print();
        }
    }
    
    
    file.close();
    
    
    
    return 0;
}