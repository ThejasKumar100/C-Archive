#include "ComplexNumber.h"
#include <iostream>
using namespace std;


ostream& operator<<(ostream& out, const ComplexNumber& obj)
{
    if (obj.imgnry == 0)
    {
        out << obj.real;
    }
    else if (obj.imgnry > 0)
    {
        out << obj.real << " + " << obj.imgnry << "i";
    }
    else if (obj.imgnry < 0)
    {
        cout << obj.real << " - " << obj.imgnry << "i";
    }
    cout << "\n";
    
    return out;
}

    
    //-----------------------operator list----------------------
    //Constructor esque operator. Initializes the values
    ComplexNumber::ComplexNumber(double r, double i)//r - regular number, i - factor of an imaginary number
    {
        real = r;
        imgnry = i;
    }
    
    //Sum operator
    ComplexNumber ComplexNumber::operator+(ComplexNumber input)//done
    {
        ComplexNumber output;
        output.real = real + input.real;
        output.imgnry = imgnry + input.imgnry;
        
        return output;
    }
    
    //Subtraction/difference operator
    ComplexNumber ComplexNumber::operator-(ComplexNumber input)//done
    {
        ComplexNumber output;
        output.real = real - input.real;
        output.imgnry = imgnry - input.imgnry;
        
        return output;
    }
    
    //Multiplication operator
    ComplexNumber ComplexNumber::operator*(ComplexNumber input)//Fixed
    {
        ComplexNumber output;
        output.real = ((real * input.real) - (imgnry * input.imgnry));
        output.imgnry = ((imgnry * input.real) + (input.imgnry * real));
        
        return output;
    }
    
    //Sum operator
    ComplexNumber ComplexNumber::operator/(ComplexNumber input)//done
    {
        ComplexNumber output;
        output.real = ((real * input.real)+(imgnry * input.imgnry)) / ((input.real * input.real) + (input.imgnry * input.imgnry));
        output.imgnry = ((imgnry * input.real) - (real * input.imgnry)) / ((input.real * input.real) + (input.imgnry * input.imgnry));
        
        return output;
    }
    
    //Sum operator
    ComplexNumber ComplexNumber::operator~()
    {
        ComplexNumber output;
        output.real = real;
        output.imgnry = imgnry * (-1);
        
        return output;
    }
    

    //Operator section----------------------------------------------------------------------------
    
