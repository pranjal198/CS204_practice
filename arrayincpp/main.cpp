#include <iostream>

#include "arrayADT1.h"

using namespace std;

int main()
{

   cout << "Enter the size of array:";
   int arraySize;
   cin>>arraySize;

   arrayADT1 a(arraySize);

   for(int i=0; i<arraySize; i++)
    {
        a.setElement(i,i*1000);
        cout<<"Array element at index " <<i<<" is "<<a.getElement(i)<<endl;
    }


    return 0;
}
