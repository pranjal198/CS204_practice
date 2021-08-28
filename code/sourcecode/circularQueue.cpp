#include "circularQueue.h"

queueADT2::queueADT2(int capacity): members(capacity+1)
{
    head=0;
    tail=0;
}

bool queueADT2::isEmpty()
{
    if(head==tail)
    {
        return(true);
    }
    return(false);
}
int queueADT2::cAdd(int val)
{
    if(val==members.getCapacity()-1)
    {
        return(0);
    }
    return(val+1);
}
bool queueADT2::isFull()
{
    if(head==cAdd(tail))
    {
        return(true);
    }
    return(false);
}
bool queueADT2::addToQueue(int val)
{
     if(isFull())
     {
         return (false);
     }
     members.setElement(tail,val);
     tail=cAdd(tail);
     return(true);
}
bool queueADT2::deleteFromQueue()
{
     if(isEmpty())
     {
         return(-1);
     }
     int answer = members.getElement(head);
     /*
     for(int in = 1;in< counter;in++)
     {
         members.setElement(in-1,members.getElement(in));
     }
     */
     head=cAdd(head);
     return(answer);
}
queueADT2::~queueADT2()
{
    //dtor
}
