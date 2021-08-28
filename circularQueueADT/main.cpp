#include <iostream>
#include "../code/sourcecode/circularQueue.h"

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    queueADT2 q1(5);
    for(int value=1;value<10;value++)
    {
        if(!q1.addToQueue(value))
        {
            cout<<"Could not add "<<value<<"to queue, queue full."<<endl;
        }
    }
    for(int value=1;value<10;value++)
    {
        if(!q1.isEmpty())
        {
            cout<<"Deleted "<<q1.deleteFromQueue()<<" from queue."<<endl;
        }else{
            cout <<"could not delete, queue empty"<<endl;
        }
    }

    return 0;
}
