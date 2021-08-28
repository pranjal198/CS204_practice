#include "arrayADT1.h"

arrayADT1::arrayADT1()
{
    capacity=0;
    elements=nullptr;
}
arrayADT1::arrayADT1(int arraySize)
{
    capacity=arraySize;
    elements=new int(arraySize);
}
bool arrayADT1::setElement(int index, int val)
{
    elements[index]=val;
}

int arrayADT1::getElement(int index)
{
    return(elements[index]);
}
arrayADT1::~arrayADT1()
{
    //dtor
}
