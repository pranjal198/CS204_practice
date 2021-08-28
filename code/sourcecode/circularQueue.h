#ifndef QUEUEADT1_H
#define QUEUEADT1_H

#include "../sourcecode/arrayADT1.h"

using namespace std;

class queueADT2
{
    public:
        queueADT2()=delete;
        queueADT2(int);//queue creation with capacity specifies
        bool isEmpty();
        bool isFull();
        bool addToQueue(int);
        bool deleteFromQueue();
        virtual ~queueADT2();

    protected:

    private:
        arrayADT1 members;
        int head, tail;
        int cAdd(int);
};

#endif // QUEUEADT1_H
