#ifndef QUEUEADT1_H
#define QUEUEADT1_H

#include "../sourcecode/arrayADT1.h"

using namespace std;

class queueADT1
{
    public:
        queueADT1()=delete;
        queueADT1(int);//queue creation with capacity specifies
        bool isEmpty();
        bool isFull();
        bool addToQueue(int);
        bool deleteFromQueue();
        virtual ~queueADT1();

    protected:

    private:
        arrayADT1 members;
        int counter;
};

#endif // QUEUEADT1_H
