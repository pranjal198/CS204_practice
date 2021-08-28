#ifndef ARRAYADT1_H
#define ARRAYADT1_H
#include <iostream>

using namespace std;
class arrayADT1
{
    public:
        arrayADT1();
        arrayADT1(int);
        virtual ~arrayADT1();
        bool setElement(int,int);
        int getElement(int);
     protected:

    private:
        int capacity;
        int* elements;
};

#endif // ARRAYADT1_H
