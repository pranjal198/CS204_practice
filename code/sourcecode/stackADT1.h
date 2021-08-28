#ifndef STACKADT1_H
#define STACKADT1_H
#include "../sourcecode/arrayADT1.h"

class stackADT1
{
    public:
        stackADT1()=delete;//disable creation of stack with default constructor
        stackADT1(int); //create stack of particular capacity
        bool push(int);
        int pop();
        bool isEmpty();
        bool isFull();

        virtual ~stackADT1();

    protected:

    private:
        int valueCount;
        arrayADT1 members;
};

#endif // STACKADT1_H
