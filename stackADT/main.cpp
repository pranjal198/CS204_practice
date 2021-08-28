#include <iostream>
#include "../code/sourcecode/stackADT1.h"
using namespace std;

int main()
{

    stackADT1 s1(5);
    for(int count=10; count<20; count++)
    {
        s1.push(count);
    }
    for(int count=10; count<20; count++)
    {    if(!s1.isEmpty()){
        cout<<"popped "<<s1.pop()<<"from stack"<< endl;
    }}
    return 0;
}
