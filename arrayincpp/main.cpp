#include <iostream>
#include "arrayADT1.h"

using namespace std;

int main()
{
   arrayADT1 a(5);

   for(int i=0; i<5; i++)
    {
        a.setElement(i,i*1000);
        cout<<"Array element at index " <<i<<" is "<<a.getElement(i)<<endl;
    }
    return 0;
}
