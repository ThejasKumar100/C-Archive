#include <iostream>
#include <cmath>
#include <fstream>
using namespace std;

#include "BaseSorter.h"

//Final project (Part 1 - BubbleSorter) - Draft version
//Thejaswin Kumaran - TXK210042

class BubbleSorter : public BaseSorter {
    
    protected:
    int tempInt = 0;
    bool change = true;
    
    public:
    BubbleSorter(ifstream& ifs, int size) : BaseSorter(ifs, size)
    {
        
    }
    
    
    void sort()
    {
        while (change)//The sort will run continuously until the change parameter shows that no more changes are being made.
        {
            change = false;
            
            //This loop is the actual bubble sort, and will swap 2 consecutive elements if they are out of order
            for (int q = 0; q < (numEntries - 1); q ++)
            {
                if (buf[q] > buf[q + 1])//Do values have to be switched?
                {
                    //Swap
                    tempInt = buf[q];
                    buf[q] = buf[q + 1];
                    buf[q + 1] = tempInt;
                    
                    change = true;
                }
            }
        }
    }
};