#include "stackADT1.h"

stackADT1::stackADT1(int stackCapacity): members(stackCapacity)
{
    valueCount=0;
}
bool stackADT1::push(int val)
{   if(isFull())
    {  cout<<"stack full cannot push "<< val << endl;
       return (false);
    }
    members.setElement(valueCount,val);
    valueCount++;
    return(true);
}
int stackADT1::pop()
{

    if(isEmpty())
    {
       cout<<"stack empty, cannot pop"<< endl;
       return false;
    }
    valueCount--;
    return(members.getElement(valueCount));

}
bool stackADT1::isEmpty()
{
    if(valueCount==0)
    {
        return(true);
    }
    return(false);
}
bool stackADT1::isFull()
{
    if(valueCount==members.getCapacity())
    {
        return(true);
    }
    return(false);
}


stackADT1::~stackADT1()
{

}
