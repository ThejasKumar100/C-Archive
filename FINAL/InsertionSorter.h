#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

#include "BaseSorter.h"

//Final project (Part 2 - InsertionSorter) - Draft version
//Thejaswin Kumaran - TXK210042

class InsertionSorter : public BaseSorter {
    
    protected:
    int tempInt = 0;
    int w = 0;
    
    public:
    InsertionSorter(ifstream& ifs, int size) : BaseSorter(ifs, size)
    {
        
    }
    
    
    void sort()
    {
        //This sort works by ordering 2 elements. Then it moves to the next and swaps elements, by sets of 2
        //To make sure each element is ordered, the loop goes back every time there is a change, in case
        //The element has to be sent back further.
        for (int q = 0; q < numEntries; q ++)
        {
            w = (q + 1);
            while ((w > 0) && (buf[w - 1] > buf[w]))
            {
                w = w - 1;
            }
        }
        
        print();
    }
    
};