#include "queueADT1.h"

queueADT1::queueADT1(int capacity): members(capacity)
{
    counter=0;
}
bool queueADT1::isEmpty()
{
    if(counter==0)
    {
        return(true);
    }
    return(false);
}
bool queueADT1::isFull()
{
    if(counter==members.getCapacity())
    {
        return(true);
    }
    return(false);
}
bool queueADT1::addToQueue(int val)
{
     if(isFull())
     {
         return (false);
     }
     members.setElement(counter,val);
     counter++;
     return(true);
}
bool queueADT1::deleteFromQueue()
{
     if(isEmpty())
     {
         return (false);
     }
     int answer = members.getElement(0);
     for(int in = 1;in< counter;in++)
     {
         members.setElement(in-1,members.getElement(in));
     }
     counter--;
     return(answer);
}
queueADT1::~queueADT1()
{
    //dtor
}
